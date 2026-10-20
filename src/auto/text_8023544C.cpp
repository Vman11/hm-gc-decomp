// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8024AF54(void *, f32);

void fn_8023544C(u8 *p, f32 a) {
    u8 *q = p;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (*(s32 *)(q + 28) != 0) {
            fn_8024AF54(q + 4, a);
        }
        q += 196;
    }
}

} /* extern "C" */
