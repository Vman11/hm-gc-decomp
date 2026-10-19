// auto/text_802081C0 fn_802081C0 99.9342
extern "C" {
extern u32 lbl_8035B1A0;
void __dt__9C80208724Fv(void);
void __dla__FPv(int);
void fn_800604C4(int, int, int, int);
void fn_800E1E88(int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
void fn_80208688(int, int);
struct C80208724 { char pad[0x18]; C80208724(); ~C80208724(); };
struct VCall_fn_802081C0_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual int m(); };
struct VCall_fn_802081C0_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual int m(); };
struct VCall_fn_802081C0_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual int m(); };
struct VCall_fn_802081C0_3 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual int m(); };

void fn_802081C0(u32 *param_1, u32 *param_2, u32 param_3) {
    u32 iVar1;
    u32 iVar2;
    u32 iVar3;
    u32 uVar4;

    if (param_1[1] != 0) {
        if (param_1[2] != 0) {
            __dla__FPv((int)(param_1[2]));
        }
        if (*param_1 != 0) {
            fn_800E1E88((int)(*param_1), (int)((u32)__dt__9C80208724Fv));
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
    }
    iVar1 = ((VCall_fn_802081C0_0 *)(param_2))->m();
    param_1[4] = iVar1;
    iVar1 = ((VCall_fn_802081C0_1 *)(param_2))->m();
    if (param_3 < (u32)(param_1[4] * iVar1)) {
        iVar1 = ((VCall_fn_802081C0_2 *)(param_2))->m();
        param_1[3] = param_1[4] * iVar1;
        iVar1 = ((VCall_fn_802081C0_3 *)(param_2))->m();
        param_1[5] = iVar1;
    }
    else {
        param_1[5] = param_3 / (u32)param_1[4];
        param_1[3] = param_1[5] * param_1[4];
    }
    if (lbl_8035B1A0 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B1A0));
    iVar1 = (u32) new u8[param_1[3] + 0x20];
    param_1[2] = iVar1;
    fn_800F7E98();
    if (param_1[2] == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    param_1[1] = param_1[2] + 0x1fU & 0xffffffe0;
    if (lbl_8035B1A0 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B1A0));
    iVar3 = param_1[5];
    iVar1 = (u32) new C80208724[iVar3];
    *param_1 = iVar1;
    fn_800F7E98();
    if (*param_1 == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    uVar4 = 0;
    iVar1 = 0;    for (; uVar4 < (u32)param_1[5]; uVar4 = uVar4 + 1) {
        fn_80208688((int)(*param_1 + iVar1), (int)(param_1[1] + uVar4 * param_1[4]));
        iVar1 = iVar1 + 0x18;
    }
}
}
