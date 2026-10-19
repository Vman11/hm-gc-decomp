// auto/text_8015B0D8 fn_8015B0D8 95.5357
void fn_800C23E8();
void fn_800C2518();
s32 fn_800C2600();

void fn_8015B0D8(s32 param_1) {
    u32 uVar1;
    u32 uVar2;

    *(u32 *)(param_1 + 0x60) = *(u32 *)(param_1 + 100);
    fn_800C2518(*(u32 *)(param_1 + *(s32 *)(param_1 + 0x60) * 4 + 0x50));
    uVar1 = fn_800C2600();
    *(u32 *)(param_1 + 0x68) = uVar1;
    fn_800C23E8();
    uVar2 = *(s32 *)(param_1 + 100) + 1;
    *(u32 *)(param_1 + 100) = uVar2;
    if (uVar2 >= *(u32 *)(param_1 + 0x58)) {
        *(u32 *)(param_1 + 100) = 0;
    }
}
