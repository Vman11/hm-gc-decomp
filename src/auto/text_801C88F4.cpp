// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual int v30(u32,f32,f32); };
struct N { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual int v7(void*,u32,f32,f32); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { N *obj; int on; Node *next; };
int fn_801BDAD0(void *, f32, f32);
static inline bool inRect(f32 x, f32 y, f32 *r) { bool b = false; if (x >= r[0] && x <= r[2] && y >= r[1] && y <= r[3]) b = true; return b; }
static inline bool clr(u8 **a, u32 i) { if (F(a[i],0x15c,u32)) { F(a[i],0x15c,u32) = 0; return true; } return false; }
int fn_801C88F4(A *p, u32 key, f32 x, f32 y) {
    u32 i;
    {
        Node *n = F(p,0x88,Node*);
        int f = 0;
        for (; n; n = n->next) if (n->on && !n->obj->v7(p, key, x, y)) f = 1;
        if (f) return 0;
    }
    for (i = 0; i < F(p,0x1f0,u32); i++) {
        u8 **arr = F(p,0x17c,u8**); if (F(arr[i],0x15c,u32)) { F(arr[i],0x15c,u32) = 0; return 1; }
    }
    if (!fn_801BDAD0(p, x, y)) {
        if (inRect(x, y, &F(p,0x214,f32))) {
            for (i = F(p,0x1e8,u32); i < F(p,0x1f0,u32); i++)
                if (fn_801BDAD0(F(p,0x17c,A**)[i], x, y)) return F(p,0x17c,A**)[i]->v30(key, x, y);
        } else if (inRect(x, y, &F(p,0x224,f32))) {
            for (i = 0; i < F(p,0x1e8,u32); i++)
                if (fn_801BDAD0(F(p,0x17c,A**)[i], x, y)) return F(p,0x17c,A**)[i]->v30(key, x, y);
        }
    }
    return 0;
}

} /* extern "C" */
