// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C { u8 r, g, b, a; };
struct K { u32 w[4]; };
struct R { u8 pad[6448]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void draw(void *, int, int); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9(); virtual void b10(); virtual void b11(); virtual void b12(); virtual void b13(); virtual void b14(); virtual void b15(); virtual void b16(); virtual void b17(); virtual void b18(); virtual void b19(); virtual void b20(); virtual void b21(); virtual void b22(); virtual void b23(); virtual void b24(); virtual void b25(); virtual void b26(); virtual void b27(); virtual void b28(); virtual void b29(); virtual void b30(); virtual void b31(); virtual void b32(); virtual void b33(); virtual void b34(); virtual void b35(); virtual void b36(); virtual void b37(); virtual void b38(); virtual void b39(); virtual void b40(); virtual void b41(); virtual void b42(); virtual void b43(); virtual void b44(); virtual void b45(); virtual void b46(); virtual void b47(); virtual void b48(); virtual void b49(); virtual void b50(); virtual void b51(); virtual void b52(); virtual void b53(); virtual void b54(); virtual void b55(); virtual void b56(); virtual void b57(); virtual void b58(); virtual void end(); virtual void begin(C *); };
struct D { u8 pad[64]; K k; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void render(R *); };
struct G { u8 pad[48]; virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4(); virtual void g5(); virtual void g6(); virtual void g7(); virtual void set(int); };
struct G1DC { u8 pad[11340]; G *f11340; };
extern G1DC *lbl_8035A1DC;
void fn_80121E1C(K *);
void fn_80121DC8(K *, C *);
struct T { u8 pad[4]; void *f4; u8 pad8[16]; R *f24; D *f28; D *f32; u8 pad36[8]; D *f44; u8 pad48[52]; u32 f100; u8 pad104[4]; u32 f108; };
void fn_8003B3E8(T *t) {
    C bg;
    bg.r = 0; bg.g = 0; bg.b = 0; bg.a = 255;
    t->f24->begin(&bg);
    f32 v = 0.01f * (255.0f * (f32)(int)(t->f100 * 100 / t->f108));
    if (v > 255.0f) v = 255.0f;
    K k1;
    K k2;
    fn_80121E1C(&k1);
    fn_80121E1C(&k2);
    C y;
    C x;
    u8 c = (u32)(255.0f - v);
    x.r = c; x.g = c; x.b = c; x.a = c;
    c = (u32)v;
    y.r = c; y.g = c; y.b = c; y.a = c;
    fn_80121DC8(&k1, &y);
    fn_80121DC8(&k2, &x);
    t->f28->k = k1;
    t->f24->draw(t->f4, 7, 0);
    t->f28->k = k2;
    t->f28->render(t->f24);
    t->f32->k = k1;
    t->f32->render(t->f24);
    t->f44->render(t->f24);
    t->f24->end();
    lbl_8035A1DC->f11340->set(0);
}

} /* extern "C" */
