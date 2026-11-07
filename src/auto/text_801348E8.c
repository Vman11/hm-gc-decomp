/* Functions from 0x801348E8 to 0x8013494C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AC38;
s32 fn_801348E8(void) {
    return lbl_8035AC38;
}

extern u8 lbl_8032C2D0[];
u8 *fn_801348F0(void) {
    return lbl_8032C2D0;
}

s32 fn_801348FC(void) {
    return 0;
}

int fn_80134904(int a) { return a; }

extern u16 lbl_803640E0;
void fn_80134908(void* arg0) {
    *(u16*)((u8*)arg0 + 0x1A) &= ~2;
}

typedef struct { u8 r, g, b, a; } Color_80134918;

static inline void CopyColor(Color_80134918 *d, const Color_80134918 *s) {
    u8 x, y;
    x = s->r;
    y = s->g;
    d->r = x;
    x = s->b;
    d->g = y;
    y = s->a;
    d->b = x;
    d->a = y;
}

void fn_80134918(void *arg0, u8 *arg1) {
    CopyColor((Color_80134918 *)((u8 *)arg0 + 0x14), (Color_80134918 *)arg1);
    *(u16 *)((u8 *)arg0 + 0x1A) |= lbl_803640E0;
}
