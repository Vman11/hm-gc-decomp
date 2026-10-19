// auto/text_8017A984 fn_8017A984 96.6465
extern "C" {
extern u32 lbl_8035AD70;
void __dla__FPv(int);
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
void fn_80102E34(int);
void fn_80102EC0(int);
struct C8017B3C0 { char pad[0x3c]; C8017B3C0(); };

void fn_8017A984(u32 *param_1, u32 *param_2) {
    u32 bVar1;
    u32 iVar2;
    u32 iVar3;
    u32 iVar4;

    bVar1 = false;
    if ((*param_1 != 0) || (param_1[2] != 0)) {
        bVar1 = true;
    }
    if (bVar1) {
        fn_80102E34((int)(param_1 + 3));
        if (param_1[2] != 0) {
            __dla__FPv((int)(param_1[2] + -0x10));
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
    }
    iVar3 = param_2[1];
    *param_1 = *param_2;
    if (param_1[2] != 0) {
        __dla__FPv((int)(param_1[2] + -0x10));
        param_1[2] = 0;
        fn_80102E34((int)(param_1 + 3));
    }
    param_1[1] = iVar3;
    if (param_1[1] != 0) {
        if (lbl_8035AD70 == 0) {
            fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
        }
        fn_800F7EC0((int)(lbl_8035AD70));
        iVar4 = param_1[1];
        iVar3 = (u32) new C8017B3C0[iVar4];
        param_1[2] = iVar3;
        fn_800F7E98();
        if (param_1[2] == 0) {
            fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
        }
    }
    if ((1 < (u32)param_1[1]) && (*param_1 != 0)) {
        fn_80102EC0((int)(param_1 + 3));
    }
}
}
