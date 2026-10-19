// auto/text_801DE464 __dt__9C801DE4E0Fv 99.6774
extern "C" {
extern u8 lbl_802ED368[];
void __dl__FPv(int);
void fn_801B2C64(void);
void fn_801B2CBC(int, int);
struct VCall_fn_801DE464_0 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };

s32 __dt__9C801DE4E0Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x10) = lbl_802ED368;
        fn_801B2C64();
        ((VCall_fn_801DE464_0 *)(param_1))->m();
        fn_801B2CBC((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
