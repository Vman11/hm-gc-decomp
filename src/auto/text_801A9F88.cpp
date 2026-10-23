// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void set20(int); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void f39(int,int); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void f59(int,int); virtual void f60(int,int); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69(); virtual void s70(); virtual void s71(); virtual void f72(int); };
struct N { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual int ok(void*,int); };
struct O { u8 pad_[52]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void f6(int,int); };
struct Node { N *obj; int on; Node *next; };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
void fn_801D99B4(void *, int, int);
static inline int isA(A *q) { u16 t = F(q,0x144,u32); if (t==16||t==32||t==64||t==128) return 1; return 0; }
static inline bool isB(A *q) { bool r=false; u16 t = F(q,0x144,u32); if (t==8||t==4||t==32||t==128||t==512) r=true; return r; }
static inline int gf(A *q) { return (F(q,0x6c,u32) >> 1) & 1; }
static inline void st(A *q) { int v = gf(q); if (!v) F(q,0x6c,u32) |= 2; }
static inline int anyNo(A *p, int a) { int f = 0; for (Node *n = F(p,0x88,Node*); n; n = n->next) if (n->on && !n->obj->ok(p, a)) f = 1; return f; }
int fn_801A9F88(A *p, int a, int b) {
    switch (F(p,0x144,s32)) {
    case 0x10: case 0x100:
        fn_801D99B4(p, a, b);
        break;
    case 8: case 0x20: case 0x40: case 0x80:
        if (anyNo(p, a)) return 1;
        if (!(F(p,0x6c,u32) & 2)) return 1;
        { A *q = F(p,0x174,A*); if (isA(q)) q->f60(0, b); }
        { A *q = F(p,0x170,A*); if (!(F(q,0x6c,u32) & 1)) q->set20(1); }
        st(F(p,0x170,A*));
        { A *q = F(p,0x170,A*); if (!isA(q)) q->f59(a, b); }
        { A *q = F(p,0x170,A*); if (!isB(q)) q->f72(b); }
        F(p,0x170,A*)->f39(a, b);
        if (b && F(p,0x70,O*)) F(p,0x70,O*)->f6(1, F(p,0x68,int));
        break;
    default:
        if (anyNo(p, a)) return 1;
        if (b && F(p,0x70,O*)) F(p,0x70,O*)->f6(1, F(p,0x68,int));
        break;
    }
    return 1;
}

} /* extern "C" */
