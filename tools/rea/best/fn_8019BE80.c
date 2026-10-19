// auto/text_8019BE80 fn_8019BE80 99.7778
extern "C" {
extern char lbl_80364CC8[0x4];
extern char lbl_80364CCC[0x6];
void fn_80060E30(...);
void fn_8019BB1C(int);
void fn_8019CB40(int, int, int);
void fn_80215BFC(void *);
s32 fn_80215C84(void *, int, void *, int, int);
struct C80215F50 { char pad[0x3c]; C80215F50(void); ~C80215F50(); };

void fn_8019BE80(s32 param_1, u32 param_2, u32 param_3) {
    s32 iVar1;
    C80215F50 lobj0;
    if (*(u32 *)(param_1 + 0x40) != 0) {
        fn_8019BB1C((int)(param_1));
    }
    iVar1 = fn_80215C84(&lobj0, (int)(param_3), lbl_80364CC8, (int)(2), (int)(0));
    if (iVar1 != 0) {
        fn_80060E30(iVar1,lbl_80364CCC,param_3,lbl_80364CC8); /* "%s.%s" */
    }
    fn_8019CB40((int)(param_1), (int)(param_2), (int)((*(u32 *)((s8 *)&lobj0 + 0x2c))));
    fn_80215BFC(&lobj0);
}
}
