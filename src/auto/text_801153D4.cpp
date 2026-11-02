// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct F { u8 p[0x70]; volatile u32 fl; s32 on; } F;
F *fn_800F8274(void *);
int fn_801153D4(u8 *o) {
    F *f = fn_800F8274(o + 10108);
    if (f && f->on) {
        if (!(f->fl & 2)) return 8;
        f->fl &= ~4;
        f->fl &= ~8;
        f->fl &= ~2;
        return 0;
    }
    return 5;
}

} /* extern "C" */
