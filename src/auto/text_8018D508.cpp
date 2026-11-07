// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

// fn_8018D508: NonMatching draft, registers only (SDIFF 0): ix/iy/iz FP coloring (f2/f3/f4 vs f4/f2/f1); see hm-work/wMI/STATUS.txt
struct V { f32 x, y, z; };
struct Seg { V a, b; };
struct R { u32 f0; Seg s; V *pa; V *pb; Seg s2; V a60; V b72; };
struct FT { u8 pad[400]; void (*f400)(void *, V *, V *); };
extern FT lbl_803286D0;
extern f32 lbl_80364AA8;
extern u32 lbl_80364AAC;
struct S48 { u8 pad[20]; void *f20; };
struct Sc { u8 pad[40]; V s; };
struct X144 { u8 pad[20]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void *get(); };
struct O { u8 pad[48]; S48 *f48; u8 pad52[68]; Sc *f120; u8 pad124[20]; X144 *f144; };
extern O *lbl_8035AE40;
void fn_80190A24(O *, R *, void *);
void fn_80104870(S48 *);
void fn_800FBC6C(void *, R *);
void fn_8018D508(O *o, R *r, void *x) {
    void *g = o->f144->get();
    if (!g) {
        fn_80190A24(o, r, x);
        return;
    }
    if (o->f48) {
        fn_80104870(o->f48);
        void *m = o->f48->f20;
        lbl_803286D0.f400(m, r->pa, &r->a60);
        lbl_803286D0.f400(m, r->pb, &r->b72);
        lbl_803286D0.f400(m, &r->s.a, &r->s2.a);
        lbl_803286D0.f400(m, &r->s.b, &r->s2.b);
        r->f0 |= 9;
    } else if (r->f0 & 8) {
        r->a60 = *r->pa;
        r->b72 = *r->pb;
        r->s2.a.x = r->s.a.x;
        r->s2.a.y = r->s.a.y;
        r->s2.a.z = r->s.a.z;
        r->s2.b.x = r->s.b.x;
        r->s2.b.y = r->s.b.y;
        r->s2.b.z = r->s.b.z;
        r->f0 &= ~8;
        r->f0 |= lbl_80364AAC;
    }
    Sc *sc = o->f120;
    if (sc) {
        f32 iz, iy, ix;
        ix = sc->s.x;
        iy = sc->s.y;
        iz = sc->s.z;
        ix = lbl_80364AA8 / ix;
        iy = lbl_80364AA8 / iy;
        iz = lbl_80364AA8 / iz;
        r->a60.x *= ix; r->a60.y *= iy; r->a60.z *= iz;
        r->b72.x *= ix; r->b72.y *= iy; r->b72.z *= iz;
        r->s2.a.x *= ix; r->s2.a.y *= iy; r->s2.a.z *= iz;
        r->s2.b.x *= ix; r->s2.b.y *= iy; r->s2.b.z *= iz;
        r->f0 |= 9;
    }
    lbl_8035AE40 = o;
    fn_800FBC6C(g, r);
}

}
