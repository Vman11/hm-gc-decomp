#include "common.h"
static const double lbl_80363540 = 1.0;
static const double lbl_80363548 = 0.0416666666666666;
static const double lbl_80363550 = -0.001388888888887411;
static const double lbl_80363558 = 2.480158728947673e-05;
static const double lbl_80363560 = -2.7557314351390663e-07;
static const double lbl_80363568 = 2.087572321298175e-09;
static const double lbl_80363570 = -1.1359647557788195e-11;
static const double lbl_80363578 = 0.5;
static const double lbl_80363580 = 0.28125;


double fn_800EE824(double x, double y) {
    double a, hz, z, r, qx;
    int ix;
    ix = (*(int *)&x) & 0x7fffffff;
    if (ix < 0x3e400000) {
        if ((int)x == 0) return lbl_80363540;
    }
    z = x * x;
    r = z * (lbl_80363548 + z * (lbl_80363550 + z * (lbl_80363558 + z * (lbl_80363560 + z * (lbl_80363568 + lbl_80363570 * z)))));
    if (ix < 0x3FD33333)
        return lbl_80363540 - (lbl_80363578 * z - (z * r - x * y));
    else {
        if (ix > 0x3fe90000) {
            qx = lbl_80363580;
        } else {
            *(int *)&qx = ix - 0x00200000;
            *((int *)&qx + 1) = 0;
        }
        hz = lbl_80363578 * z - qx;
        a = lbl_80363540 - qx;
        return a - (hz - (z * r - x * y));
    }
}
