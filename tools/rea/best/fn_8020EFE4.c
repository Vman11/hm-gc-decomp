// auto/text_8020EFE4 fn_8020EFE4 95.5245
extern "C" {
extern u32 lbl_8035A9F4;
void __dla__FPv(int);
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C8020F220 { char pad[0x1c]; C8020F220(); };

void fn_8020EFE4(u32 *param_1, u32 param_2, u32 param_3) {
    u32 iVar1;
    u32 iVar2;
    u32 uVar3;
    u32 iVar4;

    if (param_1[4] != 0) {
        if (*param_1 != 0) {
            uVar3 = 0;
            iVar2 = 0;            for (; uVar3 < (u32)param_1[2]; uVar3 = uVar3 + 1) {
                if (*(u32 *)(*param_1 + iVar2) != 0) {
                    __dla__FPv((int)(*(u32 *)(*param_1 + iVar2)));
                }
                iVar2 = iVar2 + 0x1c;
            }
            if (*param_1 != 0) {
                __dla__FPv((int)(*param_1 + -0x10));
            }
        }
        if (param_1[1] != 0) {
            uVar3 = 0;
            iVar2 = 0;            for (; uVar3 < (u32)param_1[3]; uVar3 = uVar3 + 1) {
                if (*(u32 *)(param_1[1] + iVar2) != 0) {
                    __dla__FPv((int)(*(u32 *)(param_1[1] + iVar2)));
                }
                iVar2 = iVar2 + 0x1c;
            }
            if (param_1[1] != 0) {
                __dla__FPv((int)(param_1[1] + -0x10));
            }
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
    }
    param_1[2] = param_2;
    param_1[3] = param_3;
    if (param_1[2] != 0) {
        if (lbl_8035A9F4 == 0) {
            fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
        }
        fn_800F7EC0((int)(lbl_8035A9F4));
        iVar4 = param_1[2];
        iVar2 = (u32) new C8020F220[iVar4];
        *param_1 = iVar2;
        fn_800F7E98();
        if (*param_1 == 0) {
            fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
        }
    }
    if (param_1[3] != 0) {
        if (lbl_8035A9F4 == 0) {
            fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
        }
        fn_800F7EC0((int)(lbl_8035A9F4));
        iVar4 = param_1[3];
        iVar2 = (u32) new C8020F220[iVar4];
        param_1[1] = iVar2;
        fn_800F7E98();
        if (param_1[1] == 0) {
            fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
        }
    }
    param_1[4] = 1;
}
}
