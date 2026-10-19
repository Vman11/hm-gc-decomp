// auto/text_801DFD34 __dt__9C801DFDC8Fv 95.1351
extern "C" {
extern u8 __vt__9C801DFDC8[];
void __dl__FPv(int);
void __dt__9C80031B94Fv(int, int);
void __dt__9C801EB864Fv(int, int);
void fn_8017AD60(int, int);
struct VCall_fn_801DFD34_0 { char vptr_pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 __dt__9C801DFDC8Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x14) = __vt__9C801DFDC8;
        *(u32 *)(param_1 + 0x1c) = 0x802ed584;
        ((VCall_fn_801DFD34_0 *)(param_1))->m();
        fn_8017AD60((int)(param_1 + 0x34), (int)(0xffffffff));
        __dt__9C80031B94Fv((int)(param_1 + 0x18), (int)(0));
        __dt__9C801EB864Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
