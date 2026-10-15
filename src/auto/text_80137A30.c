/* Functions from 0x80137A30 to 0x80137A9C, found by decomp-toolkit. */
#include "common.h"

typedef struct { u8 r, g, b, a; } GXColor;

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

void fn_80137A5C(u8 *arg0, u8 *arg1) {
    arg0[0] = arg1[0];
    arg0[1] = arg1[1];
    arg0[2] = arg1[2];
    arg0[3] = arg1[3];
    *(u16 *)(arg0 + 0xC) |= lbl_80364188;
}

void fn_80137A90(void) {

}

s32 fn_80137A94(void) {
    return 0;
}

