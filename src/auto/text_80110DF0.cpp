// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035AAD8;
extern s32 lbl_8035AADC;
extern u8 lbl_80363A20[0x8];
void fn_80110E5C(int);
void fn_80207280(int, int, int);

u32 fn_80110DF0(s32 param_1, u32 param_2) {
    if (*(s32 *)(param_1 + 0x1e8) != 0) {
        fn_80110E5C((int)(param_1));
    }
    *(u32 *)(param_1 + 0x28) = param_2;
    *(u32 *)(param_1 + 0x1e8) = 1;
    lbl_8035AADC = lbl_8035AAD8;
    fn_80207280((int)(param_2), (int)(param_1), (int)(lbl_80363A20));
    return 0;
}

} /* extern "C" */
