/* Functions from 0x80121D44 to 0x80121E1C, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef struct {
    u8 r, g, b, a;
} Color4;

void fn_80121D44(u8 *__restrict arg0, u8 *__restrict arg1) {
    arg0[0] = arg1[0];
    arg0[1] = arg1[1];
    arg0[2] = arg1[2];
    arg0[3] = arg1[3];
    arg0[4] = arg1[4];
    arg0[5] = arg1[5];
    arg0[6] = arg1[6];
    arg0[7] = arg1[7];
    arg0[8] = arg1[8];
    arg0[9] = arg1[9];
    arg0[10] = arg1[10];
    arg0[11] = arg1[11];
    arg0[12] = arg1[12];
    arg0[13] = arg1[13];
    arg0[14] = arg1[14];
    arg0[15] = arg1[15];
}

void fn_80121DC8(u8 *arg0, u8 *arg1) {
    u8 a, b, g, r;
    r = arg1[0];
    g = arg1[1];
    arg0[0] = r;
    b = arg1[2];
    arg0[1] = g;
    a = arg1[3];
    arg0[2] = b;
    arg0[3] = a;
    arg0[4] = r; arg0[5] = g; arg0[6] = b; arg0[7] = a;
    arg0[8] = r; arg0[9] = g; arg0[10] = b; arg0[11] = a;
    arg0[12] = r; arg0[13] = g; arg0[14] = b; arg0[15] = a;
}

} /* extern "C" */
