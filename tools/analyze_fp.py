import sys, collections
sys.path.insert(0, r"C:\Users\m_xia\Documents\deepseek-harness\default-workspace\stm32")
import fwre

FP = ("vmul", "vadd", "vsub", "vdiv", "vcmp", "vneg", "vabs", "vmla", "vmls",
      "vfma", "vfnma", "vnmla", "vnmul", "vcvt", "vsqrt")

per = collections.defaultdict(list)
for a, m, o, s, h in fwre.insns:
    if m.split(".")[0] in FP:
        fs = fwre.func_of(a)
        per[fs].append((a, m, o))

print("functions with FP ops:", len(per))
rows = []
for fs, lst in per.items():
    rows.append((len(lst), fs, lst))
rows.sort(reverse=True)
for n, fs, lst in rows[:25]:
    size = fwre.END - fs
    print(f"\n=== 0x{fs:08X}  fp_ops={n}")
    for a, m, o in lst[:14]:
        print(f"   0x{a:08X}: {m:<10} {o}")
