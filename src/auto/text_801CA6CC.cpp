// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void v7(f32,int,int,int,f32*); };
struct N { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void v50(A*,u16); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { N *obj; int on; Node *next; };
int fn_801BDAD0(A *, f32, f32);
static inline bool inRect(f32 x, f32 y, f32 *r) { bool b = false; if (x >= r[0] && x <= r[2] && y >= r[1] && y <= r[3]) b = true; return b; }
static inline void setState(A *o, u16 s) {
    for (Node *n = F(o,0x88,Node*); n; n = n->next) n->obj->v50(o, s);
    F(o,0x148,u32) = F(o,0x144,u32);
    F(o,0x144,u32) = (F(o,0x144,u32) & 0xffff0000) | s;
}
void fn_801CA6CC(A *p, f32 f, u32 a, u32 b, int c, int d, int e) {
    if (fn_801BDAD0(p, F(p,0x1e0,f32), F(p,0x1e4,f32))) {
        f32 x = F(p,0x1e0,f32), y = F(p,0x1e4,f32);
        if (inRect(x, y, &F(p,0x1f4,f32)) && b < F(p,0x1e8,u32)) {
            if (fn_801BDAD0(F(p,0x168,A*), x, y)) setState(F(p,0x168,A*), 256);
        } else if (inRect(x, y, &F(p,0x204,f32)) && b >= F(p,0x1e8,u32)) {
            if (fn_801BDAD0(F(p,0x168,A*), x, y)) setState(F(p,0x168,A*), 256);
        }
    }
    if (F(p,0x1bc,u32) == a + F(p,0x18c,u32) && b == F(p,0x1c0,u32) && F(p,0x144,u32) == 32 && F(p,0x178,A*))
        setState(F(p,0x168,A*), F(F(p,0x178,A*),0x144,u32));
    if (b >= F(p,0x1e8,u32)) F(p,0x168,A*)->v7(f, c, d, e, &F(p,0x204,f32));
    else F(p,0x168,A*)->v7(f, c, d, e, &F(p,0x1f4,f32));
    setState(F(p,0x168,A*), 2);
}

} /* extern "C" */
