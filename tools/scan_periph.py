import struct
d=open(r"C:\Users\m_xia\Documents\deepseek-harness\default-workspace\stm32\firmware.bin","rb").read()
BASE=0x08000000
targets={
 "FDCAN1":0x4000A000,"FDCAN2":0x4000A400,"RCC":0x58024400,
 "GPIOA":0x58020000,"GPIOB":0x58020400,"GPIOC":0x58020800,
 "USART1":0x40011000,"USART2":0x40004400,"USART3":0x40004800,
 "TIM2":0x40000000,"TIM6":0x40001000,"USB":0x40040000,
}
for name,v in targets.items():
    hits=[BASE+i for i in range(0,len(d)-4,4) if struct.unpack_from("<I",d,i)[0]==v]
    print(f"{name:8s} 0x{v:08X}  hits={len(hits)} {[hex(h) for h in hits[:4]]}")
