// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void *memset(void *, int, u32);
void __dl__FPv(void *);

typedef struct {
    u8 f0[8];
    u8 f8[12];
    u8 f20[12];
    u8 f32[12];
    u8 f44[12];
    u8 f56[16];
    u8 f72[16];
    s32 f88;
    s32 f92;
    s32 f96;
    s32 f100[4];
    s32 f116[4];
    u8 f132[4][16];
} C;
static inline void Reset(C *p) {
    int i;
    p->f92 = 0;
    p->f96 = 0;
    memset(p->f0, 0, 8);
    memset(p->f8, 0, 12);
    memset(p->f20, 0, 12);
    memset(p->f32, 0, 12);
    memset(p->f44, 0, 12);
    memset(p->f56, 0, 16);
    memset(p->f72, 0, 16);
    p->f88 = 0;
    for (i = 0; i < 4; i++) {
        p->f100[i] = 0;
        p->f116[i] = 0;
        memset(p->f132[i], 0, 16);
    }
}
C *__dt__9C80201630Fv(C *p, s16 f) {
    if (p) {
        Reset(p);
        if (f > 0) __dl__FPv(p);
    }
    return p;
}

} /* extern "C" */
