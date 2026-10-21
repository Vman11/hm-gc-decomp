// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void *memset(void *, int, u32);
typedef struct C80201630 {
    u8 a[8];
    u8 b[12];
    u8 c[12];
    u8 d[12];
    u8 e[12];
    u8 f[16];
    u8 g[16];
    s32 x88;
    s32 x92;
    s32 x96;
    s32 x100[4];
    s32 x116[4];
    u8 x132[4][16];
} C80201630;

static inline void clr_80201630(C80201630 *p) {
    s32 i;
    p->x88 = 0;
    for (i = 0; i < 4; i++) {
        p->x100[i] = 0;
        p->x116[i] = 0;
        memset(p->x132[i], 0, 16);
    }
}

C80201630 *__ct__9C80201630Fv(C80201630 *p) {
    p->x92 = 0;
    p->x96 = 0;
    memset(p->a, 0, 8);
    memset(p->b, 0, 12);
    memset(p->c, 0, 12);
    memset(p->d, 0, 12);
    memset(p->e, 0, 12);
    memset(p->f, 0, 16);
    memset(p->g, 0, 16);
    clr_80201630(p);
    return p;
}

} /* extern "C" */
