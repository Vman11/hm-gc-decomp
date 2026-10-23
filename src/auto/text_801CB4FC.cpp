// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void v69(void*); virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void v76(int); };
struct N { virtual int v0(int); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual int v21(void*,u32); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual int v51(void*); virtual void v52(void*); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { N *obj; int on; Node *next; };
struct S { void *a; int b, c, cur; };
void fn_8010C4B8(void *, int *, int *);
int fn_801CB4FC(u8 *p, u32 key) {
    {
        int f = 0;
        Node *n = F(p,0x88,Node*);
        for (; n; n = n->next) if (n->on && !n->obj->v21(p, key)) f = 1;
        if (f) return 0;
    }
    switch ((u16)F(p,0x144,u32)) {
    case 16:
        if (F(p,0x168,S*)) {
            Node *n = F(p,0x88,Node*);
            int f = 0;
            for (; n; n = n->next) if (n->obj->v0(17) && !n->obj->v51(p)) f = 1;
            if (!f) {
                int b, a;
                fn_8010C4B8(F(p,0x168,S*)->a, &a, &b);
                if (F(p,0x168,S*)->cur >= b) { F(p,0x168,S*)->cur = a; ((A *)p)->v76(a); }
                else { F(p,0x168,S*)->cur++; ((A *)p)->v76(F(p,0x168,S*)->cur); }
                F(p,0x11c,A*)->v69(p);
                for (n = F(p,0x88,Node*); n; n = n->next) if (n->obj->v0(17)) n->obj->v52(p);
            }
        }
        break;
    }
    return 0;
}

} /* extern "C" */
