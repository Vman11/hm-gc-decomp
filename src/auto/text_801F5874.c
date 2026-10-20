// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

u8 fn_801F36D8(void *);
void fn_801F55E0(void *, void *);

s32 fn_801F5874(u8 *p, void **q) {
    u32 j;
    u8 *s;
    u32 i;
    u32 sum;
    u8 buf[16];
    s = buf;
    sum = 0;
    i = 0;
    do {
        *s = fn_801F36D8(*q);
        i++;
        sum += *s++;
    } while (i < 16);
    if (sum > 256) {
        return -1;
    }
    for (j = 0; j < sum; j++) {
        p[j + 148] = fn_801F36D8(*q);
    }
    fn_801F55E0(p, buf);
    *(s32 *)(p + 404) = 1;
    return sum + 16;
}
