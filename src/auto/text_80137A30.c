/* Functions from 0x80137A30 to 0x80137A9C, found by decomp-toolkit. */
#include "common.h"

typedef struct { u8 r, g, b, a; } GXColor;

static inline void CopyColor(GXColor *d, const GXColor *s) {
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

extern u16 lbl_80364188;
void fn_80137A30(u8 *arg0) {
    *(s32 *)(arg0 + 0x8) &= ~0x61;
}

s32 fn_80137A44(void) {
    return 0;
}

void fn_80137A4C(u8 *arg0) {
    *(u16 *)(arg0 + 0xC) &= ~0x8;
}

void fn_80137A5C(GXColor *arg0, GXColor *arg1) {
    CopyColor(arg0, arg1);
    *(u16 *)((u8 *)arg0 + 0xC) |= lbl_80364188;
}

int fn_80137A90(int a) { return a; }

s32 fn_80137A94(void) {
    return 0;
}

