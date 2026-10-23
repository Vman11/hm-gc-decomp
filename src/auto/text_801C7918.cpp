// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V1 {
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29(); virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35(); 
    virtual s32 m(void *p, s32 a);
};
struct V2 {
    u8 pad[52];
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); 
    virtual void m(s32 a, s32 b);
};
struct Node { V1 *obj; s32 active; Node *next; };
struct Obj {
    u8 pad0[104];
    s32 f104;
    u8 pad1[4];
    V2 *f112;
    u8 pad2[20];
    Node *f136;
    u8 pad3[184];
    s32 f324;
};
extern "C" {
s32 fn_801C7918(Obj *p, s32 a, s32 b) {
    Node *n;
    s32 flag;
    flag = 0;
    for (n = p->f136; n != 0; n = n->next) {
        if (n->active != 0) {
            if (n->obj->m(p, a) == 0) flag = 1;
        }
    }
    if (flag) return 0;
    switch (p->f324) {
    case 16: p->f324 = 2; break;
    case 32: break;
    case 64: p->f324 = 2; break;
    case 128: break;
    }
    if (b != 0 && p->f112 != 0) {
        p->f112->m(64, p->f104);
    }
    return 0;
}

} /* extern "C" */
