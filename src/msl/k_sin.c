#include "common.h"
static const double lbl_803635C8 = 0.00833333333332249;
static const double lbl_803635D0 = -0.0001984126982985795;
static const double lbl_803635D8 = 2.7557313707070068e-06;
static const double lbl_803635E0 = -2.5050760253406863e-08;
static const double lbl_803635E8 = 1.58969099521155e-10;
static const double lbl_803635F0 = -0.16666666666666632;
static const double lbl_803635F8 = 0.5;


double fn_800EF76C(double x, double y, int iy) {
    double z, r, v;
    int ix;
    ix = (*(int *)&x) & 0x7fffffff;
    if (ix < 0x3e400000) {
        if ((int)x == 0) return x;
    }
    z = x * x;
    v = z * x;
    r = lbl_803635D0 + z * (lbl_803635D8 + z * (lbl_803635E0 + lbl_803635E8 * z));
    r = lbl_803635C8 + z * r;
    if (iy == 0) return x + v * (lbl_803635F0 + z * r);
    else return x - ((z * (lbl_803635F8 * y - v * r) - y) - lbl_803635F0 * v);
}
