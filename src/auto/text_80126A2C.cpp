/* Functions from 0x80126A2C to 0x80126A9C, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef struct {
    u8 r, g, b, a;
} Color80126A3C;

extern s32 lbl_80363E20;
void fn_80126A2C(s32 *arg0) {
    arg0[2] &= 0xFFFFFEFF;
}

void fn_80126A3C(u8 *arg0, const u8 *arg1) {
    u8 a, b;
    a = arg1[0]; b = arg1[1];
    arg0[0x58] = a;
    a = arg1[2];
    arg0[0x59] = b;
    b = arg1[3];
    arg0[0x5A] = a;
    arg0[0x5B] = b;
    ((s32 *)arg0)[2] |= lbl_80363E20;
}

s32 fn_80126A70(u16 *arg0, u16 *arg1) {
    u16 b;
    u16 a;
    a = arg0[2];
    b = arg1[2];
    if (a > b) return 1;
    return (s32)((a - b) | (b - a)) >> 31;
}

} /* extern "C" */
