// auto/text_801DE990 fn_801DE990 95.0000
u32 fn_8019565C();

void fn_801DE990(u32 param_1) {
    u32 iVar1;
    u32 *puVar2;

    iVar1 = *(u32 *)(param_1 + 0x2c);
    if (iVar1 == 0) {
        iVar1 = *(u32 *)(param_1 + 0x28);
    }
    puVar2 = (u32 *)fn_8019565C(iVar1);
    if ((*(u32 *)(param_1 + 0x24) & 2) != 0) {
        *puVar2 = *puVar2 & 0xfffff7ff;
    }
}
