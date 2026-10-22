#include "common.h"
extern float lbl_803596B4[];

double fn_800ECE54(double x) {
extern float lbl_803596B0[], lbl_803596B4[];
extern double lbl_803631F8, lbl_80363200, lbl_80363208, lbl_80363210, lbl_80363218, lbl_80363220, lbl_80363228, lbl_80363230, lbl_80363238, lbl_80363240, lbl_80363248, lbl_80363250, lbl_80363258, lbl_80363260, lbl_80363268, lbl_80363270, lbl_80363278, lbl_80363280;
double z,p,q,r,w,s,c,df;
int hx,ix;
hx=*(int*)&x; ix=hx&0x7fffffff;
if(ix>=0x3ff00000) {
if(((ix-0x3ff00000)|*((int*)&x+1))==0) { if(hx>0) return lbl_803631F8; else return lbl_80363200; }
return lbl_803596B0[0];
}
if(ix<0x3fe00000) {
if(ix<=0x3c600000) return lbl_80363208;
z=x*x; p = z*(lbl_80363218+z*(lbl_80363220+z*(lbl_80363228+z*(lbl_80363230+z*(lbl_80363238+lbl_80363240*z))))); q = lbl_80363248+z*(lbl_80363250+z*(lbl_80363258+z*(lbl_80363260+lbl_80363268*z)));
r=p/q; return lbl_80363208-(x-(lbl_80363210-x*r));
} else if(hx<0) {
x=(lbl_80363248+x)*lbl_80363270; p = x*(lbl_80363218+x*(lbl_80363220+x*(lbl_80363228+x*(lbl_80363230+x*(lbl_80363238+lbl_80363240*x))))); q = lbl_80363248+x*(lbl_80363250+x*(lbl_80363258+x*(lbl_80363260+lbl_80363268*x)));
{ double guess; if (x > lbl_803631F8) { guess = __frsqrte(x); guess = lbl_80363270 * guess * (lbl_80363278 - x * (guess * guess)); guess = lbl_80363270 * guess * (lbl_80363278 - x * (guess * guess)); guess = lbl_80363270 * guess * (lbl_80363278 - x * (guess * guess)); guess = lbl_80363270 * guess * (lbl_80363278 - x * (guess * guess)); s = x * guess; } else if (x == lbl_803631F8) s = lbl_803631F8; else if (x != lbl_803631F8) s = lbl_803596B0[0]; else s = lbl_803596B4[0]; }
r=p/q; w=r*s-lbl_80363210; return lbl_80363200-lbl_80363280*(s+w);
} else {
z=(lbl_80363248-x)*lbl_80363270;
{ double guess; if (z > lbl_803631F8) { guess = __frsqrte(z); guess = lbl_80363270 * guess * (lbl_80363278 - z * (guess * guess)); guess = lbl_80363270 * guess * (lbl_80363278 - z * (guess * guess)); guess = lbl_80363270 * guess * (lbl_80363278 - z * (guess * guess)); guess = lbl_80363270 * guess * (lbl_80363278 - z * (guess * guess)); s = z * guess; } else if (z == lbl_803631F8) s = lbl_803631F8; else if (z != lbl_803631F8) s = lbl_803596B0[0]; else s = lbl_803596B4[0]; }
df=s; *((int*)&df+1)=0;
p = z*(lbl_80363218+z*(lbl_80363220+z*(lbl_80363228+z*(lbl_80363230+z*(lbl_80363238+lbl_80363240*z))))); q = lbl_80363248+z*(lbl_80363250+z*(lbl_80363258+z*(lbl_80363260+lbl_80363268*z)));
c=(z-df*df)/(s+df); r=p/q; w=r*s+c; return lbl_80363280*(df+w);
}
}
