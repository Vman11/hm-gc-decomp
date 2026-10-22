#include "common.h"
static const double lbl_80363670 = 0.0;
int fn_800EE484(double, double*);
double fn_800EE824(double x, double y);
int fn_800EE484(double x, double *y);
double fn_800EF76C(double x, double y, int iy);

double fn_800EE824(double x, double y);
double fn_800EFDA4(double x) {
    double y[2];
    int n, ix;

    ix = *(int*)&x;
    ix &= 0x7fffffff;
    if (ix <= 0x3fe921fb) {
        return fn_800EE824(x, lbl_80363670);
    } else if (ix >= 0x7ff00000) {
        return x - x;
    } else {
        n = fn_800EE484(x, y);
        switch (n & 3) {
        case 0:
            return fn_800EE824(y[0], y[1]);
        case 1:
            return -fn_800EF76C(y[0], y[1], 1);
        case 2:
            return -fn_800EE824(y[0], y[1]);
        default:
            return fn_800EF76C(y[0], y[1], 1);
        }
    }
}
