// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual u32 v19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void v59(u32,int); virtual void v60(u32,int); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void v69(void*); virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void v77(); virtual void v78(int); };
struct N { virtual int v0(int); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual int v33(void*,u32); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual int v51(void*); };
struct O { u8 pad_[52]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void f6(int,int); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { N *obj; int on; Node *next; };
extern f32 lbl_80364FA8;
extern f32 lbl_8035B018;
void fn_801C2368(void *, void *, int);
static inline void sel91(A *q, int v) { if (q->v19() == 91) q->v78(v); }
static inline void sel91b(A *p) { A *q = F(p,0x11c,A*); if (q->v19() == 91) q->v78(F(p,0x170,int)); }
int fn_801BB258(A *p, u32 key, int b) {
    lbl_8035B018 = lbl_80364FA8;
    {
        Node *n = F(p,0x88,Node*);
        int f = 0;
        for (; n; n = n->next) if (n->on && !n->obj->v33(p, key)) f = 1;
        if (f) return 0;
    }
    F(p,0x11c,A*)->v69(p);
    {
        Node *n = F(p,0x88,Node*);
        int f = 0;
        for (; n; n = n->next) if (n->obj->v0(11) && n->on && !n->obj->v51(p)) f = 1;
        if (f) return 1;
    }
    p->v77();
    if (F(p,0x6c,u32) & 4) F(F(p,0x7c,u8*),0x4c,int) = 1;
    else if (F(p,0xe0,A*)) {
        F(p,0xe0,A*)->v59(key, b);
        fn_801C2368(F(p,0x7c,void*), F(p,0xe0,A*), 1);
        p->v60(key, b);
    }
    if (F(p,0x16c,int)) {
        A *q = F(p,0x11c,A*);
        if (F(p,0x11c,A*)->v19() == 91) q->v78(F(p,0x170,int));
    }
    if (b && F(p,0x70,O*)) F(p,0x70,O*)->f6(16, F(p,0x68,int));
    {
        Node *n = F(p,0x88,Node*);
        int f = 0;
        for (; n; n = n->next) if (n->obj->v0(11) && !n->on && !n->obj->v51(p)) f = 1;
        return f != 0;
    }
}

} /* extern "C" */
