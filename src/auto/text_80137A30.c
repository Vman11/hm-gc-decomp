/* Functions from 0x80137A30 to 0x80137A9C, found by decomp-toolkit. */
#include "common.h"

typedef struct { u8 r, g, b, a; } GXColor;

static inline void CopyColor(GXColor *__restrict d, const GXColor *__restrict s) {
    d->r = s->r;
    d->g = s->g;
    d->b = s->b;
    d->a = s->a;
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
    u8 t0, t1;
    t0 = arg1->r;
    t1 = arg1->g;
    arg0->r = t0;
    t0 = arg1->b;
    arg0->g = t1;
    t1 = arg1->a;
    arg0->a = t1;
    arg0->b = t0;
    *(u16 *)((u8 *)arg0 + 0xC) |= lbl_80364188;
}

void fn_80137A90(void) {

}

s32 fn_80137A94(void) {
    return 0;
}

