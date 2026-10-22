import struct
p=r"C:\Users\m_xia\Documents\deepseek-harness\default-workspace\stm32\firmware.bin"
d=open(p,"rb").read(); BASE=0x08000000
for a in [0x080132b0,0x08015bc8,0x08015bcc,0x080148c0,0x08014a10,0x080149e8,0x0801c178,0x0801c17c,0x0801c180,0x0801c184,0x0801c88c,0x0801c890,0x0801c894]:
    v=struct.unpack_from("<f",d,a-BASE)[0]
    u=struct.unpack_from("<I",d,a-BASE)[0]
    print(f"0x{a:08X}: float={v:g}  hex=0x{u:08X}")
