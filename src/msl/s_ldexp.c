#include "common.h"
static const double lbl_80363690 = 0.0;
static const double lbl_80363698 = 1.8014398509481984e+16;
static const double lbl_803636A0 = 1e-300;
static const double lbl_803636A8 = 1e+300;
static const double lbl_803636B0 = 5.551115123125783e-17;
double fn_800EFD7C(double, double);
double fn_800EFD7C(double x, double y);

double fn_800F004C(double x, int n) {
    int k, hx, lx;
    int cls;
    double t = x;
    switch (*(int *)&t & 0x7ff00000) {
    case 0x7ff00000:
        if ((*(int *)&t & 0x000fffff) || *(1 + (int *)&t)) cls = 1;
        else cls = 2;
        break;
    case 0:
        if ((*(int *)&t & 0x000fffff) || *(1 + (int *)&t)) cls = 5;
        else cls = 3;
        break;
    default:
        cls = 4;
        break;
    }
    if (cls <= 2 || lbl_80363690 == x) return x;
    hx = *(int *)&x;
    lx = *(1 + (int *)&x);
    k = (hx & 0x7ff00000) >> 20;
    if (k == 0) {
        if ((lx | (hx & 0x7fffffff)) == 0) return x;
        x *= lbl_80363698;
        hx = *(int *)&x;
        k = ((hx & 0x7ff00000) >> 20) - 54;
        if (n < -50000) return lbl_803636A0 * x;
    }
    if (k == 0x7ff) return x + x;
    k = k + n;
    if (k > 0x7fe) return lbl_803636A8 * fn_800EFD7C(lbl_803636A8, x);
    if (k > 0) {
        *(int *)&x = (hx & 0x800fffff) | (k << 20);
        return x;
    }
    if (k <= -54) {
        if (n > 50000) return lbl_803636A8 * fn_800EFD7C(lbl_803636A8, x);
        else return lbl_803636A0 * fn_800EFD7C(lbl_803636A0, x);
    }
    k += 54;
    *(int *)&x = (hx & 0x800fffff) | (k << 20);
    return lbl_803636B0 * x;
}
