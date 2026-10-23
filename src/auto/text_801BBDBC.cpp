// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct N { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void v50(void*,u16); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { N *obj; int on; Node *next; };
static inline void setState(u8 *o, u16 s) {
    for (Node *n = F(o,0x88,Node*); n; n = n->next) n->obj->v50(o, s);
    F(o,0x148,u32) = F(o,0x144,u32);
    F(o,0x144,u32) = (F(o,0x144,u32) & 0xffff0000) | s;
}
void fn_801BBDBC(u8 *p) {
    switch (F(p,0x144,s32)) {
    case 8: setState(p, 2); break;
    case 4: setState(p, 1); break;
    case 16: setState(p, 2); break;
    case 32: setState(p, 2); break;
    case 128: setState(p, 2); break;
    case 512: setState(p, 256); break;
    }
}

} /* extern "C" */
