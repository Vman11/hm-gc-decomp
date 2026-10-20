// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EDE9C[];
void fn_801E070C(void *);

void *__ct__9C801E9608Fv(u8 *p) {
    fn_801E070C(p);
    *(void **)p = lbl_802EDE9C;
    *(s32 *)(p + 60) = 0;
    *(s32 *)(p + 56) = 0;
    *(s32 *)(p + 4) = 25;
    *(s32 *)(p + 60) = 0;
    *(s32 *)(p + 56) = 0;
    return p;
}

} /* extern "C" */
