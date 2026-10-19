// auto/text_80196474 fn_80196474 97.5532
extern "C" {
void __dl__FPv(int);
void __dla__FPv(int);
void fn_8014AAE4(int);
struct VCall_fn_80196474_0 { virtual void p0(); virtual void m(); };

u32 * fn_80196474(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        if ((u32 *)*param_1 != (u32 *)0x0) {
            ((VCall_fn_80196474_0 *)((s32 *)**(u32 **)*param_1))->m();
        }
        if (param_1[2] != 0) {
            __dla__FPv((int)(param_1[2] + -0x10));
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        fn_8014AAE4((int)(param_1 + 7));
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
