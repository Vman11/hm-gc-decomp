// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
void *fn_800F8274(void *, void *);

void *fn_801A53C0(u8 *p, s32 n, void *a) {
    switch (n) {
    case 0:
        if (*(u32 *)(p + 24) != 0) return fn_800F8274(p + 120, a);
        break;
    case 1:
        if (*(u32 *)(p + 32) != 0) return fn_800F8274(p + 160, a);
        break;
    case 2:
        if (*(u32 *)(p + 36) != 0) return fn_800F8274(p + 180, a);
        break;
    case 3:
        if (*(u32 *)(p + 28) != 0) return fn_800F8274(p + 140, a);
        break;
    case 4:
        if (*(u32 *)(p + 40) != 0) return fn_800F8274(p + 200, a);
        break;
    case 5:
        if (*(u32 *)(p + 64) != 0) return fn_800F8274(p + 320, a);
        break;
    case 6:
        if (*(u32 *)(p + 44) != 0) return fn_800F8274(p + 220, a);
        break;
    case 7:
        if (*(u32 *)(p + 48) != 0) return fn_800F8274(p + 240, a);
        break;
    case 8:
        if (*(u32 *)(p + 52) != 0) return fn_800F8274(p + 260, a);
        break;
    case 9:
        if (*(u32 *)(p + 56) != 0) return fn_800F8274(p + 280, a);
        break;
    case 10:
        if (*(u32 *)(p + 60) != 0) return fn_800F8274(p + 300, a);
        break;
    case 11:
        if (*(u32 *)(p + 68) != 0) return fn_800F8274(p + 340, a);
        break;
    }
    return 0;
}

} /* extern "C" */
