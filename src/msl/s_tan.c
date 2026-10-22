#include "common.h"
static const double lbl_803636C0 = 0.0;
double fn_800EF80C(double, double, int);
int fn_800EE484(double, double*);
int fn_800EE484(double x, double *y);
double fn_800EF80C(double x, double y, int iy);

double fn_800F03E4(double x) {
    double y[2];
    int n, ix;

    ix = *(int*)&x;
    ix &= 0x7fffffff;
    if (ix <= 0x3fe921fb) {
        return fn_800EF80C(x, lbl_803636C0, 1);
    } else if (ix >= 0x7ff00000) {
        return x - x;
    } else {
        n = fn_800EE484(x, y);
        return fn_800EF80C(y[0], y[1], 1 - ((n & 1) << 1));
    }
}
