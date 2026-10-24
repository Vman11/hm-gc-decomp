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

void fn_801B4654(A *p) {
    if (!F(p,0x164,int)) {
        desel(p);
        F(F(p,0x1d0,u8*),0xc,int) = 1;
        *F(F(p,0x1d4,u8*),0xc,u32*) = F(p,0x184,u32);
        if (F(p,0x1bc,E*)) F(p,0x1bc,E*)[F(p,0x184,u32)].on = 1;
        else if (F(p,0x1b8,A**)) F(p,0x1b8,A**)[F(p,0x184,u32)]->v72(1);
        if (F(p,0x170,int)) { if (F(p,0x11c,A*)) F(p,0x11c,A*)->v69(p); }
        else F(p,0x174,int) = 1;
        notify(p);
    } else {
        int lo, hi, i, k;
        desel(p);
        if (F(p,0x184,u32) > F(p,0x180,u32)) { lo = F(p,0x180,u32); hi = F(p,0x184,u32); }
        else { lo = F(p,0x184,u32); hi = F(p,0x180,u32); }
        F(F(p,0x1d0,u8*),0xc,int) = hi - lo + 1;
        for (i = lo, k = 0; i <= hi; i++, k++) {
            F(F(p,0x1d4,u8*),0xc,u32*)[k] = i;
            if (F(p,0x1bc,E*)) F(p,0x1bc,E*)[i].on = 1;
            else if (F(p,0x1b8,A**)) F(p,0x1b8,A**)[i]->v72(1);
        }
        if (F(p,0x170,int)) { if (F(p,0x11c,A*)) F(p,0x11c,A*)->v69(p); }
        else F(p,0x174,int) = 1;
    }
}

} /* extern "C" */
