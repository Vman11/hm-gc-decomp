// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void v59(u32,int); };
struct N { virtual void s0(); virtual void s1(); virtual void s2(); virtual int v6(void*,u32,f32,f32); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
#define FF(p,o) F(p,o,f32)
struct Node { N *obj; int on; Node *next; };
struct R4 { f32 a, b, c, d; };
int fn_801AEB20(A *p, u32 key, f32 x, f32 y) {
    {
        Node *n = F(p,0x88,Node*);
        int f = 0;
        for (; n; n = n->next) if (n->on && !n->obj->v6(p, key, x, y)) f = 1;
        if (f) return 0;
    }
    if (x >= FF(p,0x174) && x <= FF(p,0x17c) && y >= FF(p,0x178) && y <= FF(p,0x180)) {
        switch (F(p,0x144,s32)) {
        case 2: case 16: case 256:
            p->v59(key, 1);
            F(p,0x144,u32) = 64;
            F(p,0x14c,R4) = F(p,0x58,R4);
            FF(p,0x14c) -= x;
            FF(p,0x154) -= x;
            FF(p,0x150) -= y;
            FF(p,0x158) -= y;
            break;
        }
        return 1;
    }
    switch (F(p,0x144,s32)) {
    case 2: case 256:
        p->v59(key, 1);
        F(p,0x144,u32) = 64;
        break;
    }
    return 0;
}

} /* extern "C" */
