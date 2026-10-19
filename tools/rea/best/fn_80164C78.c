// auto/text_80164C78 fn_80164C78 99.1250
extern u8 lbl_802A0BE0[];
void fn_800D7CA4();

void fn_80164C78(s32 param_1, u32 param_2) {
    s32 iVar1;

    if (param_2 != *(u32 *)(param_1 + 0x1a94)) {
        if (8 < param_2) {
            param_2 = 8;
        }
        if ((*(u32 *)(param_1 + 0xc) & 2) != 0) {
            iVar1 = *(u32 *)(param_1 + 0x1938);
            if (*(u32 *)(iVar1 + 0x47c) != *(u32 *)((u32)lbl_802A0BE0 + param_2 * 4)) {
                *(u32 *)(iVar1 + 0x47c) = *(u32 *)((u32)lbl_802A0BE0 + param_2 * 4);
                fn_800D7CA4(0,*(u8 *)(iVar1 + 0x46c),0,*(u32 *)(iVar1 + 0x478),
                                        *(u32 *)(iVar1 + 0x47c),*(u32 *)(iVar1 + 0x480),
                                        *(u32 *)(iVar1 + 0x484));
            }
        }
        *(u32 *)(param_1 + 0x1a94) = param_2;
    }
}
