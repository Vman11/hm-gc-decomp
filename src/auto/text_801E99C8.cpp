// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EDED8[];
void fn_801E78AC(void *);

void *__ct__9C801E99C8Fv(u8 *p) {
    fn_801E78AC(p);
    *(void **)p = lbl_802EDED8;
    *(s32 *)(p + 72) = 0;
    *(s32 *)(p + 68) = 0;
    *(s32 *)(p + 4) = 28;
    *(s32 *)(p + 72) = 0;
    *(s32 *)(p + 68) = 0;
    return p;
}

} /* extern "C" */
