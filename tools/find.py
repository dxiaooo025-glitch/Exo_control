import sys, bisect
sys.path.insert(0, r"C:\Users\m_xia\Documents\deepseek-harness\default-workspace\stm32")
import fwre

pat = sys.argv[1]
span = int(sys.argv[2]) if len(sys.argv) > 2 else 12
targets = [(a, s) for a, s in fwre.strs if pat in s]
for saddr, s in targets:
    print(f"### 0x{saddr:08X}  {s[:80]}")
    for ia, fs in fwre.str_xrefs.get(saddr, []):
        print(f"  @0x{ia:08X} in func 0x{fs:08X}")
    if pat in s and not fwre.str_xrefs.get(saddr):
        print("  (no xref)")
