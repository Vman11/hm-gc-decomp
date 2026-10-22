// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EE98C[];
extern u8 lbl_802EE918[];
void __dl__FPv(void *);

void *fn_801F5BA0(u8 *p, s16 f) {
    if (p != 0) {
        *(u8 **)(p + 4) = lbl_802EE98C;
        **(u8 ***)p = lbl_802EE98C + 12;
        *(s32 *)(*(u8 **)p + 16) = (p + 8) - *(u8 **)p;
        if (f != 0) {
            if (p + 8 != 0) {
                *(u8 **)(p + 8) = lbl_802EE918;
            }
        }
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
