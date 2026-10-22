#include "common.h"
static const double lbl_8029C780[13] = {0.3333333333333341, 0.13333333333320124, 0.05396825397622605, 0.021869488294859542, 0.0088632398235993, 0.0035920791075913124, 0.0014562094543252903, 0.0005880412408202641, 0.0002464631348184699, 7.817944429395571e-05, 7.140724913826082e-05, -1.8558637485527546e-05, 2.590730518636337e-05};
static const double lbl_80363600 = 1.0;
static const double lbl_80363608 = -1.0;
static const double lbl_80363610 = 0.7853981633974483;
static const double lbl_80363618 = 3.061616997868383e-17;
static const double lbl_80363620 = 0.0;
static const double lbl_80363628 = 2.0;
double fabs(double);

double fabs(double);
double fn_800EF80C(double x, double y, int iy) {
    double z,r,v,w,s;
    int ix,hx;
    hx = ((int *)&x)[0];
    ix = hx & 0x7fffffff;
    if(ix < 0x3e300000) {
        if((int)x == 0) {
            if((ix | ((int *)&x)[1] | (iy+1)) == 0)
                { w = __fabs(x); return lbl_80363600 / w; }
            else return (iy == 1) ? x : lbl_80363608 / x;
        }
    }
    if(ix >= 0x3fe59428) {
        if(hx < 0) { x = -x; y = -y; }
        z = lbl_80363610 - x;
        w = lbl_80363618 - y;
        x = z + w;
        y = lbl_80363620;
    }
    z = x*x;
    w = z*z;
    r = lbl_8029C780[1]+w*(lbl_8029C780[3]+w*(lbl_8029C780[5]+w*(lbl_8029C780[7]+w*(lbl_8029C780[9]+w*lbl_8029C780[11]))));
    v = z*(lbl_8029C780[2]+w*(lbl_8029C780[4]+w*(lbl_8029C780[6]+w*(lbl_8029C780[8]+w*(lbl_8029C780[10]+w*lbl_8029C780[12])))));
    s = z*x;
    r = y+z*(s*(r+v)+y);
    r += lbl_8029C780[0]*s;
    w = x+r;
    if(ix >= 0x3fe59428) {
        v = (double)iy;
        return (double)(1-((hx>>30)&2))*(v-lbl_80363628*(x-(w*w/(w+v)-r)));
    }
    if(iy == 1) return w;
    else {
        double a,t;
        z = w;
        ((int *)&z)[1] = 0;
        v = r-(z-x);
        t = a = lbl_80363608/w;
        ((int *)&t)[1] = 0;
        s = lbl_80363600+t*z;
        return t+a*(s+t*v);
    }
}
