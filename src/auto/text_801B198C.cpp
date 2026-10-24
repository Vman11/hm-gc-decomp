// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

struct Rc { f32 x0, y0, x1, y1; };
class Ch { public: u8 p[128];
    virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6();
    virtual void draw(f32, void *, void *, void *, Rc *); };
class Lb { public:
#define V(n) virtual void n();
    V(l0) V(l1) V(l2) V(l3) V(l4) V(l5) V(l6) V(l7) V(l8) V(l9) V(l10) V(l11) V(l12) V(l13) V(l14) V(l15) V(l16) V(l17) V(l18) V(l19)
    V(l20) V(l21) V(l22) V(l23) V(l24) V(l25) V(l26) V(l27) V(l28) V(l29) V(l30) V(l31) V(l32) V(l33) V(l34) V(l35) V(l36) V(l37) V(l38) V(l39)
    V(l40) V(l41) V(l42) V(l43) V(l44) V(l45) V(l46)
    virtual int draw(f32, void *, void *, void *, void *, Rc *); };
struct Nd { Lb *f0; u8 p[4]; Nd *f8; };
struct It { u8 p[72]; Rc f72; };
class Tx { public: u8 p0[12]; Rc *f12; Rc *f16; u32 *f20; u8 p24[28];
    V(t0) V(t1) V(t2) V(t3) V(t4)
    virtual void draw(f32, void *, Rc *, void *, u32, u32, u32, Rc *, s32, s32, u32); };
struct Cu { u8 p[4]; u32 f4; u32 f8; };
struct W { u8 p0[4]; s32 f4[4]; It *f20[4]; f32 f36[4]; u8 p52[52]; u32 f104; u32 f108; Tx *f112; u8 p116[20]; Nd *f136; u8 p140[0];
};
struct WX { u8 p0[72]; Rc f72; u8 p88[16]; u32 f104; u32 f108; Tx *f112; u8 p116[20]; Nd *f136; u8 p140[168]; Ch *f308; Ch *f312;
    u8 p316[8]; u32 f324; u32 f328; u8 p332[36]; u32 f368; u32 f372; u32 f376; u8 p380[4]; u32 f384; u8 p388[8]; Cu *f396; u8 p400[4]; Ch *f404; u8 p408[4]; u32 f412; };
extern "C" {
extern f32 lbl_803596E0[4];
void fn_8010069C(Rc *, Rc *);
u32 fn_800FA8F4(Cu *);
}
extern "C" void fn_801B198C(WX *w, void *a, void *b, void *c, Rc *clip, f32 t) {
    Nd *n;
    Cu *u;
    s32 lo, hi;
    s32 r;
    Rc *cl;
    n = w->f136;
    r = 0;
    for (; n; n = n->f8)
        if (!n->f0->draw(t, w, a, b, c, clip)) r = 1;
    if (r) return;
    {
        Rc s;
        Rc R;
        u32 i;
        f32 k = lbl_803596E0[0];
        cl = clip;
        lo = 0;
        hi = 0;
        R.x1 = k; R.y1 = k; R.x0 = -k; R.y0 = -k;
        if (clip) fn_8010069C(&R, clip);
        for (i = 0, n = (Nd *)w; i < 4; i++, n = (Nd *)((u8 *)n + 4)) {
#define p ((W *)n)
            if (p->f4[0] == 0x8000) {
                It *it = p->f20[0];
                Rc q;
                f32 m;
                q = it->f72;
                q.y0 += p->f36[0]; q.x0 += p->f36[0]; q.y1 -= p->f36[0]; q.x1 -= p->f36[0];
                fn_8010069C(&R, &q);
                cl = &R;
            }
        }
#undef p
        if (w->f108 & 1) {
            Tx *x = w->f112;
            if (!x) return;
            s = x->f12[w->f376];
            s.x1 = s.x1 + (w->f72.x1 - w->f72.x0);
            s.y1 = s.y1 + (w->f72.y1 - w->f72.y0);
            if (w->f396) w->f396->f4 = w->f384;
            {
                u32 j = w->f376;
                x = w->f112;
                x->f20[j] = 1;
                x->f16[j] = s;
            }
            s.x0 += w->f72.x0; s.x1 += w->f72.x0; s.y0 += w->f72.y0; s.y1 += w->f72.y0;
            if (cl) fn_8010069C(&s, cl);
            if (w->f368 != w->f372 && w->f412) {
                if (w->f368 > w->f372) {
                    lo = w->f372 - w->f384;
                    hi = w->f368 - 1 - w->f384;
                } else {
                    lo = w->f368 - w->f384;
                    hi = w->f372 - 1 - w->f384;
                }
                if (lo < 0) lo = 0;
                if (hi < 0) hi = 0;
            }
            w->f112->draw(t, a, &w->f72, c, w->f328, w->f324, w->f104, cl, lo, hi, w->f412);
            {
                u = w->f396;
                if (u) {
                u->f4 = 0;
                u->f8 = fn_800FA8F4(u);
            }}
            if (w->f404) w->f404->draw(t, a, b, c, &s);
            if (w->f312) w->f312->draw(t, a, b, c, cl);
        }
        if (w->f308) w->f308->draw(t, a, b, c, clip);
    }
}

} /* extern "C" */
