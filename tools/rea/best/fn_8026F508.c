// auto/text_8026F508 fn_8026F508 95.5102
extern u32 lbl_8035B460;
extern u32 lbl_8035B7E0;
extern char lbl_80366E64[0x6];
extern char lbl_80366E6C[0x7];
u32 fn_801AAA08();

void fn_8026F508(u32 *param_1, u32 param_2) {
    u32 iVar1;
    u32 iVar2;

    if (*param_1 != 0) {
        *param_1 = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
    }
    *param_1 = 1;
    iVar2 = *(u32 *)(*(u32 *)(lbl_8035B460 + 0xc) + 0x33b0);
    if (iVar2 != 0) {
        iVar1 = fn_801AAA08(iVar2,9,(void *)lbl_80366E64,0); /* "Focus" */
        if (iVar1 != 0) {
            param_1[2] = iVar1;
        }
        iVar2 = fn_801AAA08(iVar2,9,(void *)lbl_80366E6C,0); /* "GCNFoc" */
        if (iVar2 != 0) {
            param_1[3] = iVar2;
        }
    }
    lbl_8035B7E0 = *(u32 *)(param_2 + 4);
}
