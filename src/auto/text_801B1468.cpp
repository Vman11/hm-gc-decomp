// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void v59(u32,int); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void v67(A*); };
struct N { virtual void s0(); virtual void s1(); virtual void s2(); virtual int v3(A*,u32,f32,f32); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { N *obj; int on; Node *next; };
struct Arr { int a; u32 b; u32 c; };
struct V2 { f32 x, y; };
extern f32 lbl_803596E0[];
extern f32 lbl_8035AF50;
extern f32 lbl_8035AF54;
void fn_801B1D54(A *, u32);
int fn_801CCC7C(void *, int *, u8 **, u32, int);
void fn_8012CD20(void *, f32 *, Arr *, u32, V2 *, int, int, f32, f32, f32);
u32 fn_800FA8F4(Arr *);
static inline int anyNo(A *p, f32 x, f32 y, u32 k) { int f = 0; for (Node *n = F(p,0x88,Node*); n; n = n->next) if (n->on && !n->obj->v3(p, k, x, y)) f = 1; return f; }
static inline bool inRect(f32 x, f32 y, f32 *r) { bool b = false; if (x >= r[0] && x <= r[2] && y >= r[1] && y <= r[3]) b = true; return b; }
int fn_801B1468(A *p, f32 x, f32 y, u32 key) {
    u32 i;
    void *o;
    f32 py;
    f32 lx;
    f32 px;
    {
        Node *n = F(p,0x88,Node*);
        int f = 0;
        for (; n; n = n->next) if (n->on && !n->obj->v3(p, key, x, y)) f = 1;
        if (f) return 0;
    }
    switch (F(p,0x144,s32)) {
    case 2: case 256:
        p->v59(key, 1);
    case 16:
        F(p,0x144,u32) = 128;
        if (F(p,0x11c,A*)) F(p,0x11c,A*)->v67(p);
        if (F(p,0x18c,Arr*)) fn_801B1D54(p, F(p,0x18c,Arr*)->c - F(p,0x18c,Arr*)->b);
        F(p,0x174,u32) = F(p,0x170,u32);
        F(p,0x168,int) = 1;
        break;
    case 32: {
        int a;
        u8 *b;
        u32 idx;
        F(p,0x144,u32) = 128;
        a = 0;
        if (!fn_801CCC7C(F(p,0x70,void*), &a, &b, F(p,0x144,u32), F(p,0x68,int))) idx = 0;
        else {
            o = F(b,0x24,void*);
            if (!o) idx = 0;
            else {
                f32 *q = (f32 *)(F(F(p,0x70,u8*),0xc,u8*) + F(p,0x178,u32) * 16);
                V2 pos;
                px = F(p,0x48,f32) + q[0];
                pos.x = px;
                py = F(p,0x4c,f32) + q[1];
                pos.y = py;
                lx = x - F(p,0x1a0,f32);
                if (lx < px) idx = 0;
                else {
                    F(p,0x18c,Arr*)->b = F(p,0x180,u32);
                    for (i = 0; i < F(p,0x18c,Arr*)->c - F(p,0x18c,Arr*)->b; i++) {
                        f32 r[4];
                        fn_8012CD20(o, r, F(p,0x18c,Arr*), i, &pos, 0, 17, lbl_803596E0[0], lbl_8035AF50, lbl_8035AF54);
                        if (inRect(lx, py, r)) break;
                    }
                    {
                        Arr *v = F(p,0x18c,Arr*);
                        v->b = 0;
                        v->c = fn_800FA8F4(v);
                    }
                    idx = i + F(p,0x180,u32);
                }
            }
        }
        fn_801B1D54(p, idx);
        if (!(key & 3)) F(p,0x174,u32) = F(p,0x170,u32);
        break;
    }
    }
    return 1;
}

} /* extern "C" */
