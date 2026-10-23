// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V1 {
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); 
    virtual s32 m(void *p, s32 a);
};
struct V2 {
    u8 pad[128];
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29(); virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35(); virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41(); virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47(); 
    virtual void m(s32 a);
};
struct Node { V1 *obj; s32 active; Node *next; };
struct Obj {
    u8 pad0[136];
    Node *f136;
    u8 pad3[144];
    V2 *f284;
};
extern "C" {
s32 fn_801D871C(Obj *p, s32 a) {
    Node *n1; s32 f1; Node *n2; s32 f2;
    f1 = 0;
    for (n1 = p->f136; n1 != 0; n1 = n1->next) {
        if (n1->active != 0) {
            if (n1->obj->m(p, a) == 0) f1 = 1;
        }
    }
    if (f1) return 0;
    if (p->f284 != 0) p->f284->m(a);
    f2 = 0;
    for (n2 = p->f136; n2 != 0; n2 = n2->next) {
        if (n2->active == 0) {
            if (n2->obj->m(p, a) == 0) f2 = 1;
        }
    }
    return f2 ? 0 : 0;
}

} /* extern "C" */
