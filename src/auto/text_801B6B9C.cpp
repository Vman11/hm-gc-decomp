// fn_801B6B9C: list widget input handler. NonMatching draft (wH b6g + wA_8020CFE4): DIFF 2, desel 1st loop IV init
// 'li r4,0' in target vs 'mr r4,r7'. Notes: hm-work/wH/STATUS.txt, hm-work/wA_8020CFE4/STATUS.txt
#include "common.h"
extern "C" {
struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void v69(A*); virtual void s70(); virtual void s71(); virtual void v72(int); virtual void v73(int); };
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

struct LN { A *obj; int on; LN *next; };
struct E2 { void *a; int on; int c; };
struct R { f32 x0, y0, x1, y1; };
extern volatile f32 lbl_80364F40;
extern f32 lbl_803596E0[];
extern f32 lbl_8035AF84;
int fn_801CCDDC(void *, u32 *, A **, void *);
void fn_8012D0A4(f32, f32, f32, void *, R *, void *, f32 *, void *, u32);
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
static inline f32 H(A *q) { return F(q,0x64,f32) - F(q,0x5c,f32); }

extern f32 lbl_80364F50;
int fn_801BDAD0(A *, f32, f32);
struct M { virtual void s0(); virtual void s1(); virtual int hit(f32, f32, A *, u32); };
struct LM { M *obj; int on; LM *next; };
struct IW { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void mouse(f32, f32, u32); };
static inline u32 hitRow(A *p, f32 y) {
    f32 pos = -F(p,0x1a0,f32);
    u32 i;
    if (F(p,0x1bc,E*)) {
        R r;
        f32 h;
        calcRect(p, F(p,0x1c8,u32), &r);
        h = r.y1 - r.y0;
        for (i = F(p,0x1c8,u32); i < F(p,0x188,u32); i++) {
            f32 top = F(p,0x4c,f32) + pos;
            if (y >= top && y <= h + top) return i;
            pos += h;
        }
    } else {
        if (F(p,0x1b8,A**)) {
            A **q = F(p,0x1b8,A**) + F(p,0x1c8,u32);
            for (i = F(p,0x1c8,u32); i < F(p,0x188,u32); q++, i++) {
                f32 top = F(p,0x4c,f32) + pos;
                f32 h = H(*q);
                if (y >= top && y <= h + top) return i;
                pos += h;
            }
        }
    }
    return F(p,0x188,u32) - 1;
}
int fn_801B6B9C(A *p, f32 x, f32 y, u32 key) {
    LM *l;
    int handled = 0;
    u32 i;
    for (l = F(p,0x88,LM*); l; l = l->next) {
        if (l->on && !l->obj->hit(x, y, p, key)) handled = 1;
    }
    if (handled) return 0;
    F(p,0x168,int) = 0;
    F(p,0x16c,int) = 0;
    if (F(p,0x1b8,A**)) {
        for (i = F(p,0x1c8,u32); i <= F(p,0x1cc,u32); i++) ((IW *)F(p,0x1b8,A**)[i])->mouse(x, y, key);
    }
    if (fn_801BDAD0(p, x, y)) {
    switch (F(p,0x144,s32)) {
    case 128: {
        i = hitRow(p, y);
        if (i != F(p,0x184,u32)) {
            F(p,0x184,u32) = i;
            fn_801B3EB0(p);
            if (key & 3) {
                fn_801B4654(p);
            } else {
                desel(p);
                F(F(p,0x1d0,u8*),0xc,int) = 1;
                *F(F(p,0x1d4,u8*),0xc,u32*) = F(p,0x184,u32);
                if (F(p,0x1bc,E*)) F(p,0x1bc,E*)[F(p,0x184,u32)].on = 1;
                else if (F(p,0x1b8,A**)) F(p,0x1b8,A**)[F(p,0x184,u32)]->v72(1);
                if (F(p,0x170,int)) { if (F(p,0x11c,A*)) F(p,0x11c,A*)->v69(p); }
                else F(p,0x174,int) = 1;
                notify(p);
            }
        }
        if (y <= lbl_80364F50 + F(p,0x4c,f32)) F(p,0x168,int) = 1;
        if (y >= F(p,0x54,f32) - lbl_80364F50) F(p,0x16c,int) = 1;
        break;
    }
    }
    }
    return 0;
}
}
