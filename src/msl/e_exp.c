#include "common.h"
typedef struct ExpCoefficients { double half[2]; double hi[2]; double lo[2]; } ExpCoefficients;
extern double lbl_8029C538[];
extern double lbl_803632E0, lbl_803632E8, lbl_803632F0, lbl_803632F8;
extern double lbl_80363300, lbl_80363308, lbl_80363310, lbl_80363318;
extern double lbl_80363320, lbl_80363328, lbl_80363330, lbl_80363338;
extern double lbl_80363340, lbl_80363348;

extern double lbl_8029C538[];
extern double lbl_803632E0, lbl_803632E8, lbl_803632F0, lbl_803632F8;
extern double lbl_80363300, lbl_80363308, lbl_80363310, lbl_80363318;
extern double lbl_80363320, lbl_80363328, lbl_80363330, lbl_80363338;
extern double lbl_80363340, lbl_80363348;
double fn_800ED3F4(double x) {
    double y, hi, lo, c, t;
    int k, xsb;
    ExpCoefficients *coeff = (ExpCoefficients *)lbl_8029C538;
    unsigned hx;
    hx = ((unsigned *)&x)[0];
    xsb = (hx >> 31) & 1;
    hx &= 0x7fffffff;
    if (hx >= 0x40862e42) {
        if (hx >= 0x7ff00000) {
            if (((hx & 0xfffff) | ((unsigned *)&x)[1]) != 0) return x + x;
            return xsb == 0 ? x : lbl_803632E0;
        }
        if (x > lbl_803632E8) return lbl_803632F0;
        if (x < lbl_803632F8) return lbl_803632E0;
    }
    if (hx > 0x3fd62e42) {
        if (hx < 0x3ff0a2b2) {
            hi = x - *(coeff->hi + xsb);
            lo = *(coeff->lo + xsb);
            k = 1 - xsb - xsb;
        } else {
            k = lbl_80363300 * x + coeff->half[xsb];
            t = k;
            hi = x - t * coeff->hi[0];
            lo = t * coeff->lo[0];
        }
        x = hi - lo;
    } else if (hx < 0x3e300000) {
        if (lbl_80363308 + x > lbl_80363310) return lbl_80363310 + x;
    } else k = 0;
    t = x * x;
    c = x - t * (lbl_80363318 + t * (lbl_80363320 + t * (lbl_80363328 + t * (lbl_80363330 + t * lbl_80363338))));
    if (k == 0) return lbl_80363310 - ((x * c) / (c - lbl_80363340) - x);
    y = lbl_80363310 - ((lo - (x * c) / (lbl_80363340 - c)) - hi);
    if (k >= -1021) {
        ((int *)&y)[0] += k << 20;
        return y;
    }
    ((int *)&y)[0] += (k + 1000) << 20;
    return y * lbl_80363348;
}
