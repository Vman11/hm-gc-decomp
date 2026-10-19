// auto/text_80131A98 fn_80131A98 99.7674
extern "C" {
extern char lbl_80364044[0x4];
extern char lbl_80364048[0x6];
void fn_80060E30(...);
void fn_80215BFC(void *);
s32 fn_80215C84(void *, int, void *, int, int);
struct C80215F50 { char pad[0x3c]; C80215F50(void); ~C80215F50(); };
struct VCall_fn_80131A98_0 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int, int); };

void fn_80131A98(s32 param_1, u32 param_2, u32 param_3) {
    s32 iVar1;
    C80215F50 lobj0;
    iVar1 = fn_80215C84(&lobj0, (int)(param_3), lbl_80364044, (int)(2), (int)(0));
    if (iVar1 != 0) {
        fn_80060E30(iVar1,lbl_80364048,param_3,lbl_80364044); /* "%s.%s" */
    }
    ((VCall_fn_80131A98_0 *)(param_1))->m((s32)(param_2), (s32)((*(u32 *)((s8 *)&lobj0 + 0x2c))));
    fn_80215BFC(&lobj0);
}
}
