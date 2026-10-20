// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_801C05EC(int, int, int);
void fn_801DBE0C(void);


} /* extern "C" */


s32 fn_801B831C(u8 *p, void *q) {
    fn_801DBE0C(p, q);
    if (*(void **)(p + 440) != 0) {
        u32 off;
        u32 i;
        for (i = 0, off = 0; i < *(u32 *)(p + 392); i++) {
            *(void **)(*(u8 **)(p + 440) + off) = fn_801C05EC(p, q, *(void **)(*(u8 **)(p + 440) + off));
            off += 4;
        }
    }
    if (*(void **)(p + 452) != 0) {
        *(void **)(p + 452) = fn_801C05EC(p, q, *(void **)(p + 452));
    }
    if (p[400] & 3) {
        *(void **)(p + 432) = fn_801C05EC(p, q, *(void **)(p + 432));
    }
    if (p[400] & 0xC) {
        *(void **)(p + 436) = fn_801C05EC(p, q, *(void **)(p + 436));
    }
    return 0;
}
