// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802AFC28[];
void __dl__FPv(void *);

void *__dt__9C80037904Fv(u8 *p, s16 f) {
    if (p != NULL) {
        *(void **)p = lbl_802AFC28;
        *(s32 *)(p + 4) = 0;
        *(s32 *)(p + 8) = 0;
        *(s32 *)(p + 12) = 0;
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
