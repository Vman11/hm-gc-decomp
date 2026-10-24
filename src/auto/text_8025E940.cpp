// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

class Vv { public: u8 p[8]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void *ptr(int); };
struct Ent { Vv *f0; };
struct Cfg;
struct GG { u8 p[12]; Cfg *f12; };
struct O { f32 *f0, *f4, *f8; u32 f12; f32 *f16; f32 *f20, *f24, *f28; u32 f32_; f32 *f36; void *f40, *f44, *f48, *f52, *f56, *f60; };
extern "C" {
extern GG *lbl_8035B754;
extern char lbl_80366A04[8], lbl_80366A08[8], lbl_80366A10[8], lbl_80366A18[8];
extern char lbl_802A9CD8[], lbl_802A9CE4[];
void *fn_80110444(Cfg *, char *, int);
Ent *fn_8010FEDC(Cfg *, void *, char *, int);
}
inline Ent *Look(Cfg *loc, void *sec, Cfg *g, void *gs, char *n) {
    Ent *r = 0;
    if (sec) r = fn_8010FEDC(loc, sec, n, 0);
    if (!r) r = fn_8010FEDC(g, gs, n, 1);
    return r;
}
inline void *Get(Cfg *loc, void *sec, Cfg *g, void *gs, char *n) { return Look(loc, sec, g, gs, n)->f0->ptr(0); }

extern "C" void fn_8025E940(O *o, char *a2, char *a3, char *a4, Cfg *loc, char *n2) {
    Cfg *g = lbl_8035B754->f12;
    void *gs = fn_80110444(g, a2, 0);
    void *sec = 0;
    if (loc && n2) sec = fn_8010FEDC(loc, n2, a2, 0);
    o->f40 = Get(loc, sec, g, gs, lbl_80366A04);
    o->f56 = Get(loc, sec, g, gs, lbl_80366A08);
    o->f44 = Get(loc, sec, g, gs, lbl_80366A10);
    o->f48 = Get(loc, sec, g, gs, lbl_802A9CD8);
    o->f52 = Get(loc, sec, g, gs, lbl_802A9CE4);
    {
        Ent *r = Look(loc, sec, g, gs, lbl_80366A18);
        if (r) o->f60 = r->f0->ptr(0);
        else o->f60 = 0;
    }
    {
        Cfg *g2 = lbl_8035B754->f12;
        void *s = 0;
        f32 *p;
        if (loc && sec) s = sec;
        p = (f32 *)Look(loc, s, g2, gs, a3)->f0->ptr(0);
        o->f0 = p; o->f4 = p + 1; o->f8 = p + 2; o->f16 = p + 3;
    }
    {
        Cfg *g2 = lbl_8035B754->f12;
        void *s = 0;
        f32 *p;
        if (loc && sec) s = sec;
        p = (f32 *)Look(loc, s, g2, gs, a4)->f0->ptr(0);
        o->f20 = p; o->f24 = p + 1; o->f28 = p + 2; o->f36 = p + 3;
    }
}

} /* extern "C" */
