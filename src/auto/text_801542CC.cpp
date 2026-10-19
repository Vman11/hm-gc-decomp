// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802A02CC[];
extern void *memcpy(void *, const void *, unsigned long);

void fn_801542CC(u32 param_1, void *param_2) {
    memcpy(param_2,lbl_802A02CC,0x10);
}

} /* extern "C" */
