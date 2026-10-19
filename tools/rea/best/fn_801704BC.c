// auto/text_801704BC fn_801704BC 95.6395
extern "C" {
extern u32 lbl_8035AD38;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);

void fn_801704BC(u32 *param_1, u32 param_2) {
    u32 iVar1;

    param_1[0x14] = 0;
    if ((param_1[2] & 1U) != 0) {
        param_1[0x14] = param_1[0x14] + 0xc;
    }
    if ((param_1[2] & 2U) != 0) {
        param_1[0x14] = param_1[0x14] + 4;
    }
    if ((param_1[2] & 4U) != 0) {
        param_1[0x14] = param_1[0x14] + 8;
    }
    if ((param_1[2] & 8U) != 0) {
        param_1[0x15] = param_1[0x14];
        param_1[0x14] = param_1[0x14] + 4;
    }
    if ((param_1[2] & 0x10U) != 0) {
        param_1[0x15] = param_1[0x14];
        param_1[0x14] = param_1[0x14] + 0x10;
    }
    param_1[3] = param_1[3] | 0x10;
    param_1[0x12] = param_2;
    if (*(u32 *)(lbl_8035AD38 + 0x18) < 5) {
        *(u32 *)(lbl_8035AD38 + 0x1c) = 5;
    }
    else {
        *(u32 *)(lbl_8035AD38 + 0x1c) = *(u32 *)(lbl_8035AD38 + 0x18);
    }
    if (lbl_8035AD38 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AD38));
    iVar1 = (u32) new u8[param_1[0x14] * *param_1];
    param_1[0x13] = iVar1;
    fn_800F7E98();
    if (param_1[0x13] == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    *(u32 *)(lbl_8035AD38 + 0x1c) = *(u32 *)(lbl_8035AD38 + 0x18);
}
}
