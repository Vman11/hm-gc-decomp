// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EE948[];
extern u8 lbl_802EE98C[];
extern u8 lbl_802EE918[];
void __dl__FPv(void *);

void *__dt__9C801F5AC4Fv(u8 *p, s16 f) {
    if (p != 0) {
        *(u8 **)(p + 8) = lbl_802EE948;
        *(u8 **)(*(u8 **)p + 4) = lbl_802EE948 + 56;
        **(u8 ***)*(u8 **)p = lbl_802EE948 + 28;
        *(s32 *)(**(u8 ***)p + 16) = (p + 12) - **(u8 ***)p;
        *(s32 *)(*(u8 **)p + 8) = (p + 32) - *(u8 **)p;
        if (f != 0) {
            if (p + 32 != 0) {
                *(u8 **)(p + 36) = lbl_802EE98C;
                **(u8 ***)(p + 32) = lbl_802EE98C + 12;
                *(s32 *)(*(u8 **)(p + 32) + 16) = (p + 40) - *(u8 **)(p + 32);
            }
            if (p + 12 != 0) {
                *(u8 **)(p + 12) = lbl_802EE918;
            }
        }
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
