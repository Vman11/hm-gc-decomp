// auto/text_8015B218 fn_8015B218 96.7959
extern s32 lbl_8035ACE8;
void fn_801482DC();

void fn_8015B218(s32 param_1, u16 param_2, u16 param_3, u32 param_4, u32 param_5, u32 param_6, u32 *param_7) {
    u32 uVar1;
    s32 iVar2;
    u32 uVar3;

    lbl_8035ACE8 = 0;
    *(u32 *)(param_1 + 0x6c) = 0;
    *(u16 *)(param_1 + 0x1c) = param_2;
    *(u16 *)(param_1 + 0x1e) = param_3;
    fn_801482DC(param_1,param_5);
    *(u16 *)(param_1 + 0x18) = 1;
    *(u16 *)(param_1 + 0x1a) = 1;
    *(u32 *)(param_1 + 0x58) = param_6;
    *(u32 *)(param_1 + 0x5c) = param_4;
    *(u32 *)(param_1 + 0x60) = 0;
    *(s32 *)(param_1 + 100) = *(s32 *)(param_1 + 0x58) + -1;
    *(u32 *)(param_1 + 0x68) = 0;
    iVar2 = param_1;
    for (uVar3 = 0; uVar3 < *(u32 *)(param_1 + 0x58); uVar3 = uVar3 + 1) {
        uVar1 = *param_7;
        param_7 = param_7 + 1;
        *(u32 *)(iVar2 + 0x50) = uVar1;
        iVar2 = iVar2 + 4;
    }
}
