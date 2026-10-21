// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 *lbl_8035B5E4;
extern char lbl_8035E5A8[0x5];
extern char lbl_8035E5B0[0x6];
extern char lbl_8035E5B8[0x7];
extern char lbl_8035E5C0[0x5];
extern char lbl_8035E5C8[0x8];
extern char lbl_8035E5D0[0x6];
u32 fn_802513F4(u8 *, char *);
void fn_80251428(u8 *, char *);

void fn_80060748(u8 *param_1) {
    u8 *iVar1;

    if (*(s32 *)(lbl_8035B5E4 + 0x78) != 0 && *(s32 *)(param_1 + 0x3688) != 0) {
        iVar1 = lbl_8035B5E4;
        *(u32 *)(param_1 + 0x3688) = 0;
        *(u32 *)(param_1 + 0x3670) = fn_802513F4(iVar1, lbl_8035E5A8);
        *(u32 *)(param_1 + 0x3674) = fn_802513F4(iVar1, lbl_8035E5B0);
        *(u32 *)(param_1 + 0x3678) = fn_802513F4(iVar1, lbl_8035E5B8);
        *(u32 *)(param_1 + 0x367c) = fn_802513F4(iVar1, lbl_8035E5C0);
        *(u32 *)(param_1 + 0x3680) = fn_802513F4(iVar1, lbl_8035E5C8);
        *(u32 *)(param_1 + 0x3684) = fn_802513F4(iVar1, lbl_8035E5D0);
        if (*(s32 *)(param_1 + 0x3670) != 0) {
            fn_80251428(iVar1, lbl_8035E5A8);
        }
        if (*(s32 *)(param_1 + 0x3674) != 0) {
            fn_80251428(iVar1, lbl_8035E5B0);
        }
        if (*(s32 *)(param_1 + 0x3678) != 0) {
            fn_80251428(iVar1, lbl_8035E5B8);
        }
        if (*(s32 *)(param_1 + 0x367c) != 0) {
            fn_80251428(iVar1, lbl_8035E5C0);
        }
        if (*(s32 *)(param_1 + 0x3680) != 0) {
            fn_80251428(iVar1, lbl_8035E5C8);
        }
        if (*(s32 *)(param_1 + 0x3684) != 0) {
            fn_80251428(iVar1, lbl_8035E5D0);
        }
    }
}

} /* extern "C" */
