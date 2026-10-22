#include "common.h"
double fn_800F004C(double, int);
extern float lbl_803596B4[];
extern s32 lbl_8035A978;
extern double lbl_8029C578[];
extern double lbl_803633D8, lbl_803633E0, lbl_803633E8, lbl_803633F0, lbl_803633F8;
extern double lbl_80363400, lbl_80363408, lbl_80363410, lbl_80363418, lbl_80363420, lbl_80363428;
extern double lbl_80363430, lbl_80363438, lbl_80363440, lbl_80363448, lbl_80363450, lbl_80363458;
extern double lbl_80363460, lbl_80363468, lbl_80363470, lbl_80363478, lbl_80363480, lbl_80363488, lbl_80363490;
extern double lbl_80363498, lbl_803634A0, lbl_803634A8, lbl_803634B0, lbl_803634B8, lbl_803634C0, lbl_803634C8, lbl_803634D0, lbl_803634D8;
double fn_800F004C(double x, int n);

extern double lbl_8029C578[];
extern double lbl_803633D8, lbl_803633E0, lbl_803633E8, lbl_803633F0, lbl_803633F8;
extern double lbl_80363400, lbl_80363408, lbl_80363410, lbl_80363418, lbl_80363420, lbl_80363428;
extern double lbl_80363430, lbl_80363438, lbl_80363440, lbl_80363448, lbl_80363450, lbl_80363458;
extern double lbl_80363460, lbl_80363468, lbl_80363470, lbl_80363478, lbl_80363480, lbl_80363488, lbl_80363490;
extern double lbl_80363498, lbl_803634A0, lbl_803634A8, lbl_803634B0, lbl_803634B8, lbl_803634C0, lbl_803634C8, lbl_803634D0, lbl_803634D8;
double fn_800EDBD0(double x, double y) {
    struct powtab { double bp[2], dp_h[2], dp_l[2]; };
    extern float lbl_803596B0[], lbl_803596B4[];
    extern double fn_800F004C(double, int);
    struct powtab *tab = (struct powtab *)lbl_8029C578;
    double z,ax,z_h,z_l,p_h,p_l;
    double y1,t1,t2,r,s,t,u,v,w;
    int i,j,k,yisint,n;
    int hx,hy,ix,iy;
    unsigned lx,ly;

    hx = *(int*)&x; lx = *(1+(unsigned*)&x);
    hy = *(int*)&y; ly = *(1+(unsigned*)&y);
    ix = hx&0x7fffffff; iy = hy&0x7fffffff;

    if((iy|ly)==0) return lbl_803633D8;

    if(ix > 0x7ff00000 || ((ix==0x7ff00000)&&(lx!=0)) ||
       iy > 0x7ff00000 || ((iy==0x7ff00000)&&(ly!=0)))
        return x+y;

    yisint = 0;
    if(hx<0) {
        if(iy>=0x43400000) yisint = 2;
        else if(iy>=0x3ff00000) {
            k = (iy>>20)-0x3ff;
            if(k>20) {
                j = ly>>(52-k);
                if((j<<(52-k))==ly) yisint = 2-(j&1);
            } else if(ly==0) {
                j = iy>>(20-k);
                if((j<<(20-k))==iy) yisint = 2-(j&1);
            }
        }
    }

    if(ly==0) {
        if (iy==0x7ff00000) {
            if(((ix-0x3ff00000)|lx)==0)
                return y - y;
            else if (ix >= 0x3ff00000)
                return (hy>=0)? y: lbl_803633E0;
            else
                return (hy<0)?-y: lbl_803633E0;
        }
        if(iy==0x3ff00000) {
            if(hy<0) return lbl_803633D8/x; else return x;
        }
        if(hy==0x40000000) return x*x;
        if(hy==0x3fe00000) {
            if(hx>=0) {
                double guess;
                if (x > lbl_803633E0) {
                    guess = __frsqrte(x);
                    guess = lbl_803633E8 * guess * (lbl_803633F0 - x * (guess * guess));
                    guess = lbl_803633E8 * guess * (lbl_803633F0 - x * (guess * guess));
                    guess = lbl_803633E8 * guess * (lbl_803633F0 - x * (guess * guess));
                    guess = lbl_803633E8 * guess * (lbl_803633F0 - x * (guess * guess));
                    return x * guess;
                } else if (x == lbl_803633E0) return lbl_803633E0;
                else if (x != lbl_803633E0) return lbl_803596B0[0];
                return lbl_803596B4[0];
            }
        }
    }

    ax = __fabs(x);
    if(lx==0) {
        if(ix==0x7ff00000||ix==0||ix==0x3ff00000){
            z = ax;
            if(hy<0) z = lbl_803633D8/z;
            if(hx<0) {
                if(((ix-0x3ff00000)|yisint)==0) {
                    z = (z-z)/(z-z);
                } else if(yisint==1)
                    z = -z;
            }
            return z;
        }
    }

    n = (hx>>31)+1;

    if((n|yisint)==0) {
        lbl_8035A978 = 33;
        return lbl_803596B0[0];
    }

    if(iy>0x41e00000) {
        if(iy>0x43f00000){
            if(ix<=0x3fefffff) return (hy<0)? lbl_803633F8:lbl_803633E0;
            if(ix>=0x3ff00000) return (hy>0)? lbl_803633F8:lbl_803633E0;
        }
        if(ix<0x3fefffff) return (hy<0)? lbl_803633F8:lbl_803633E0;
        if(ix>0x3ff00000) return (hy>0)? lbl_803633F8:lbl_803633E0;
        t = x-lbl_803633D8;
        w = (t*t)*(lbl_803633E8-t*(lbl_80363400-t*lbl_80363408));
        u = lbl_80363410*t;
        v = t*lbl_80363418-w*lbl_80363420;
        t1 = u+v;
        *(1+(int*)&t1) = 0;
        t2 = v-(t1-u);
    } else {
        double ss,s2,s_h,s_l,t_h,t_l;
        n = 0;
        if(ix<0x00100000)
            {ax *= lbl_80363428; n -= 53; ix = *(int*)&ax; }
        n += ((ix)>>20)-0x3ff;
        j = ix&0x000fffff;
        ix = j|0x3ff00000;
        if(j<=0x3988E) k=0;
        else if(j<0xBB67A) k=1;
        else {k=0;n+=1;ix -= 0x00100000;}
        *(int*)&ax = ix;

        u = ax-tab->bp[k];
        v = lbl_803633D8/(ax+tab->bp[k]);
        ss = u*v;
        s_h = ss;
        *(1+(int*)&s_h) = 0;
        t_h = lbl_803633E0;
        *(int*)&t_h = ((ix>>1)|0x20000000)+0x00080000+(k<<18);
        t_l = ax - (t_h-tab->bp[k]);
        s_l = v*((u-s_h*t_h)-s_h*t_l);
        s2 = ss*ss;
        r = s2*s2*(lbl_80363430+s2*(lbl_80363438+s2*(lbl_80363440+s2*(lbl_80363448+s2*(lbl_80363450+s2*lbl_80363458)))));
        r += s_l*(s_h+ss);
        s2 = s_h*s_h;
        t_h = lbl_803633F0+s2+r;
        *(1+(int*)&t_h) = 0;
        t_l = r-((t_h-lbl_803633F0)-s2);
        u = s_h*t_h;
        v = s_l*t_h+t_l*ss;
        p_h = u+v;
        *(1+(int*)&p_h) = 0;
        p_l = v-(p_h-u);
        z_h = lbl_80363460*p_h;
        z_l = lbl_80363468*p_h+p_l*lbl_80363470+tab->dp_l[k];
        t = (double)n;
        t1 = (((z_h+z_l)+tab->dp_h[k])+t);
        *(1+(int*)&t1) = 0;
        t2 = z_l-(((t1-t)-tab->dp_h[k])-z_h);
    }

    s = lbl_803633D8;
    if((n|(yisint-1))==0)
        s = lbl_80363478;

    y1 = y;
    *(1+(int*)&y1) = 0;
    p_l = (y-y1)*t1+y*t2;
    p_h = y1*t1;
    z = p_l+p_h;
    j = *(int*)&z;
    i = *(1+(int*)&z);
    if (j>=0x40900000) {
        if(((j-0x40900000)|i)!=0)
            return s*lbl_80363480*lbl_80363480;
        else {
            if(p_l+lbl_80363488>z-p_h) return s*lbl_80363480*lbl_80363480;
        }
    } else if((j&0x7fffffff)>=0x4090cc00 ) {
        if(((j-0xc090cc00)|i)!=0)
            return s*lbl_80363490*lbl_80363490;
        else {
            if(p_l<=z-p_h) return s*lbl_80363490*lbl_80363490;
        }
    }
    i = j&0x7fffffff;
    k = (i>>20)-0x3ff;
    n = 0;
    if(i>0x3fe00000) {
        n = j+(0x00100000>>(k+1));
        k = ((n&0x7fffffff)>>20)-0x3ff;
        t = lbl_803633E0;
        *(int*)&t = (n&~(0x000fffff>>k));
        n = ((n&0x000fffff)|0x00100000)>>(20-k);
        if(j<0) n = -n;
        p_h -= t;
    }
    t = p_l+p_h;
    *(1+(int*)&t) = 0;
    u = t*lbl_80363498;
    v = (p_l-(t-p_h))*lbl_803634A0+t*lbl_803634A8;
    z = u+v;
    w = v-(z-u);
    t = z*z;
    t1 = z - t*(lbl_803634B0+t*(lbl_803634B8+t*(lbl_803634C0+t*(lbl_803634C8+t*lbl_803634D0))));
    r = (z*t1)/(t1-lbl_803634D8)-(w+z*w);
    z = lbl_803633D8-(r-z);
    j = *(int*)&z;
    j += (n<<20);
    if((j>>20)<=0) z = fn_800F004C(z,-n);
    else *(int*)&z += (n<<20);
    return s*z;
}
