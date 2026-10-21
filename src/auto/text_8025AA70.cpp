// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803667B4;
u8 *fn_8022D694(void *);

void fn_8025AA70(u8 *self) {
    u8 *g = *(u8 **)(self + 156);
    u8 *t = *(u8 **)(g + 160);
    if (t != NULL && *(u32 *)(t + 172) != 0 && fn_8022D694(g) != NULL) {
        if (**(s32 **)(self + 184) != 0) {
            u32 *q = (u32 *)fn_8022D694(*(u8 **)(self + 156));
            if (q[12] & 1) {
                q[0] &= ~2;
            }
        } else if (**(s32 **)(self + 180) != 0) {
            u8 *q = fn_8022D694(*(u8 **)(self + 156));
            *(f32 *)(q + 8) = lbl_803667B4;
            if (*(u8 **)(q + 16) != NULL) {
                *(f32 *)(q + 36) = *(f32 *)(q + 8) / *(f32 *)(*(u8 **)(q + 16) + 4);
            }
        }
    }
    g = *(u8 **)(self + 156);
    *(f32 *)(g + 316) = lbl_803667B4;
    *(f32 *)(g + 320) = lbl_803667B4;
    *(f32 *)(g + 324) = lbl_803667B4;
}

} /* extern "C" */
