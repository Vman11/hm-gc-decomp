// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EE6D8[];
void __ct__9C801EF5D0Fv(void *);

void *__ct__9C801EEE6CFv(u8 *p) {
    __ct__9C801EF5D0Fv(p);
    *(void **)(p + 0x14) = lbl_802EE6D8;
    *(s32 *)(p + 48) = 0;
    *(s32 *)(p + 52) = 0;
    *(s32 *)p = 7;
    return p;
}

} /* extern "C" */
