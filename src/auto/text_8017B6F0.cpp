// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8018FE74(void *, void *, s32);
void *memset(void *, s32, u32);

void fn_8017B6F0(u32 *p, u32 *q) {
    if (!(p[0] & 2)) {
        void *x = (void *)p[5];
        if (x != NULL) {
            if (p[4] < q[0]) {
                fn_8018FE74((u8 *)q[1] + p[4] * 64, x, 0);
            }
        } else if (p[4] < q[0]) {
            u8 *e = (u8 *)q[1] + p[4] * 64;
            *(s32 *)e = 0;
            memset(e + 4, 0, 56);
        }
    }
}

} /* extern "C" */
