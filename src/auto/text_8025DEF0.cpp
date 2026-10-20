// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 pad[64]; } T64_8025DEF0;
void fn_800F6E88(void *, void *);
T64_8025DEF0 *fn_800F8274(void *, void *);

void fn_8025DEF0(u8 *p) {
    u8 *q = *(u8 **)(p + 156);
    if (*(s32 *)(q + 776) != 0) {
        u8 buf[12];
        fn_800F6E88(buf, q + 780);
        *(T64_8025DEF0 **)(p + 324) = fn_800F8274(*(void **)(p + 316), buf);
        *(s32 *)(q + 776) = 0;
        *(s32 *)(p + 336) = *(T64_8025DEF0 **)(p + 324) - *(T64_8025DEF0 **)(p + 320);
    }
}

} /* extern "C" */
