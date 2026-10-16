/* Functions from 0x800E24F0 to 0x800E2C68, found by decomp-toolkit. */
#include "common.h"

int fn_800E24F0(int *a) {
    return (a[0] != 0) | (a[1] != 0) | (a[2] != 0);
}

int fn_800E2520(int *a, int *b) {
    int x = a[0], x2 = b[0], y = a[1], y2 = b[1], z = a[2], z2 = b[2];
    if (x != x2 || y != y2 || z != z2) {
        return 1;
    }
    return 0;
}

unsigned fn_800E2584(double d) {
    if (d < 0.0) return 0;
    if (d >= 4294967296.0) return 0xFFFFFFFF;
    if (d >= 2147483648.0) return (int)(d - 2147483648.0) + 0x80000000;
    return (int)d;
}

s32 fn_800E2B24(s32 arg0, u32 arg1, s32 arg2) {
    return (arg0 << arg2) | (arg1 >> (0x20 - arg2)) | (arg1 << (arg2 - 0x20));
}

unsigned long long fn_800E2B48(unsigned long long x, int n) { return x >> n; }

long long fn_800E2B6C(long long x, int n) { return x >> n; }

int GetR2__Fv_800E2C60(int r2) {
return r2;
}
