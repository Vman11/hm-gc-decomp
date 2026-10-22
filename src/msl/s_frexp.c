/* fdlibm s_frexp.c */
#include "common.h"

typedef union DoubleShape_fx {
    double value;
    struct {
        unsigned int hi;
        unsigned int lo;
    } parts;
} DoubleShape_fx;

static const double two54 = 1.80143985094819840000e+16;

double fn_800EFFC0(double x, int *exponent) {
    DoubleShape_fx shape;
    int hx;
    int ix;
    int lx;

    shape.value = x;
    hx = shape.parts.hi;
    ix = hx & 0x7fffffff;
    lx = shape.parts.lo;
    *exponent = 0;
    if (ix >= 0x7ff00000 || ((ix | lx) == 0)) {
        return shape.value;
    }
    if (ix < 0x00100000) {
        x *= two54; shape.value = x;
        hx = shape.parts.hi;
        ix = hx & 0x7fffffff;
        *exponent = -54;
    }
    *exponent += (ix >> 20) - 1022;
    hx = (hx & 0x800fffff) | 0x3fe00000;
    shape.parts.hi = hx;
    return shape.value;
}
