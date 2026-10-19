// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803636D8[0x8];
extern void *memcpy(void *, const void *, unsigned long);

void fn_800F6E40(void *param_1, u8 *param_2) {
    if (param_2 == (u8 *)0x0) {
        param_2 = lbl_803636D8;
    }
    memcpy(param_1,param_2,8);
    *(u8 *)((s32)param_1 + 8) = 0;
}

} /* extern "C" */
