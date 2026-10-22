import sys, struct, re, collections
sys.path.insert(0, r"C:\Users\m_xia\Documents\deepseek-harness\default-workspace\stm32")
import fwre

BASE = 0x08000000
data = fwre.data

def nice(v):
    if v != v or abs(v) > 1e7:
        return False
    s = f"{v:.6g}"
    return len(s) <= 7 and ("e" not in s or abs(v) < 1e-3)

# float literals
fl = {}
for a in range(0, len(data) - 4, 4):
    v = struct.unpack_from("<f", data, a)[0]
    if nice(v) and abs(v) > 1e-9:
        fl[BASE + a] = v

# refs: vldr / ldr pc-relative to float literal
refs = collections.defaultdict(list)
for a, m, o, s, h in fwre.insns:
    if not (m.startswith("vldr") or m.startswith("ldr")):
        continue
    if "pc" not in o:
        continue
    mm = re.search(r"#(-?0x[0-9a-fA-F]+|-?\d+)", o)
    if not mm:
        continue
    d = int(mm.group(1), 16) if "0x" in mm.group(1) else int(mm.group(1))
    for tgt in (a + 4 + d, ((a + 4) & ~3) + d):
        if tgt in fl:
            refs[fwre.func_of(a)].append((a, fl[tgt]))
            break

print("funcs with float-const refs:", len(refs))
for fs in sorted(refs):
    cs = sorted(set(round(v, 6) for _, v in refs[fs]))
    if len(cs) >= 2:
        print(f"\n=== 0x{fs:08X}  ({len(refs[fs])} refs)")
        print("    consts:", cs[:20])
