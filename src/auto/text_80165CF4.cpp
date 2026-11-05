#include "common.h"
extern "C" {
struct Desc { u8 d[28]; };
struct VL { f32 *p; u32 stride; u8 pad[108]; };
struct M { u8 pad_[12]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void unlock(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void setup(int, int, Desc *); virtual void lock(VL *, int); };
struct Tex { u8 pad[28]; u16 w, h; };
struct O { u32 f0; Tex *f4; u32 f8; u32 f12; u8 pad16[6448 - 16]; virtual void s0(); virtual void s1(); virtual void clear(); u32 f6452; u32 f6456; u8 pad6460[4]; M m; };
extern f32 lbl_80364684;
extern f32 lbl_803646C0;
void fn_8014CA08(Desc *);
void fn_8014C8C8(Desc *, int, int, int);
void fn_8016CBE8(u32, O *);
void fn_80165CF4(O *o, u32 a, Tex *b, u32 c) {
    Desc d;
    VL v;
    f32 *p;
    fn_8014CA08(&d);
    if (o->f12 & 1) o->clear();
    o->f6452 = a;
    o->f0 = a;
    o->f4 = b;
    o->f8 = c;
    o->f6456 = o->f6452 + 8004;
    fn_8016CBE8(o->f6452, o);
    fn_8014C8C8(&d, 128, 0, 0);
    o->m.setup(4, 1, &d);
    o->m.lock(&v, 8);
    p = v.p;
    p[0] = lbl_80364684; p[1] = lbl_80364684; p[2] = lbl_803646C0;
    v.p = p = (f32 *)((u8 *)v.p + v.stride);
    { u32 w = o->f4->w; p[0] = w; p[1] = lbl_80364684; p[2] = lbl_803646C0; }
    v.p = p = (f32 *)((u8 *)v.p + v.stride);
    { u32 h = o->f4->h; p[0] = lbl_80364684; p[1] = h; p[2] = lbl_803646C0; }
    v.p = p = (f32 *)((u8 *)v.p + v.stride);
    { Tex *t = o->f4; u32 w = t->w; u32 h = t->h; p[0] = w; p[1] = h; p[2] = lbl_803646C0; }
    o->m.unlock();
    o->f12 = 17;
}
}
