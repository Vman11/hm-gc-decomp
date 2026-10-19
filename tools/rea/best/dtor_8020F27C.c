// auto/text_8020F27C __dt__9C8020F398Fv 96.3380
void __dla__FPv();
void __dl__FPv();

u32 * __dt__9C8020F398Fv(u32 *param_1, s16 param_2) {
    u32 iVar1;
    u32 uVar2;

    if (param_1 != (u32 *)0x0) {
        if (*param_1 != 0) {
            uVar2 = 0;
            iVar1 = uVar2;
            for (; uVar2 < (u32)param_1[2]; uVar2 = uVar2 + 1) {
                if (*(u32 *)(*param_1 + iVar1) != 0) {
                    if (*(u32 *)(*param_1 + iVar1) != 0) {
                        if (*(u32 *)(*param_1 + iVar1) != 0) {
                            __dla__FPv(*(u32 *)(*param_1 + iVar1));
                        }
                    }
                }
                iVar1 = iVar1 + 0x1c;
            }
            if (*param_1 != 0) {
                __dla__FPv(*param_1 + -0x10);
            }
        }
        if (param_1[1] != 0) {
            uVar2 = 0;
            iVar1 = 0;
            for (; uVar2 < (u32)param_1[3]; uVar2 = uVar2 + 1) {
                if (*(u32 *)(param_1[1] + iVar1) != 0) {
                    __dla__FPv(*(u32 *)(param_1[1] + iVar1));
                }
                iVar1 = iVar1 + 0x1c;
            }
            if (param_1[1] != 0) {
                __dla__FPv(param_1[1] + -0x10);
            }
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}
