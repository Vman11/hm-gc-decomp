// auto/text_80238BF4 fn_80238BF4 98.3281
extern "C" {
extern u32 lbl_8035B65C;
void fn_8019B380(int);
void fn_802289C8(int);
void fn_8022D9AC(int);
void fn_8023994C(int);
void fn_80271BB8(int, int, int);
struct VCall_fn_80238BF4_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
struct VCall_fn_80238BF4_1 {  virtual void m(int); };
struct VCall_fn_80238BF4_2 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(); };
struct VCall_fn_80238BF4_3 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(int); };

void fn_80238BF4(u32 param_1) {
    u32 *piVar1;
    u32 iVar2;

    if ((*(u32 **)(param_1 + 0x1e4) != (u32 *)0x0) && (**(u32 **)(param_1 + 0x1e4) == 1)) {
        fn_80271BB8((int)(*(u32 *)(lbl_8035B65C + 0x74)), (int)(param_1), (int)(*(u32 *)(lbl_8035B65C + 0xc)));
    }
    if (*(u32 **)(param_1 + 0x20c) != (u32 *)0x0) {
        ((VCall_fn_80238BF4_0 *)(*(u32 **)(param_1 + 0x20c)))->m();
        piVar1 = *(u32 **)(param_1 + 0x20c);
        if (piVar1 != (u32 *)0x0) {
            ((VCall_fn_80238BF4_1 *)(piVar1))->m((u32)(1));
        }
    }
    if (*(u32 *)(param_1 + 0x22c) != 0) {
        fn_8019B380((int)(*(u32 *)(lbl_8035B65C + 0xc)));
        ((VCall_fn_80238BF4_2 *)(*(u32 *)(param_1 + 0x22c)))->m();
        iVar2 = *(u32 *)(param_1 + 0x22c);
        if (iVar2 != 0) {
            ((VCall_fn_80238BF4_3 *)(iVar2))->m((u32)(1));
        }
    }
    if (*(u32 *)(param_1 + 0x230) != 0) {
        fn_802289C8((int)(*(u32 *)(param_1 + 0xa4)));
    }
    fn_8023994C((int)(param_1));
    fn_8022D9AC((int)(param_1));
}
}
