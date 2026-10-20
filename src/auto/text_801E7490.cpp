// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EDC7C[];
void fn_801E070C(void *);

void *__ct__9C801E7490Fv(u8 *p) {
    fn_801E070C(p);
    *(void **)p = lbl_802EDC7C;
    *(s32 *)(p + 4) = 26;
    *(s32 *)(p + 56) = 0;
    return p;
}

} /* extern "C" */
