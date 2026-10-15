/* Functions from 0x80126A2C to 0x80126A9C, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8 r, g, b, a;
} Color80126A3C;

extern s32 lbl_80363E20;
void fn_80126A2C(s32 *arg0) {
    arg0[2] &= 0xFFFFFEFF;
}

void fn_80126A3C(u8 *arg0, u8 *arg1) {
    u8 a = arg1[0];
    u8 b = arg1[1];
    u8 c = arg1[2];
    u8 d = arg1[3];
    arg0[0x58] = a;
    arg0[0x59] = b;
    arg0[0x5A] = c;
    arg0[0x5B] = d;
    ((s32 *)arg0)[2] |= lbl_80363E20;
}

s32 fn_80126A70(u16 *arg0, u16 *arg1) {
    u16 a = arg0[2];
    u16 b = arg1[2];
    if (a > b) return 1;
    return (s32)((a - b) | (b - a)) >> 31;
}

