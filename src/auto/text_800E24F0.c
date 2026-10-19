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

extern const double lbl_8029BF20[];
unsigned fn_800E2584(double d) {
unsigned result = 0;
if (!(d < 0.0)) {
result--;
if (d < 4294967296.0) {
double value = d;
if (!(d < 2147483648.0)) value -= 2147483648.0;
result = (int)value;
if (!(d < 2147483648.0)) result += 0x80000000;
}
}
return result;
}

int GetR2__Fv_800E2C60(int r2) {
    return r2;
}
