// auto/text_8013E680 fn_8013E680 99.7500
extern "C" {
extern char lbl_80364330[0x4];
extern char lbl_80364334[0x6];
void fn_80060E30(...);
void fn_8013E2CC(int, int, int);
void fn_80215BFC(void *);
s32 fn_80215C84(void *, int, void *, int, int);
struct C80215F50 { char pad[0x3c]; C80215F50(void); ~C80215F50(); };

void fn_8013E680(u32 param_1, u32 param_2, u32 param_3) {
    s32 iVar1;
    C80215F50 lobj0;
    iVar1 = fn_80215C84(&lobj0, (int)(param_3), lbl_80364330, (int)(2), (int)(0));
    if (iVar1 != 0) {
        fn_80060E30(iVar1,lbl_80364334,param_3,lbl_80364330); /* "%s.%s" */
    }
    fn_8013E2CC((int)(param_1), (int)(param_2), (int)((*(u32 *)((s8 *)&lobj0 + 0x2c))));
    fn_80215BFC(&lobj0);
}
}
