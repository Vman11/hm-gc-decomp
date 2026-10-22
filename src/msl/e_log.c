#include "common.h"
static const double lbl_80363358 = -1.8014398509481984e+16;
static const double lbl_80363360 = 1.8014398509481984e+16;
static const double lbl_80363368 = 1.0;
static const double lbl_80363370 = 0.6931471803691238;
static const double lbl_80363378 = 1.9082149292705877e-10;
static const double lbl_80363380 = 0.5;
static const double lbl_80363388 = 0.3333333333333333;
static const double lbl_80363390 = 2.0;
static const double lbl_80363398 = 0.6666666666666735;
static const double lbl_803633A0 = 0.2857142874366239;
static const double lbl_803633A8 = 0.1818357216161805;
static const double lbl_803633B0 = 0.14798198605116586;
static const double lbl_803633B8 = 0.3999999999940942;
static const double lbl_803633C0 = 0.22222198432149784;
static const double lbl_803633C8 = 0.15313837699209373;
extern s32 lbl_8035A978;
extern double lbl_8035A988;
extern double lbl_8035A988;

extern double lbl_8035A988;
double fn_800ED954(double x) {
    double hfsq,f,s,z,R,w,t1,t2,dk;
    int k,hx,i,j;
    unsigned int lx;
    hx = ((int*)&x)[0];
    lx = ((unsigned int*)&x)[1];
    k = 0;
    if (hx < 0x00100000) {
        if (((hx & 0x7fffffff) | lx) == 0) return lbl_80363358 / lbl_8035A988;
        if (hx < 0) {
            lbl_8035A978 = 33;
            return (x-x)/lbl_8035A988;
        }
        k -= 54;
        x *= lbl_80363360;
        hx = ((int*)&x)[0];
    }
    if (hx >= 0x7ff00000) return x+x;
    k += (hx >> 20)-1023;
    hx &= 0x000fffff;
    i = (hx+0x95f64)&0x100000;
    ((int*)&x)[0] = hx | (i^0x3ff00000);
    k += i>>20;
    f = x-lbl_80363368;
    if ((0x000fffff&(2+hx)) < 3) {
        if (f == lbl_8035A988) {
            if (k==0) return lbl_8035A988;
            dk=(double)k;
            return lbl_80363370*dk+lbl_80363378*dk;
        }
        R = (lbl_80363380-lbl_80363388*f)*(f*f);
        if (k==0) return f-R;
        dk=(double)k;
        return lbl_80363370*dk-((R-lbl_80363378*dk)-f);
    }
    s=f/(lbl_80363390+f);
    dk=(double)k;
    z=s*s;
    i=hx-0x6147a;
    w=z*z;
    j=0x6b851-hx;
    t1=w*(lbl_803633B8+w*(lbl_803633C0+lbl_803633C8*w));
    t2=z*(lbl_80363398+w*(lbl_803633A0+w*(lbl_803633A8+lbl_803633B0*w)));
    i |= j;
    R=t2+t1;
    if (i>0) {
        hfsq=0.5*f*f;
        if(k==0) return f-(hfsq-s*(hfsq+R));
        return lbl_80363370*dk-((hfsq-(s*(hfsq+R)+lbl_80363378*dk))-f);
    } else {
        if(k==0) return f-s*(f-R);
        return lbl_80363370*dk-((s*(f-R)-lbl_80363378*dk)-f);
    }
}
