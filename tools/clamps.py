import sys, struct, re
sys.path.insert(0, r"C:\Users\m_xia\Documents\deepseek-harness\default-workspace\stm32")
import fwre

BASE = 0x08000000
data = fwre.data
text = fwre.text
order = [a for a, *_ in fwre.insns]
pos = {a: i for i, a in enumerate(order)}

def f32(bits):
    return struct.unpack("<f", struct.pack("<I", bits))[0]

rows = []
for a, m, o, s, h in fwre.insns:
    if not (m.startswith("vcmpe.f32") or m.startswith("vcmp.f32")):
        continue
    fs = fwre.func_of(a)
    i = pos[a]
    found = []
    for j in range(i, min(i + 9, len(order))):
        b = order[j]
        mb, ob, sb, hb = text[b]
        if mb.startswith("mov.w") and "r" in ob:
            mm = re.search(r"#0x([0-9a-f]+)", ob)
            if mm:
                bits = int(mm.group(1), 16)
                if 0x30000000 <= bits <= 0x4FFFFFFF:
                    found.append(("mov", b, f32(bits)))
        if mb.startswith("ldr") and "pc" in ob:
            mm = re.search(r"#(-?0x[0-9a-fA-F]+|-?\d+)", ob)
            if mm:
                d = int(mm.group(1), 16) if "0x" in mm.group(1) else int(mm.group(1))
                for tgt in (b + 4 + d, ((b + 4) & ~3) + d):
                    off = tgt - BASE
                    if 0 <= off < len(data) - 4:
                        v = struct.unpack_from("<I", data, off)[0]
                        f = f32(v)
                        if 0 < abs(f) < 1e6:
                            found.append(("lit", b, f))
                        break
        if mb.startswith(("vstr", "str")) and found:
            break
    if found:
        rows.append((fs, a, found[0][2]))

rows.sort()
cur = None
for fs, a, v in rows:
    if fs != cur:
        print(f"\n=== 0x{fs:08X}")
        cur = fs
    print(f"    cmp@0x{a:08X}  limit≈{v:g}")
