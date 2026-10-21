// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_8035C2F8[0x4];
s32 fn_800F6CD0(void *, void *);
void fn_8024118C(u8 *p, void *a, void *b);

void fn_8003FBF0(u8 *param_1, void *param_2, void *param_3) {
    if (param_2 != 0 && fn_800F6CD0(param_2, lbl_8035C2F8) == 0) {
        fn_8024118C(param_1, param_2, param_3);
    }
}

} /* extern "C" */
