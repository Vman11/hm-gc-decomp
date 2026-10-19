// auto/text_80233CE8 fn_80233CE8 96.7692
void __dt__9C801883E0Fv();
void __dt__9C8018E150Fv();
void __dt__9C80192398Fv();
void __dla__FPv();
void __dt__9C8023C7CCFv();
void fn_800E1E88();
void fn_8023C754();

void fn_80233CE8(u32 *param_1) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;

    if (param_1[1] != 0) {
        iVar3 = 0;
        for (uVar2 = 0; uVar2 < (u32)param_1[3]; uVar2 = uVar2 + 1) {
            iVar1 = *(u32 *)(param_1[1] + iVar3);
            if (iVar1 != 0) {
                if (*(s16 *)(iVar1 + 4) == 2) {
                    fn_800E1E88(iVar1,__dt__9C8018E150Fv);
                }
                else if (*(s16 *)(iVar1 + 4) == 3) {
                    fn_800E1E88(iVar1,__dt__9C801883E0Fv);
                }
                else {
                    fn_800E1E88(iVar1,__dt__9C80192398Fv);
                }
            }
            iVar3 = iVar3 + 4;
        }
        __dla__FPv(param_1[1]);
    }
    if (param_1[5] != 0) {
        fn_8023C754(param_1[5]);
        __dt__9C8023C7CCFv(param_1[5],1);
    }
    if (param_1[2] != 0) {
        __dla__FPv(param_1[2]);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[2] = 0;
}
