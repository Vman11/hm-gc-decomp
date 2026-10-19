// auto/text_80132C64 fn_80132C64 96.4583
extern "C" {
struct VCall_fn_80132C64_0 { char vptr_pad[0x30]; virtual void p0(); virtual void m(); };

void fn_80132C64(s32 param_1, u32 param_2, u16 param_3, u32 param_4, u16 param_5, u32 param_6, u16 param_7) {
    *(u16 *)(param_1 + 0x24) = param_3 & 0xff03;
    *(u16 *)(param_1 + 0x24) = *(u16 *)(param_1 + 0x24) | 0x81;
    *(u16 *)(param_1 + 0x20) = 0;
    *(u32 *)(param_1 + 0x34) = param_4;
    *(u32 *)(param_1 + 0x14) = param_6;
    *(u16 *)(param_1 + 0x22) = param_7;
    *(u16 *)(param_1 + 0x28) = param_7;
    *(u16 *)(param_1 + 0x26) = param_5;
    *(u16 *)(param_1 + 0x2a) = 0;
    ((VCall_fn_80132C64_0 *)(param_1))->m();
}
}
