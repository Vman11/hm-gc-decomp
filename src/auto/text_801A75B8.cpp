// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801DDB90(void *);
void __dl__FPv(void *);

void fn_801A75B8(u8 *p) {
    u8 *n;
    fn_801DDB90(p);
    n = *(u8 **)(p + 356);
    while (n != NULL) {
        u8 *t = n;
        n = *(u8 **)(n + 12);
        __dl__FPv(t);
    }
    *(s32 *)(p + 356) = 0;
}

} /* extern "C" */
