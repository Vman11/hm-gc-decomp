// auto/text_801EDB24 fn_801EDB24 99.2308
extern "C" {
s32 fn_801EB764(void);
struct VCall_fn_801EDB24_0 { char vptr_pad[0x14]; virtual void p0(); virtual void m(); };

u32 fn_801EDB24(s32 param_1) {
    s32 iVar1;
    u32 uVar2;

    iVar1 = fn_801EB764();
    if (iVar1 == 0) {
        uVar2 = 0;
    }
    else {
        if ((*(u32 *)(*(s32 *)(param_1 + 0x18) + 0x70) & *(u32 *)(param_1 + 0x1c)) != 0) {
            ((VCall_fn_801EDB24_0 *)(param_1))->m();
        }
        uVar2 = 1;
    }
    return uVar2;
}
}
