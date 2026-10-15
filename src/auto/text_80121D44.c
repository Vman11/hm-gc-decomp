/* Functions from 0x80121D44 to 0x80121E1C, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8 r, g, b, a;
} Color4;

void fn_80121D44(void *arg0, void *arg1) {
    u8 *d = arg0;
    u8 *s = arg1;
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
    d[4] = s[4];
    d[5] = s[5];
    d[6] = s[6];
    d[7] = s[7];
    d[8] = s[8];
    d[9] = s[9];
    d[10] = s[10];
    d[11] = s[11];
    d[12] = s[12];
    d[13] = s[13];
    d[14] = s[14];
    d[15] = s[15];
}

void fn_80121DC8(void *arg0, void *arg1) {
    u8 *d = arg0;
    u8 *s = arg1;
    u8 a = s[0];
    u8 b = s[1];
    u8 c = s[2];
    u8 e = s[3];
    d[0] = a;
    d[1] = b;
    d[2] = c;
    d[3] = e;
    d[4] = a;
    d[5] = b;
    d[6] = c;
    d[7] = e;
    d[8] = a;
    d[9] = b;
    d[10] = c;
    d[11] = e;
    d[12] = a;
    d[13] = b;
    d[14] = c;
    d[15] = e;
}

