// auto/text_8026D1A8 fn_8026D1A8 96.2558
s32 fn_800EB1B4();
s32 fn_800F8274();

s32 fn_8026D1A8(s32 param_1) {
    s32 iVar1;
    u32 uVar2;
    u32 uVar3;
    s32 iVar4;

    iVar4 = 0;
    iVar1 = fn_800F8274(param_1 + 0x194);
    if (((iVar1 != 0) && (uVar3 = *(u32 *)(iVar1 + 8), 0 < (s32)uVar3)) && (uVar3 < 0xb)) {
        iVar4 = 0;
        if (uVar3 != 0) {
            uVar2 = fn_800EB1B4();
            iVar4 = uVar2 - (uVar2 / uVar3) * uVar3;
        }
        if (iVar4 == *(u32 *)(iVar1 + 0xc)) {
            iVar4 = (iVar4 + 1U) - ((iVar4 + 1U) / uVar3) * uVar3;
        }
        *(u32 *)(iVar1 + 0xc) = iVar4;
        iVar4 = iVar1 + iVar4 * 0x18 + 0x10;
    }
    return iVar4;
}
