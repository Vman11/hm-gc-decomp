// auto/text_80242D38 fn_80242D38 95.1908
extern "C" {
extern u32 lbl_8035B4C0;
void fn_800604C4(int, int, int, int);
u32 fn_800F6CD0(int, int);
void fn_800F6E88(int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 fn_802288FC(int, int);
void fn_80243440(int, int, int);

void fn_80242D38(u32 param_1, u32 param_2, u32 param_3) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;
    u32 iVar4;
    u32 uVar5;
    u32 iVar6;

    *(u32 *)(param_1 + 0x28) = 1;
    if ((*(s8 *)(param_1 + 0xc) == '\0') || (iVar1 = fn_800F6CD0((int)(param_2), (int)(param_1 + 0xc)), iVar1 != 0)
          ) {
        if (*(u32 *)(param_1 + 0x18) == 0) {
            if (lbl_8035B4C0 == 0) {
                fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
            }
            fn_800F7EC0((int)(lbl_8035B4C0));
            uVar2 = (u32) new u8[0x20];
            *(u32 *)(param_1 + 0x18) = uVar2;
            fn_800F7E98();
            if (*(u32 *)(param_1 + 0x18) == 0) {
                fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
            }
            *(u32 *)(param_1 + 0x14) = 8;
            fn_800F6E88((int)(param_1 + 0xc), (int)(param_2));
            uVar5 = 0;
            iVar1 = 0;            for (; uVar5 < *(u32 *)(param_1 + 0x14); uVar5 = uVar5 + 1) {
                *(u32 *)(*(u32 *)(param_1 + 0x18) + iVar1) = 0;
                iVar1 = iVar1 + 4;
            }
            fn_80242D38(param_1,param_2,param_3);
        }
        else {
            iVar3 = fn_802288FC((int)(*(u32 *)(param_1 + 0x1c)), (int)(param_3));
            for (iVar1 = param_1; iVar1 != 0; iVar1 = *(u32 *)(iVar1 + 0x20)) {
                iVar4 = 0;
                for (iVar6 = *(u32 *)(iVar1 + 0x14); iVar6 != 0; iVar6 = iVar6 + -1) {
                    if (*(u32 *)(*(u32 *)(param_1 + 0x18) + iVar4) == iVar3) {
                        return;
                    }
                    iVar4 = iVar4 + 4;
                }
            }
            iVar6 = 0;
            iVar4 = 0;
            for (iVar1 = *(u32 *)(param_1 + 0x14); iVar1 != 0; iVar1 = iVar1 + -1) {
                if (*(u32 *)(*(u32 *)(param_1 + 0x18) + iVar4) == 0) {
                    *(u32 *)(*(u32 *)(param_1 + 0x18) + iVar6 * 4) = iVar3;
                    return;
                }
                iVar4 = iVar4 + 4;
                iVar6 = iVar6 + 1;
            }
            if (*(u32 *)(param_1 + 0x20) == 0) {
                fn_80243440((int)(param_1), (int)(param_2), (int)(8));
            }
            fn_80242D38(*(u32 *)(param_1 + 0x20),param_2,param_3);
        }
    }
    else {
        if (*(u32 *)(param_1 + 0x24) == 0) {
            fn_80243440((int)(param_1), (int)(param_2), (int)(8));
        }
        fn_80242D38(*(u32 *)(param_1 + 0x24),param_2,param_3);
    }
}
}
