// auto/text_8025180C fn_8025180C 95.4578
extern u32 lbl_8035B1C0;
extern u32 lbl_8035B5E0;
void fn_800604C4();
void fn_800F7E98();
void fn_800F7EC0();
u32 __nw__FUl();
u32 fn_800F8274();
void fn_800F87F0();
void fn_8011B6F4();
void fn_8011B718();
void fn_802079F0();
void fn_80207BF4();
u32 fn_8021616C();
void fn_8025370C();
void __ct__9C802538C0Fv();

void fn_8025180C(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;
    u32 uVar4;

    if (param_2 != 0) {
        if ((*(s32 *)(param_2 + 0xbc) != 0) &&
              (iVar1 = fn_800F8274(*(u32 *)(param_1 + 0x20),param_4), iVar1 != 0)) {
            uVar2 = fn_800F8274(*(u32 *)(param_1 + 0x1c),param_3);
            iVar3 = fn_800F8274(param_1,param_3);
            if ((iVar3 == 0) && (*(u32 *)(param_1 + 0x60) < *(u32 *)(param_1 + 0x34))) {
                uVar2 = fn_800F8274(*(u32 *)(param_1 + 0x1c),param_3);
                if (((param_2 != 0) && (*(s32 *)(param_2 + 0xbc) != 0)) &&
                      (*(u32 *)(param_1 + 100) < *(u32 *)(param_1 + 0x2c))) {
                    uVar4 = fn_800F8274(*(u32 *)(param_1 + 0x20),param_4);
                    *(u32 *)(*(u32 *)(param_1 + 0x28) + *(u32 *)(param_1 + 100) * 4) = uVar4;
                    fn_8011B718(*(u32 *)(*(u32 *)(param_1 + 0x28) + *(u32 *)(param_1 + 100) * 4),
                                            param_2,uVar2);
                    *(u32 *)(param_1 + 100) = *(u32 *)(param_1 + 100) + 1;
                }
                iVar1 = fn_800F8274(param_1,param_3);
                if ((iVar1 == 0) && (*(u32 *)(param_1 + 0x60) < *(u32 *)(param_1 + 0x34))) {
                    if (lbl_8035B5E0 == 0) {
                        fn_800604C4(0xfffffffe,0,0,0);
                    }
                    fn_800F7EC0(lbl_8035B5E0);
                    iVar1 = __nw__FUl(0x18);
                    if (iVar1 != 0) {
                        if (iVar1 != 0) {
                            if (iVar1 != 0) {
                                __ct__9C802538C0Fv(iVar1);
                            }
                        }
                    }
                    *(u32 *)(*(u32 *)(param_1 + 0x30) + *(u32 *)(param_1 + 0x60) * 4) = iVar1;
                    fn_800F7E98();
                    if (*(u32 *)(*(u32 *)(param_1 + 0x30) + *(u32 *)(param_1 + 0x60) * 4) == 0) {
                        fn_800604C4(0xfffffffc,0,0,0);
                    }
                    uVar4 = fn_8021616C(lbl_8035B1C0);
                    fn_80207BF4(uVar4,param_5);
                    fn_8025370C(*(u32 *)(*(u32 *)(param_1 + 0x30) + *(u32 *)(param_1 + 0x60) * 4),uVar2
                                            ,param_3,param_6,param_7);
                    fn_802079F0(uVar4,0);
                    fn_800F87F0(param_1,param_3,
                                            *(u32 *)(*(u32 *)(param_1 + 0x30) + *(u32 *)(param_1 + 0x60) * 4));
                    *(u32 *)(param_1 + 0x60) = *(u32 *)(param_1 + 0x60) + 1;
                }
            }
            else {
                fn_8011B6F4(iVar1);
                fn_8011B718(iVar1,param_2,uVar2);
            }
        }
    }
}
