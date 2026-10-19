// auto/text_8013EF3C fn_8013EF3C 96.3793
extern "C" {
extern u8 lbl_802E5F20[];
extern char lbl_80364340[0x4];
extern char lbl_80364344[0x6];
void fn_80060E30(...);
void fn_8013ED50(int, int, int);
void fn_80215BFC(void *);
s32 fn_80215C84(void *, int, void *, int, int);
struct C80215F50 { char pad[0x3c]; C80215F50(void); ~C80215F50(); };
struct VCall_fn_8013EF3C_0 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };
struct VCall_fn_8013EF3C_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void m(int, int, int); };

void fn_8013EF3C(s32 param_1, u32 param_2, u32 param_3) {
    s32 iVar1;
    C80215F50 lobj0;
    if (*(u32 *)(param_1 + 0x18) != 0) {
        ((VCall_fn_8013EF3C_0 *)(param_1))->m();
    }
    iVar1 = fn_80215C84(&lobj0, (int)(param_3), lbl_80364340, (int)(2), (int)(0));
    if (iVar1 != 0) {
        fn_80060E30(iVar1,lbl_80364344,param_3,lbl_80364340); /* "%s.%s" */
    }
    ((VCall_fn_8013EF3C_1 *)((*(u32 *)((s8 *)&lobj0 + 0x2c))))->m((s32)((u32)lbl_802E5F20), (s32)(3), (s32)(0));
    fn_8013ED50((int)(param_1), (int)(param_2), (int)((*(u32 *)((s8 *)&lobj0 + 0x2c))));
    fn_80215BFC(&lobj0);
}
}
