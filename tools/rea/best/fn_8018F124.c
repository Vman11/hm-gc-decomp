// auto/text_8018F124 fn_8018F124 95.8407
extern "C" {
extern u32 lbl_8035A9F4;
extern u32 lbl_8035AE50;
void __dla__FPv(int);
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C8018FFC4 { char pad[0x40]; C8018FFC4(); };

void fn_8018F124(u32 *param_1, u32 param_2, u32 param_3) {
    u32 iVar1;
    u32 iVar2;
    u32 iVar3;

    if (param_1[1] != 0) {
        __dla__FPv((int)(param_1[1] + -0x10));
        *param_1 = 0;
        param_1[1] = 0;
    }
    *param_1 = param_2;
    if (*(u32 *)(lbl_8035AE50 + 0x18) < 5) {
        *(u32 *)(lbl_8035AE50 + 0x1c) = 5;
    }
    else {
        *(u32 *)(lbl_8035AE50 + 0x1c) = *(u32 *)(lbl_8035AE50 + 0x18);
    }
    if (param_3 == 0) {
        if (lbl_8035AE50 == 0) {
            fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
        }
        fn_800F7EC0((int)(lbl_8035AE50));
        iVar3 = *param_1;
        iVar2 = (u32) new C8018FFC4[iVar3];
        param_1[1] = iVar2;
        fn_800F7E98();
        if (param_1[1] == 0) {
            fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
        }
    }
    else {
        if (lbl_8035A9F4 == 0) {
            fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
        }
        fn_800F7EC0((int)(lbl_8035A9F4));
        iVar3 = *param_1;
        iVar2 = (u32) new C8018FFC4[iVar3];
        param_1[1] = iVar2;
        fn_800F7E98();
        if (param_1[1] == 0) {
            fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
        }
    }
    *(u32 *)(lbl_8035AE50 + 0x1c) = *(u32 *)(lbl_8035AE50 + 0x18);
}
}
