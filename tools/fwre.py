import struct, sys, bisect, re, json
from capstone import *
from capstone.arm import *

BIN = r"C:\Users\m_xia\Documents\deepseek-harness\default-workspace\stm32\firmware.bin"
BASE = 0x08000000
data = open(BIN, "rb").read()
last = max(i for i, b in enumerate(data) if b != 0xFF)
END = BASE + last + 1

md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
md.detail = True

insns = []          # (addr, mnemonic, op_str, size, bytes)
addr = BASE
while addr < END:
    off = addr - BASE
    ok = False
    for ins in md.disasm(data[off:off + 4], addr):
        insns.append((ins.address, ins.mnemonic, ins.op_str, ins.size, ins.bytes.hex()))
        addr += ins.size
        ok = True
        break
    if not ok:
        addr += 2

text = {a: (m, o, s, h) for a, m, o, s, h in insns}

# ---- function starts: bl targets + push{...,lr}
starts = set([BASE])
for a, m, o, s, h in insns:
    if m == "bl":
        m2 = re.match(r"#0x([0-9a-f]+)", o)
        if m2:
            t = int(m2.group(1), 16)
            if BASE <= t < END:
                starts.add(t)
        m3 = re.match(r"0x([0-9a-f]+)", o)
        if m3:
            t = int(m3.group(1), 16)
            if BASE <= t < END:
                starts.add(t)
    if m in ("push", "stmdb") and "lr" in o:
        starts.add(a)
starts = sorted(starts)

# ---- all strings with addresses
strs = []
for m in re.finditer(rb"[\x20-\x7e]{5,}", data):
    strs.append((BASE + m.start(), m.group().decode("ascii", "replace")))
str_map = {a: s for a, s in strs}
str_addrs = sorted(str_map)

# ---- pointer table: for each 4-byte aligned position, value
ptr_at = {}
for i in range(0, len(data) - 4, 2):
    v = struct.unpack_from("<I", data, i)[0]
    if v in str_map:
        ptr_at.setdefault(v, []).append(BASE + i)

# ---- ldr pc-relative -> literal -> string
str_xrefs = {}   # string addr -> list of (insn addr, func start)
for a, m, o, s, h in insns:
    if "pc" not in o or not m.startswith("ldr"):
        continue
    mm = re.search(r"#(-?0x[0-9a-fA-F]+|-?\d+)", o)
    if not mm:
        continue
    d = int(mm.group(1), 16) if "0x" in mm.group(1) else int(mm.group(1))
    for tgt in (a + 4 + d, ((a + 4) & ~3) + d):
        off = tgt - BASE
        if 0 <= off < len(data) - 4:
            v = struct.unpack_from("<I", data, off)[0]
            if v in str_map:
                fi = bisect.bisect_right(starts, a) - 1
                str_xrefs.setdefault(v, []).append((a, starts[fi]))
                break

# ---- function sizes
sizes = []
for i, s in enumerate(starts):
    e = starts[i + 1] if i + 1 < len(starts) else END
    sizes.append((e - s, s, e))

def func_of(a):
    i = bisect.bisect_right(starts, a) - 1
    return starts[i]

if __name__ == "__main__":
    cmd = sys.argv[1] if len(sys.argv) > 1 else "summary"
    if cmd == "summary":
        print(f"insns={len(insns)} funcs={len(starts)} strings={len(strs)}")
        print(f"code end=0x{END:08X}")
        print("\n-- top 20 functions by size --")
        for sz, s, e in sorted(sizes, reverse=True)[:20]:
            print(f"  0x{s:08X}-0x{e:08X}  {sz:6d} bytes")
        print("\n-- strings with xrefs (func) --")
        for saddr in sorted(str_xrefs, key=lambda x: str_map[x]):
            fs = sorted(set(f for _, f in str_xrefs[saddr]))
            print(f"  0x{saddr:08X} [{','.join('0x%X' % f for f in fs)}]  {str_map[saddr][:70]}")
    elif cmd == "dis":
        s = int(sys.argv[2], 16)
        e = int(sys.argv[3], 16) if len(sys.argv) > 3 else s + 0x100
        for a in range(s, e, 2):
            if a in text:
                m, o, sz, h = text[a]
                print(f"0x{a:08X}:  {h:<10} {m:<10} {o}")
