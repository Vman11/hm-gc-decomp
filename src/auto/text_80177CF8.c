/* Functions from 0x80177CF8 to 0x80177D88, found by decomp-toolkit. */
#include "common.h"

typedef struct { u8 r, g, b, a; } GXColor;

void fn_80177CF8(GXColor *__restrict arg0, GXColor *__restrict arg1) {
    arg1->r = arg0[2].r;
    arg1->g = arg0[2].g;
    arg1->b = arg0[2].b;
    arg1->a = arg0[2].a;
}

void fn_80177D1C(GXColor *__restrict arg0, GXColor *__restrict arg1) {
    arg1->r = arg0[3].r;
    arg1->g = arg0[3].g;
    arg1->b = arg0[3].b;
    arg1->a = arg0[3].a;
}

void fn_80177D40(GXColor *__restrict arg0, GXColor *__restrict arg1) {
    arg1->r = arg0[1].r;
    arg1->g = arg0[1].g;
    arg1->b = arg0[1].b;
    arg1->a = arg0[1].a;
}

void fn_80177D64(GXColor *__restrict arg0, GXColor *__restrict arg1) {
    arg1->r = arg0->r;
    arg1->g = arg0->g;
    arg1->b = arg0->b;
    arg1->a = arg0->a;
}

