#include "common.h"

extern "C" {

struct V5A { f32 x, y, z; };
struct B5A {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void Place(V5A *, f32 *, f32 *, f32 *, int);
};
extern void *lbl_8035B65C;
extern char lbl_80297D64[];
extern f32 lbl_8035F0C0;
extern f32 lbl_8035F1C8;
extern f32 lbl_8035F1BC;
void __ct__9C80253F24Fiiii(void *, char *, int, int, int);
#define F(o) (*(f32 *)(p + (o)))
#define I(o) (*(s32 *)(p + (o)))
void fn_8006B5A4(u8 *p) {
    V5A v;
    __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_80297D64, 0, 0, 0);
    I(0x5b0) = 0;
    F(0x5b4) = lbl_8035F0C0; F(0x5b8) = lbl_8035F0C0; F(0x5bc) = lbl_8035F0C0;
    F(0x5c0) = lbl_8035F0C0; F(0x5c4) = lbl_8035F0C0; F(0x5c8) = lbl_8035F0C0;
    F(0x5cc) = lbl_8035F1C8;
    F(0x5d0) = lbl_8035F0C0; F(0x5d4) = lbl_8035F0C0; F(0x5d8) = lbl_8035F0C0;
    I(0x338) = 0; I(0x5dc) = 0; I(0x5e0) = 0;
    F(0x500) = lbl_8035F0C0; F(0x504) = lbl_8035F0C0;
    *(volatile f32 *)&v.x = *(volatile f32 *)&F(0x57c);
    *(volatile f32 *)&v.y = *(volatile f32 *)&F(0x580);
    f32 z = *(volatile f32 *)&F(0x584);
    *(volatile f32 *)&v.z = z;
    v.z = z + *(volatile f32 *)&lbl_8035F1BC;
    ((B5A *)p)->Place(&v, &F(0x588), &F(0x594), &F(0x5a0), 0);
    F(0x118) = lbl_8035F0C0; F(0x11c) = lbl_8035F0C0; F(0x120) = lbl_8035F0C0;
    F(0x154) = lbl_8035F0C0;
}

} /* extern "C" */
