// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dl__FPv(void *);
extern u8 lbl_802EEA50[];
extern u8 lbl_802EEA28[];
extern u8 lbl_802EE918[];

u8 *fn_801F60FC(u8 *p, s16 f) {
    u8 *vb;
    if (p != NULL) {
        *(u8 **)(p + 4) = lbl_802EEA50;
        *(u8 **)(*(u8 **)p + 4) = lbl_802EEA50 + 64;
        **(u8 ***)*(u8 **)p = lbl_802EEA50 + 36;
        *(s32 *)(**(u8 ***)p + 16) = (p + 20) - **(u8 ***)p;
        *(s32 *)(*(u8 **)p + 8) = (p + 40) - *(u8 **)p;
        if (f != 0) {
            if (p + 40 != NULL) {
                *(u8 **)(p + 44) = lbl_802EEA28;
                **(u8 ***)(p + 40) = lbl_802EEA28 + 12;
                *(s32 *)(*(u8 **)(p + 40) + 16) = (p + 48) - *(u8 **)(p + 40);
            }
            if (p + 20 != NULL) {
                *(u8 **)(p + 20) = lbl_802EE918;
            }
        }
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
