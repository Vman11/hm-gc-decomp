// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u8 *fn_801954E8(void *);
void *fn_801955D8(void *);

void *fn_8022C3F4(u8 *p) {
    u8 *x = *(u8 **)(p + 156);
    u16 t;
    if (x == NULL) {
        return NULL;
    }
    t = *(u16 *)(x + 4);
    if (t >= 11 && t <= 13) {
        u8 *r = fn_801954E8(x);
        u8 *y = *(u8 **)(p + 156);
        s32 i = 0;
        if (*(u16 *)(y + 4) == 13) {
            i = 0;
        } else if (*(u16 *)(y + 4) == 12) {
            i = *(s32 *)(y + 160);
        }
        return fn_801955D8((*(void ***)(r + 156))[i]);
    }
    if (t >= 2 && t <= 3) {
        return fn_801955D8(x);
    }
    return NULL;
}

} /* extern "C" */
