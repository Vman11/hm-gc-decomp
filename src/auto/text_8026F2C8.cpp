// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

// fn_8026F2C8: NonMatching draft (DIFF 50, see hm-work/wA_8018D508 + wDE/wH): left: stb c.* sink below the float math in both blocks (target keeps them first) + a/b int->float temp slot order; .sdata2 0x80366E30.. ownership unresolved.
struct C3 { u8 r, g, b; };
struct O { u8 pad[48]; f32 f48; f32 f52; };
struct G { u8 pad[20]; f32 f20; };
extern G *lbl_8035B488;
struct T { u8 pad[8]; O *f8; O *f12; f32 f16; };
void fn_801BD2C4(O *, int, C3 *);
void fn_801BD20C(O *, u32, C3 *);
extern f32 lbl_80366E30;
extern f32 lbl_80366E34;
extern f32 lbl_80366E38;
extern f32 lbl_80366E3C;
extern f32 lbl_80366E40;
extern f32 lbl_80366E44;
extern f32 lbl_80366E48;
extern f32 lbl_80366E4C;
extern f32 lbl_80366E50;
extern f32 lbl_80366E54;
static inline void set(O *o, f32 a, f32 b) { o->f48 = a; o->f52 = b; }
#pragma opt_propagation off
void fn_8026F2C8(T *t) {
    f32 dt = lbl_8035B488->f20;
    C3 c;
    u32 i;
    int v;
    if (t->f8) {
        fn_801BD2C4(t->f8, 0, &c);
        t->f16 += lbl_80366E30 * dt;
        if (t->f16 > lbl_80366E34) t->f16 = t->f16 - lbl_80366E34;
        if (t->f16 > lbl_80366E38) v = (int)(lbl_80366E34 - t->f16);
        else v = (int)t->f16;
        c.r = c.g = c.b = v;
        f32 a = (lbl_80366E40 * (f32)v + lbl_80366E3C) * lbl_80366E4C;
        f32 b = (lbl_80366E48 * (f32)v + lbl_80366E44) * lbl_80366E4C;
        O *o = t->f8;
        o->f48 = a;
        o->f52 = b;
        for (i = 0; i < 4; i++) {
            c.r = c.g = c.b = v;
            fn_801BD20C(t->f8, i, &c);
        }
    }
    if (t->f12) {
        fn_801BD2C4(t->f12, 0, &c);
        t->f16 += lbl_80366E30 * dt;
        if (t->f16 > lbl_80366E34) t->f16 = t->f16 - lbl_80366E34;
        if (t->f16 > lbl_80366E38) v = (int)(lbl_80366E34 - t->f16);
        else v = (int)t->f16;
        c.r = c.g = c.b = v;
        f32 s = lbl_80366E54 * ((f32)v / lbl_80366E34) + lbl_80366E50;
        set(t->f12, s, s);
        for (i = 0; i < 4; i++) {
            c.r = c.g = c.b = v;
            fn_801BD20C(t->f12, i, &c);
        }
    }
}

}
