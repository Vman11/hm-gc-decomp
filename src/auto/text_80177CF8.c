/* Functions from 0x80177CF8 to 0x80177D88, found by decomp-toolkit. */
#include "common.h"

typedef struct { u8 r, g, b, a; } GXColor;

void fn_80177CF8(GXColor *__restrict arg0, GXColor *__restrict arg1) {
    arg1->r = arg0[2].r;
    arg1->g = arg0[2].g;
    arg1->b = arg0[2].b;
    arg1->a = arg0[2].a;
}

void fn_80177D1C(void *arg0, void *arg1) {
    M2C_FIELD(arg1, u8 *, 0) = (u8) M2C_FIELD(arg0, u8 *, 0xC);
    M2C_FIELD(arg1, u8 *, 1) = (u8) M2C_FIELD(arg0, u8 *, 0xD);
    M2C_FIELD(arg1, u8 *, 2) = (u8) M2C_FIELD(arg0, u8 *, 0xE);
    M2C_FIELD(arg1, u8 *, 3) = (u8) M2C_FIELD(arg0, u8 *, 0xF);
}

void fn_80177D40(void *arg0, void *arg1) {
    M2C_FIELD(arg1, u8 *, 0) = (u8) M2C_FIELD(arg0, u8 *, 4);
    M2C_FIELD(arg1, u8 *, 1) = (u8) M2C_FIELD(arg0, u8 *, 5);
    M2C_FIELD(arg1, u8 *, 2) = (u8) M2C_FIELD(arg0, u8 *, 6);
    M2C_FIELD(arg1, u8 *, 3) = (u8) M2C_FIELD(arg0, u8 *, 7);
}

void fn_80177D64(GXColor *arg0, GXColor *arg1) {
    u8 g, r, a, b;
    r = arg0->r;
    g = arg0->g;
    arg1->r = r;
    b = arg0->b;
    arg1->g = g;
    a = arg0->a;
    arg1->b = b;
    arg1->a = a;
}

