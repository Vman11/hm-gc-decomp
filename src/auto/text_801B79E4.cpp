// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
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

struct SN { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void st(void *, int); };
struct SNode { SN *obj; int on; SNode *next; };
struct SB { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void show(int); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void upd(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69(); virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void setPage(f32); virtual void s80(); virtual void setStep(f32); virtual void s82(); virtual void setRange(f32, f32); virtual f32 getPos(); virtual void setPos(f32); virtual void setRatio(f32); };
extern f64 lbl_80364F48;
extern f32 lbl_80364F54;
extern f32 lbl_80364F58;
static inline void setSt(SB *w, int s) {
    SNode *n;
    for (n = F(w,0x88,SNode*); n; n = n->next) n->obj->st(w, s);
    F(w,0x148,u32) = F(w,0x144,u32);
    F(w,0x144,u32) = (F(w,0x144,u32) & ~0xffff) | s;
}
void fn_801B79E4(A *p) {
    f32 over;
    f32 ratio;
    f32 rowH;
    SB *w;
    rowH = lbl_80364F40;
    if (F(p,0x1bc,E*) && F(p,0x188,u32)) {
        R r;
        calcRect(p, 0, &r);
        rowH = r.y1 - r.y0;
    }
    w = F(p,0x1b4,SB*);
    if (w) {
        f32 view = F(p,0x54,f32) - F(p,0x4c,f32);
        f32 tot = F(p,0x198,f32);
        over = tot - view;
        if (over < lbl_80364F40) {
            setSt(w, 1);
            F(p,0x1b4,SB*)->setRange(lbl_80364F40, over);
            F(p,0x1b4,SB*)->setPos(lbl_80364F40);
            F(F(p,0x1b4,SB*),0x6c,u32) &= ~2;
            F(p,0x1b4,SB*)->show(0);
        } else {
            if (lbl_80364F48 != tot) ratio = view / tot;
            else ratio = lbl_80364F54;
            setSt(w, 2);
            F(p,0x1b4,SB*)->setRange(lbl_80364F40, over);
            F(p,0x1b4,SB*)->setPage(F(p,0x54,f32) - F(p,0x4c,f32));
            if (F(p,0x1bc,E*)) F(p,0x1b4,SB*)->setStep(rowH);
            else if (F(p,0x1b8,A**)) { A *it = F(p,0x1b8,A**)[F(p,0x184,u32)]; F(p,0x1b4,SB*)->setStep(F(it,0x54,f32) - F(it,0x4c,f32)); }
            if (F(p,0x178,int)) F(p,0x1b4,SB*)->setRatio(ratio);
            if (F(p,0x1b4,SB*)->getPos() > over) F(p,0x1b4,SB*)->setPos(over);
            F(F(p,0x1b4,SB*),0x6c,u32) |= 2;
            F(p,0x1b4,SB*)->show(1);
            F(p,0x1b4,SB*)->upd();
        }
    }
    w = F(p,0x1b0,SB*);
    if (w) {
        f32 view = F(p,0x50,f32) - F(p,0x48,f32);
        f32 tot = F(p,0x194,f32);
        over = tot - view;
        if (over < lbl_80364F40) {
            setSt(w, 1);
            F(p,0x1b0,SB*)->setRange(lbl_80364F40, over);
            F(p,0x1b0,SB*)->setPos(lbl_80364F40);
            F(F(p,0x1b0,SB*),0x6c,u32) &= ~2;
            F(p,0x1b0,SB*)->show(0);
        } else {
            if (lbl_80364F48 != tot) ratio = view / tot;
            else ratio = lbl_80364F54;
            setSt(w, 2);
            F(p,0x1b0,SB*)->setRange(lbl_80364F40, over);
            F(p,0x1b0,SB*)->setPage((int)(F(p,0x50,f32) - F(p,0x48,f32)));
            F(p,0x1b0,SB*)->setStep(lbl_80364F58);
            if (F(p,0x178,int)) F(p,0x1b0,SB*)->setRatio(ratio);
            if (F(p,0x1b0,SB*)->getPos() > over) F(p,0x1b0,SB*)->setPos(over);
            F(F(p,0x1b0,SB*),0x6c,u32) |= 2;
            F(p,0x1b0,SB*)->show(1);
            F(p,0x1b0,SB*)->upd();
        }
    }
}

} /* extern "C" */
