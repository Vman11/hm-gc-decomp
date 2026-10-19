// auto/text_800F9594 fn_800F9594 95.4634
void fn_800F96A4();

void fn_800F9594(u32 param_1, u32 param_2) {
    u32 iVar1;
    u32 iVar2;
    u32 iVar3;
    u32 iVar4;

    iVar3 = *(u32 *)(param_2 + 0xc);
    if (iVar3 != 0) {
        iVar2 = *(u32 *)(iVar3 + 8);
        iVar1 = iVar3;
        while (iVar4 = iVar2, iVar4 != 0) {
            if (iVar4 == param_2) {
                *(u32 *)(iVar1 + 8) = *(u32 *)(iVar4 + 8);
                *(u32 *)(iVar4 + 0xc) = 0;
                if ((*(u32 *)(iVar3 + 8) == 0) && (*(u32 *)(iVar3 + 0x14) != 0)) {
                    fn_800F96A4(*(u32 *)(iVar3 + 0x14));
                }
                break;
            }
            iVar1 = iVar4;
            iVar2 = *(u32 *)(iVar4 + 8);
        }
    }
    *(u32 *)(param_2 + 8) = *(u32 *)(param_1 + 8);
    *(u32 *)(param_1 + 8) = param_2;
    *(u32 *)(param_2 + 0xc) = param_1;
}
