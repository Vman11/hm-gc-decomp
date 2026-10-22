// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void *fn_80112B18(void *, u32);
void fn_800F6E88(void *, void *);
s32 strncmp(void *, void *, s32);
void fn_8010D0BC(void *, u32);

void fn_8010CE64(u8 *p, void *a) {
    u32 n;
    u32 i;
    u8 buf[8];
    i = 0;
    n = *(u32 *)(*(u8 **)(p + 4) + 32);
    for (; i < n; i++) {
        fn_800F6E88(buf, fn_80112B18(*(void **)(p + 4), i));
        if (strncmp(buf, a, 8) == 0) {
            break;
        }
    }
    fn_8010D0BC(p, i);
}

} /* extern "C" */
