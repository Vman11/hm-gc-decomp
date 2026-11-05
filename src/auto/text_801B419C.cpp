// fn_801B419C: NonMatching (DIFF 8, SDIFF 4): only the clip-rect init stores are scheduled ahead of fneg y / fmr w (target: after). From wX/b4v1.
#include "common.h"
extern "C" {
struct R { f32 x0, y0, x1, y1; };
struct A { u8 pad0_[72]; R rect; u8 pad_[128-88]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void v69(A*); virtual void s70(); virtual void s71(); virtual void v72(int); virtual void v73(int); };
struct N { virtual int v0(int); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void v51(A*); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { N *obj; int on; Node *next; };
struct E { int a; int on; int c; };
void fn_801B4654(A *);
void fn_801B3EB0(A *);
static inline bool isB(A *q) { bool r = false; u16 t = F(q,0x144,u32); if (t==8||t==4||t==32||t==128||t==512) r = true; return r; }
static inline int sel(A *p, int i) { if (F(p,0x1b8,A**)) return isB(F(p,0x1b8,A**)[i]); return F(p,0x1bc,E*)[i].on; }
static inline void notify(A *p) { for (Node *n = F(p,0x88,Node*); n; n = n->next) if (n->obj->v0(7) && n->on) n->obj->v51(p); }
static inline void desel(A *p) {
    u32 i;
    if (F(p,0x1bc,E*)) {
        for (i = 0; i < F(p,0x188,u32); i++) if (sel(p, i)) F(p,0x1bc,E*)[i].on = 0;
    } else if (F(p,0x1b8,A**)) {
        for (i = 0; i < F(p,0x188,u32); i++) if (sel(p, i)) F(p,0x1b8,A**)[i]->v73(1);
    }
}

struct E2 { void *a; int on; int c; };
extern volatile f32 lbl_80364F40;
extern f32 lbl_803596E0[];
extern f32 lbl_8035AF84;
int fn_801CCDDC(void *, u32 *, A **, void *);
int fn_801CCB84(void *, u32 *, A **, void *);
void fn_8012D0A4(f32, f32, f32, void *, R *, void *, f32 *, void *, u32);
void fn_8010069C(R *, R *);
struct W { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void draw(f32, u32, u32, u32, R *); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void setRect(R *); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void upd(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69(); virtual void s70(); virtual void s71(); virtual void on(int); virtual void off(int); };
struct PR { u8 pad_[72]; R rect; };
struct D { u8 pad_[52]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void draw(f32, u32, void *, u32, u32, u32, u32, R *, int, int, int); };
static inline void calcRect(A *p, u32 idx, R *r) {
    volatile u32 n;
    A *o;
    f32 sc[2];
    n = 0;
    { f32 z = lbl_80364F40; sc[0] = z; sc[1] = z; }
    fn_801CCDDC(F(F(p,0x1c4,u8*),0x70,void*), (u32 *)&n, &o, F(F(p,0x1c4,u8*),0x68,void*));
    if (F(o,0x24,void*) && F(p,0x1bc,E2*)[idx].a) {
        fn_8012D0A4(lbl_803596E0[0], F(o,0x28,f32), lbl_8035AF84, F(o,0x24,void*), r, F(p,0x1bc,E2*)[idx].a, sc, (u8 *)o + 0x30, 17);
    }
    if (F(p,0x17c,int)) r->y1 = r->y0 + F(p,0x1ac,f32);
    r->x1 = r->x0 + (F(p,0x60,f32) - F(p,0x58,f32));
}

static inline void inset(R *r, f32 d) { r->x0 += d; r->y0 += d; r->x1 -= d; r->y1 -= d; }
void fn_801B419C(A *p, f32 al, u32 a, u32 b, u32 c, R *cl) {
    f32 y = -F(p,0x1a0,f32);
    f32 h = lbl_80364F40;
    f32 w = h;
    R r __attribute__((aligned(8)));
    char clip_[9];
    u8 *q;
    R *cp;
    u32 i;
    { f32 k = lbl_803596E0[0];
    ((f32 *)clip_)[2] = k;
    ((f32 *)clip_)[0] = -k;
    ((f32 *)clip_)[1] = -k;
    ((f32 *)clip_)[3] = k; }
    cp = cl;
    if (cl) fn_8010069C((R *)clip_, cl);
    for (i = 0, q = (u8 *)p; i < 4; i++, q += 4) {
        if (F(q,4,int) == 0x8000) {
            r = F(q,20,A*)->rect;
            r.y0 += F(q,36,f32);
            r.x0 += F(q,36,f32);
            r.y1 -= F(q,36,f32);
            r.x1 -= F(q,36,f32);
            fn_8010069C((R *)clip_, &r);
            cp = (R *)clip_;
        }
    }
    if (F(p,0x6c,u32) & 1) {
        if (!F(p,0x70,D*)) return;
        F(p,0x70,D*)->draw(al, a, &p->rect, c, F(p,0x148,u32), F(p,0x144,u32), F(p,0x68,u32), cp, 0, 0, 0);
        if (F(p,0x138,W*)) F(p,0x138,W*)->draw(al, a, b, c, cp);
        fn_8010069C((R *)clip_, &p->rect);
        for (i = F(p,0x1c8,u32); i < F(p,0x188,u32); i++) {
            if (F(p,0x1bc,E*)) {
                calcRect(p, i, &r);
                h = r.y1 - r.y0;
                w = r.x1 - *(volatile f32 *)&r.x0;
            } else if (F(p,0x1b8,A**)) {
                A *it = F(p,0x1b8,A**)[i];
                h = F(it,0x64,f32) - F(it,0x5c,f32);
                w = F(it,0x60,f32) - F(it,0x58,f32);
            }
            r.x0 = F(p,72,f32) - F(p,0x19c,f32);
            r.x1 = r.x0 + w;
            r.y0 = F(p,76,f32) + y;
            y += h;
            r.y1 = r.y0 + h;
            if (F(p,0x1bc,E*)) {
                u32 n2;
                A *o2;
                F(p,0x1c4,W*)->setRect(&r);
                F(p,0x1c4,W*)->upd();
                n2 = 0;
                fn_801CCB84(F(F(p,0x1c4,u8*),0x70,void*), &n2, &o2, F(F(p,0x1c4,u8*),0x68,void*));
                F(o2,0x24,void*) = F(p,0x1bc,E2*)[i].a;
                if (F(p,0x1bc,E2*)[i].on) F(p,0x1c4,W*)->on(0);
                else F(p,0x1c4,W*)->off(0);
                F(p,0x1c4,W*)->draw(al, a, b, c, (R *)clip_);
            } else if (F(p,0x1b8,A**)) {
                ((W *)F(p,0x1b8,A**)[i])->setRect(&r);
                ((W *)F(p,0x1b8,A**)[i])->upd();
                ((W *)F(p,0x1b8,A**)[i])->draw(al, a, b, c, (R *)clip_);
            }
            if (y >= F(p,0x64,f32) - F(p,0x5c,f32)) { F(p,0x1cc,u32) = i; break; }
        }
    } else {
        F(p,0x6c,u32) &= ~2;
    }
    if (F(p,0x134,W*)) F(p,0x134,W*)->draw(al, a, b, c, cl);
}
}
