// auto/text_80253828 fn_80253828 97.3684
extern "C" {
extern u8 lbl_802F236C[];
void __dl__FPv(int);
struct VCall_fn_80253828_0 { char vptr_pad[0x10];  virtual void m(int); };

u32 * fn_80253828(u32 *param_1, s16 param_2) {
    u32 iVar1;

    if (param_1 != (u32 *)0x0) {
        *param_1 = (u32)lbl_802F236C;
        iVar1 = param_1[3];
        if (iVar1 != 0) {
            ((VCall_fn_80253828_0 *)(iVar1))->m((u32)(1));
        }
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 1;
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
