// auto/text_8018AB8C fn_8018AB8C 99.7500
extern "C" {
extern char lbl_80364A48[0x4];
extern char lbl_80364A4C[0x6];
void fn_80060E30(...);
void fn_8018AC2C(int, int, int);
void fn_80215BFC(void *);
s32 fn_80215C84(void *, int, void *, int, int);
struct C80215F50 { char pad[0x3c]; C80215F50(void); ~C80215F50(); };

void fn_8018AB8C(u32 param_1, u32 param_2, u32 param_3) {
    s32 iVar1;
    C80215F50 lobj0;
    iVar1 = fn_80215C84(&lobj0, (int)(param_3), lbl_80364A48, (int)(2), (int)(0));
    if (iVar1 != 0) {
        fn_80060E30(iVar1,lbl_80364A4C,param_3,lbl_80364A48); /* "%s.%s" */
    }
    fn_8018AC2C((int)(param_1), (int)(param_2), (int)((*(u32 *)((s8 *)&lobj0 + 0x2c))));
    fn_80215BFC(&lobj0);
}
}
