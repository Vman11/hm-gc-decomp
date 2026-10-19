// auto/text_80116A70 fn_80116A70 95.0500
extern s32 lbl_8035AB08;
s32 strlen();

u32 fn_80116A70(u32 *param_1, u32 *param_2) {
    u32 sVar1;
    u32 uVar2;

    if (*param_1 >= 0x100) {
        sVar1 = strlen((s8 *)param_1);
        if (lbl_8035AB08 != 0) {
            uVar2 = sVar1 & 0xfffffffc;
            sVar1 = sVar1 - (sVar1 & 3);
            for (uVar2 = *(u32 *)((s32)param_1 + uVar2); (uVar2 & 0xff000000) != 0; uVar2 = uVar2 << 8) {
                sVar1 = sVar1 + 1;
            }
        }
    }
    else {
        sVar1 = 0;
        for (; *param_1 != 0; param_1 = param_1 + 1) {
            sVar1 = sVar1 + 1;
        }
    }
    *param_2 = sVar1;
    return 0;
}
