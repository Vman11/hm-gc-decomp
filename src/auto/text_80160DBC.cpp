// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80147AD8(void *, u16, void *);

void fn_80160DBC(u8 *p, u32 *q, u32 base, u32 n) {
    u32 *s = q;
    u32 i;
    for (i = 0; i < n; i++) {
        fn_80147AD8(*(void **)(p + 20), (*(u16 **)(p + 24))[base + i], s);
        s++;
    }
}

} /* extern "C" */
