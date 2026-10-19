/* Functions from 0x80151710 to 0x80151958, found by decomp-toolkit. */
#include "common.h"

void fn_80151710(void *arg0, void *arg1) {
extern f32 lbl_8036453C, lbl_80364540, lbl_80364544;
f32 normal[3];
f32 x,y,z,xx,yy,zz,d;
normal[0]=M2C_FIELD(arg1,f32 *,0);
normal[1]=M2C_FIELD(arg1,f32 *,4);
normal[2]=M2C_FIELD(arg1,f32 *,8);
x=normal[0]; y=normal[1]; z=normal[2];
xx=x*lbl_80364540;
yy=y*lbl_80364540;
M2C_FIELD(arg0,f32 *,0)=-(xx*x-lbl_8036453C);
zz=z*lbl_80364540;
M2C_FIELD(arg0,f32 *,0x10)=-(xx*y);
M2C_FIELD(arg0,f32 *,0x20)=-(xx*z);
M2C_FIELD(arg0,f32 *,0x30)=lbl_80364544;
d=-M2C_FIELD(arg1,f32 *,0xC);
M2C_FIELD(arg0,f32 *,4)=-(yy*x);
M2C_FIELD(arg0,f32 *,0x14)=-(yy*y-lbl_8036453C);
M2C_FIELD(arg0,f32 *,0x24)=-(yy*z);
M2C_FIELD(arg0,f32 *,0x34)=lbl_80364544;
M2C_FIELD(arg0,f32 *,8)=-(zz*x);
M2C_FIELD(arg0,f32 *,0x18)=-(zz*y);
M2C_FIELD(arg0,f32 *,0x28)=-(zz*z-lbl_8036453C);
M2C_FIELD(arg0,f32 *,0x38)=lbl_80364544;
M2C_FIELD(arg0,f32 *,0xC)=xx*d;
M2C_FIELD(arg0,f32 *,0x1C)=yy*d;
M2C_FIELD(arg0,f32 *,0x2C)=zz*d;
M2C_FIELD(arg0,f32 *,0x3C)=lbl_8036453C;
}

void fn_801517E4(void *arg0, f32 farg0, f32 farg1) {
    extern f32 lbl_8036453C;
    extern f32 lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_8036453C;
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x10) = farg0;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_8036453C;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x20) = farg1;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_8036453C;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_8036453C;
}

void fn_80151860(void *arg0, f32 farg0, f32 farg1) {
    extern f32 lbl_8036453C;
    extern f32 lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_8036453C;
    M2C_FIELD(arg0, f32 *, 4) = farg0;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_8036453C;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x24) = farg1;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_8036453C;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_8036453C;
}

void fn_801518DC(void *arg0, f32 farg0, f32 farg1) {
    extern f32 lbl_8036453C;
    extern f32 lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_8036453C;
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 8) = farg0;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_8036453C;
    M2C_FIELD(arg0, f32 *, 0x18) = farg1;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_8036453C;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_8036453C;
}

