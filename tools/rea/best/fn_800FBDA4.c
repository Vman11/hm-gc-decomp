// auto/text_800FBDA4 fn_800FBDA4 95.0769
extern "C" {
extern u32 lbl_8035AA18;
void __dla__FPv(void);
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);

void fn_800FBDA4(u32 *param_1, u32 param_2, u32 param_3) {
    u32 uVar1;

    if (param_1[2] != 0) {
        if ((*param_1 & 1) == 0) {
            __dla__FPv();
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
    }
    param_1[1] = param_3;
    if (*(u32 *)(lbl_8035AA18 + 0x18) < 5) {
        *(u32 *)(lbl_8035AA18 + 0x1c) = 5;
    }
    else {
        *(u32 *)(lbl_8035AA18 + 0x1c) = *(u32 *)(lbl_8035AA18 + 0x18);
    }
    if (lbl_8035AA18 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AA18));
    uVar1 = (u32) new u8[param_1[1] << 5];
    param_1[2] = uVar1;
    fn_800F7E98();
    if (param_1[2] == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    *(u32 *)(lbl_8035AA18 + 0x1c) = *(u32 *)(lbl_8035AA18 + 0x18);
    param_1[3] = param_2;
}
}
