// auto/text_802178B8 fn_802178B8 99.2308
void fn_800B48F4();

void fn_802178B8(u8 *param_1, s32 *param_2, u32 *param_3) {
    u8 *pbVar1;

    pbVar1 = (u8 *)*param_2;
    *param_1 = *pbVar1;
    param_1[1] = pbVar1[1];
    *(u16 *)(param_1 + 2) = *(u16 *)(pbVar1 + 2);
    *(u32 *)(param_1 + 8) = *(u32 *)(pbVar1 + 4);
    *param_2 = *param_2 + 8;
    *(u32 *)(param_1 + 0xc) = (u32)param_1[1] * 2 + (*param_1 >> 1 & 1);
    *param_3 = *param_3 + 0x1f & 0xffffffe0;
    *(u32 *)(param_1 + 4) = *param_3;
    *param_3 = *param_3 + *(s32 *)(param_1 + 8);
    fn_800B48F4(*(u32 *)(param_1 + 4),*(u32 *)(param_1 + 8));
}
