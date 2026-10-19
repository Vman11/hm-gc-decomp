// auto/text_8023D7F8 fn_8023D7F8 97.9176
extern "C" {
extern u8 lbl_8035756C[];
extern u8 lbl_8035758C[];
extern u32 lbl_8035B464;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
void fn_800F8DD0(void *);
u32 fn_8021616C(int);
void fn_8023A630(int);
void fn_8023B530(int);
void fn_8023B730(int);
void fn_8023CE8C(int);
void fn_8023D0FC(int);
void fn_8023E778(int, int);
void fn_8023EC94(int);
void fn_8023EDE4(int);
void fn_8023F1D4(int);
void fn_802724F8(int);
struct C8023F088 { char pad[0x59fc]; C8023F088(void); };
struct C8023E874 { char pad[0x14]; C8023E874(void); };
struct C8023B710 { char pad[0x10]; C8023B710(void); };
struct VCall_fn_8023D7F8_0 { char vptr_pad[0xc]; virtual void p0(); virtual void p1(); virtual void m(); };
struct VCall_fn_8023D7F8_1 { char vptr_pad[0xc];  virtual void m(int); };
struct VCall_fn_8023D7F8_2 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };
struct VCall_fn_8023D7F8_3 { char vptr_pad[0x10];  virtual void m(int); };
struct VCall_fn_8023D7F8_4 { char vptr_pad[0x59f8];  virtual void m(int); };
struct VCall_fn_8023D7F8_5 { char vptr_pad[0xc]; virtual void p0(); virtual void m(int); };

void fn_8023D7F8(u32 *param_1, u32 param_2) {
    u32 iVar1;
    u32 uVar2;

    if (lbl_8035B464 != 0) {
        if (param_1[4] != 0) {
            ((VCall_fn_8023D7F8_0 *)(param_1[4]))->m();
            iVar1 = param_1[4];
            if (iVar1 != 0) {
                ((VCall_fn_8023D7F8_1 *)(iVar1))->m((u32)(1));
            }
        }
        if (param_1[1] != 0) {
            ((VCall_fn_8023D7F8_2 *)(param_1[1]))->m();
            iVar1 = param_1[1];
            if (iVar1 != 0) {
                ((VCall_fn_8023D7F8_3 *)(iVar1))->m((u32)(1));
            }
        }
        if (*param_1 != 0) {
            fn_8023EDE4((int)(*param_1));
            iVar1 = *param_1;
            if (iVar1 != 0) {
                ((VCall_fn_8023D7F8_4 *)(iVar1))->m((u32)(1));
            }
        }
        fn_800F8DD0(lbl_8035758C);
        fn_800F8DD0(lbl_8035756C);
        param_1[2] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
    }
    param_1[3] = *(u32 *)(param_2 + 4);
    lbl_8035B464 = *(u32 *)(param_2 + 8);
    fn_8023F1D4((int)(lbl_8035B464));
    fn_8023B730((int)(lbl_8035B464));
    fn_8023A630((int)(lbl_8035B464));
    fn_8023CE8C((int)(lbl_8035B464));
    fn_8023D0FC((int)(lbl_8035B464));
    fn_802724F8((int)(lbl_8035B464));
    fn_8023B530((int)(lbl_8035B464));
    if (lbl_8035B464 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B464));
    iVar1 = (u32) new C8023F088();
    *param_1 = iVar1;
    fn_800F7E98();
    if (*param_1 == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    fn_8023EC94((int)(*param_1));
    if (lbl_8035B464 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B464));
    iVar1 = (u32) new C8023E874();
    param_1[1] = iVar1;
    fn_800F7E98();
    if (param_1[1] == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    fn_8023E778((int)(param_1[1]), (int)(0x14));
    param_1[2] = *(u32 *)(param_2 + 0xc);
    if (lbl_8035B464 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B464));
    iVar1 = (u32) new C8023B710();
    param_1[4] = iVar1;
    fn_800F7E98();
    if (param_1[4] == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    uVar2 = fn_8021616C((int)(param_1[3] + 0x354));
    ((VCall_fn_8023D7F8_5 *)(param_1[4]))->m((u32)(uVar2));
}
}
