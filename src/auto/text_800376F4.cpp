// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035A00C;
extern s32 lbl_8035A1DC;
extern s32 lbl_8035B5E4;
void fn_800391A8(int, int);
void fn_800391E4(int, int);
void fn_80252344(int, int, int);

void fn_800376F4(u32 param_1, u32 param_2, s32 param_3) {
    if (param_3 == 0) {
        if (*(s32 *)(lbl_8035A1DC + 0x366c) != 0) {
            *(u32 *)(lbl_8035B5E4 + 0x7c) = 1;
        }
        fn_800391E4((int)(lbl_8035A00C), (int)(0));
        fn_800391A8((int)(lbl_8035A00C), (int)(0));
    }
    fn_80252344((int)(param_1), (int)(param_2), (int)(param_3));
}

} /* extern "C" */
