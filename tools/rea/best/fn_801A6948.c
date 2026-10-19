// auto/text_801A6948 fn_801A6948 95.4634
void fn_801A6A4C();

void fn_801A6948(u32 param_1, u32 param_2) {
    u32 iVar1;
    u32 iVar2;
    u32 iVar3;
    u32 iVar4;

    iVar3 = *(u32 *)(param_2 + 4);
    if (iVar3 != 0) {
        iVar2 = *(u32 *)(iVar3 + 8);
        iVar1 = iVar3;
        while (iVar4 = iVar2, iVar4 != 0) {
            if (iVar4 == param_2) {
                *(u32 *)(iVar1 + 8) = *(u32 *)(iVar4 + 8);
                *(u32 *)(iVar4 + 4) = 0;
                if ((*(u32 *)(iVar3 + 8) == 0) && (*(u32 *)(iVar3 + 0x10) != 0)) {
                    fn_801A6A4C(*(u32 *)(iVar3 + 0x10));
                }
                break;
            }
            iVar1 = iVar4;
            iVar2 = *(u32 *)(iVar4 + 8);
        }
    }
    *(u32 *)(param_2 + 8) = *(u32 *)(param_1 + 8);
    *(u32 *)(param_1 + 8) = param_2;
    *(u32 *)(param_2 + 4) = param_1;
}
