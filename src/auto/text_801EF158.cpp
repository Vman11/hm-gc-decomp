// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EE708[];
void __ct__9C801E62E8Fv(void *);

void *__ct__9C801EF158Fv(u8 *p) {
    __ct__9C801E62E8Fv(p);
    *(void **)(p + 0x14) = lbl_802EE708;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)p = 9;
    return p;
}

} /* extern "C" */
