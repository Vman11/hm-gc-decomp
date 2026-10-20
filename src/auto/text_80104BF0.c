// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_80104BF0(u8 *p, u32 f) {
    u8 *c;
    if (!(f & *(u32 *)(p + 32))) {
        *(u32 *)(p + 32) |= f;
        for (c = *(u8 **)(p + 8); c != NULL; c = *(u8 **)(c + 4)) {
            fn_80104BF0(c, f);
        }
    }
}
