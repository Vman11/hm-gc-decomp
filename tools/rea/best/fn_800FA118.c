// auto/text_800FA118 fn_800FA118 99.7059
extern "C" {
struct VCall_fn_800FA118_0 { char vptr_pad[0x18]; virtual void p0(); virtual int m(); };

u32 fn_800FA118(s32 param_1) {
    s8 cVar1;
    s32 iVar2;

    do {
        while (*(s8 **)(param_1 + 0xc) < *(s8 **)(param_1 + 0x10)) {
            cVar1 = **(s8 **)(param_1 + 0xc);
            *(s32 *)(param_1 + 0xc) = *(s32 *)(param_1 + 0xc) + 1;
            if (cVar1 == '\n') {
                *(s32 *)(param_1 + 0x14) = *(s32 *)(param_1 + 0x14) + 1;
                return 1;
            }
        }
        iVar2 = ((VCall_fn_800FA118_0 *)(param_1))->m();
    } while (iVar2 != 0);
    return 0;
}
}
