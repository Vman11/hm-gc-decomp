#include "common.h"
#pragma use_lmw_stmw on
static const int lbl_8029C730[4] = {2, 3, 4, 6};
static const double lbl_8029C740[8] = {1.570796251296997, 7.549789415861596e-08, 5.390302529957765e-15, 3.282003415807913e-22, 1.270655753080676e-29, 1.2293330898111133e-36, 2.7337005381646456e-44, 2.1674168387780482e-51};
static const double lbl_80363588 = 0.0;
static const double lbl_80363590 = 5.960464477539063e-08;
static const double lbl_80363598 = 16777216.0;
static const double lbl_803635A0 = 8.0;
static const double lbl_803635A8 = 0.125;
static const double lbl_803635B0 = 0.5;
static const double lbl_803635B8 = 1.0;
double fn_800F004C(double, int);
double fn_800EFE78(double x);
double fn_800F004C(double x, int n);

double fn_800EFE78(double x);
double fn_800F004C(double x, int n);
int fn_800EE918(double *x, double *y, int e0, int nx, int prec, const int *ipio2)
{
    int jz,jx,jv,jp,jk,carry,n,iq[20],i,j,k,m,q0,ih;
    double z,fw,f[20],fq[20],q[20];

    jk = lbl_8029C730[prec];
    jp = jk;

    jx = nx-1;
    jv = (e0-3)/24; if(jv<0) jv=0;
    q0 = e0-24*(jv+1);

    j = jv-jx; m = jx+jk;
    for(i=0;i<=m;i++,j++) f[i] = (j<0)? 0.0 : (double) ipio2[j];

    for (i=0;i<=jk;i++) {
        for(j=0,fw=0.0;j<=jx;j++) fw += x[j]*f[jx+i-j]; q[i] = fw;
    }

    jz = jk;
recompute:
    for(i=0,j=jz,z=q[jz];j>0;i++,j--) {
        fw    =  (double)((int)(5.96046447753906250000e-08* z));
        iq[i] =  (int)(z-1.67772160000000000000e+07*fw);
        z     =  q[j-1]+fw;
    }

    z  = fn_800F004C(z,q0);
    z -= 8.0*fn_800EFE78(z*0.125);
    n  = (int) z;
    z -= (double)n;
    ih = 0;
    if(q0>0) {
        i  = (iq[jz-1]>>(24-q0)); n += i;
        iq[jz-1] -= i<<(24-q0);
        ih = iq[jz-1]>>(23-q0);
    }
    else if(q0==0) ih = iq[jz-1]>>23;
    else if(z>=0.5) ih=2;

    if(ih>0) {
        n += 1; carry = 0;
        for(i=0;i<jz ;i++) {
            j = iq[i];
            if(carry==0) {
                if(j!=0) {
                    carry = 1; iq[i] = 0x1000000- j;
                }
            } else  iq[i] = 0xffffff - j;
        }
        if(q0>0) {
            switch(q0) {
            case 1:
                iq[jz-1] &= 0x7fffff; break;
            case 2:
                iq[jz-1] &= 0x3fffff; break;
            }
        }
        if(ih==2) {
            z = 1.0 - z;
            if(carry!=0) z -= fn_800F004C(1.0,q0);
        }
    }

    if(z==0.0) {
        j = 0;
        for (i=jz-1;i>=jk;i--) j |= iq[i];
        if(j==0) {
            for(k=1;iq[jk-k]==0;k++);

            for(i=jz+1;i<=jz+k;i++) {
                f[jx+i] = (double) ipio2[jv+i];
                for(j=0,fw=0.0;j<=jx;j++) fw += x[j]*f[jx+i-j];
                q[i] = fw;
            }
            jz += k;
            goto recompute;
        }
    }

    if(z==0.0) {
        jz -= 1; q0 -= 24;
        while(iq[jz]==0) { jz--; q0-=24;}
    } else {
        z = fn_800F004C(z,-q0);
        if(z>=1.67772160000000000000e+07) {
            fw = (double)((int)(5.96046447753906250000e-08*z));
            iq[jz] = (int)(z-1.67772160000000000000e+07*fw);
            jz += 1; q0 += 24;
            iq[jz] = (int) fw;
        } else iq[jz] = (int) z ;
    }

    fw = fn_800F004C(1.0,q0);
    for(i=jz;i>=0;i--) {
        q[i] = fw*(double)iq[i]; fw*=5.96046447753906250000e-08;
    }

    for(i=jz;i>=0;i--) {
        for(fw=0.0,k=0;k<=jp&&k<=jz-i;k++) fw += lbl_8029C740[k]*q[i+k];
        fq[jz-i] = fw;
    }

    switch(prec) {
        case 0:
            fw = 0.0;
            for (i=jz;i>=0;i--) fw += fq[i];
            y[0] = (ih==0)? fw: -fw;
            break;
        case 1:
        case 2:
            fw = 0.0;
            for (i=jz;i>=0;i--) fw += fq[i];
            y[0] = (ih==0)? fw: -fw;
            fw = fq[0]-fw;
            for (i=1;i<=jz;i++) fw += fq[i];
            y[1] = (ih==0)? fw: -fw;
            break;
        case 3:
            for (i=jz;i>0;i--) {
                fw      = fq[i-1]+fq[i];
                fq[i]  += fq[i-1]-fw;
                fq[i-1] = fw;
            }
            for (i=jz;i>1;i--) {
                fw      = fq[i-1]+fq[i];
                fq[i]  += fq[i-1]-fw;
                fq[i-1] = fw;
            }
            for (fw=0.0,i=jz;i>=2;i--) fw += fq[i];
            if(ih==0) {
                y[0] =  fq[0]; y[1] =  fq[1]; y[2] =  fw;
            } else {
                y[0] = -fq[0]; y[1] = -fq[1]; y[2] = -fw;
            }
    }
    return n&7;
}
