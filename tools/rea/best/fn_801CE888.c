// auto/text_801CE888 fn_801CE888 96.5385
extern "C" {
extern u8 lbl_802EC760[];
extern char lbl_80365154[0x4];
extern char lbl_80365158[0x6];
void fn_80060E30(...);
void fn_801CE68C(int, int, int, int);
void fn_80215BFC(void *);
s32 fn_80215C84(void *, int, void *, int, int);
struct C80215F50 { char pad[0x38]; C80215F50(void); ~C80215F50(); };
struct VCall_fn_801CE888_0 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };
struct VCall_fn_801CE888_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void m(int, int, int); };

u32 fn_801CE888(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5) {
    s32 iVar1;
    C80215F50 lobj0;
    if (*(s32 *)(param_1 + 0x18) != 0) {
        ((VCall_fn_801CE888_0 *)(param_1))->m();
    }
    iVar1 = fn_80215C84(&lobj0, (int)(param_3), lbl_80365154, (int)(2), (int)(0));
    if (iVar1 != 0) {
        fn_80060E30(iVar1,lbl_80365158,param_3,lbl_80365154); /* "%s.%s" */
    }
    ((VCall_fn_801CE888_1 *)((*(s32 *)((s8 *)&lobj0 + 0x2c))))->m((s32)((u32)lbl_802EC760), (s32)(0x53), (s32)(0));
    fn_801CE68C((int)(param_1), (int)(param_2), (int)((*(s32 *)((s8 *)&lobj0 + 0x2c))), (int)(param_5));
    fn_80215BFC(&lobj0);
    *(u32 *)(param_1 + 0x18) = 1;
    return 0;
}
}
