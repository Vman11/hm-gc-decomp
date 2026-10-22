#include "common.h"
static const double lbl_80363288 = 3.141592653589793;
static const double lbl_80363290 = -3.141592653589793;
static const double lbl_80363298 = -1.5707963267948966;
static const double lbl_803632A0 = 1.5707963267948966;
static const double lbl_803632A8 = 0.7853981633974483;
static const double lbl_803632B0 = -0.7853981633974483;
static const double lbl_803632B8 = 2.356194490192345;
static const double lbl_803632C0 = -2.356194490192345;
static const double lbl_803632C8 = 0.0;
static const double lbl_803632D0 = -0.0;
static const double lbl_803632D8 = 1.2246467991473532e-16;
double fn_800EFA20(double);
double fn_800EFA20(double x);

double fn_800ED164(double y, double x) {
    double z;
    int k,m,hx,hy,ix,iy;
    unsigned int lx,ly;
    hx=((int *)&x)[0]; lx=((unsigned int *)&x)[1];
    hy=((int *)&y)[0]; ly=((unsigned int *)&y)[1];
    ix=hx&0x7fffffff; iy=hy&0x7fffffff;
    if ((ix|((lx|-lx)>>31))>0x7ff00000 || (iy|((ly|-ly)>>31))>0x7ff00000)
        return x+y;
    if (((hx-0x3ff00000)|lx)==0) return fn_800EFA20(y);
    m=((hy>>31)&1)|((hx>>30)&2);
    if ((iy|ly)==0) {
        switch(m) {
        case 0: case 1: return y;
        case 2: return lbl_80363288;
        case 3: return lbl_80363290;
        }
    }
    if ((ix|lx)==0) return hy<0 ? lbl_80363298 : lbl_803632A0;
    if (ix==0x7ff00000) {
        if (iy==0x7ff00000) {
            switch(m) {
            case 0: return lbl_803632A8;
            case 1: return lbl_803632B0;
            case 2: return lbl_803632B8;
            case 3: return lbl_803632C0;
            }
        } else {
            switch(m) {
            case 0: return lbl_803632C8;
            case 1: return lbl_803632D0;
            case 2: return lbl_80363288;
            case 3: return lbl_80363290;
            }
        }
    }
    if (iy==0x7ff00000) return hy<0 ? lbl_80363298 : lbl_803632A0;
    k=(iy-ix)>>20;
    if (k>60) z=lbl_803632A0;
    else if (hx<0 && k< -60) z=lbl_803632C8;
    else z=fn_800EFA20(__fabs(y/x));
    switch(m) {
    case 0: return z;
    case 1: ((unsigned int *)&z)[0]^=0x80000000; return z;
    case 2: return lbl_80363288-(z-lbl_803632D8);
    default: return (z-lbl_803632D8)-lbl_80363288;
    }
}
