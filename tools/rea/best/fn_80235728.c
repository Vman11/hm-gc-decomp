// auto/text_80235728 fn_80235728 95.0000
extern s32 lbl_8035B388;
void fn_8024B580();
void __dl__FPv();
void fn_800E1F04();
void fn_8024AFF8();

u32 * fn_80235728(u32 *param_1, s16 param_2) {
    u32 *puVar1;
    s32 iVar2;

    if (param_1 != (u32 *)0x0) {
        iVar2 = 0;
        lbl_8035B388 = 0;
        puVar1 = param_1;
        do {
            fn_8024AFF8(puVar1 + 1);
            iVar2 = iVar2 + 1;
            puVar1 = puVar1 + 0x31;
        } while (iVar2 < 4);
        *param_1 = 0;
        fn_800E1F04(param_1 + 1,fn_8024B580,0xc4,4);
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}
