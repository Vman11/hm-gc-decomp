#include "common.h"

struct A { u8 pad[8]; char name[8]; s32 f10; };
struct O {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void f18(A *);
    u8 pad[0x24]; char name[8]; s32 f30; s32 f34;
};
extern "C" {
void fn_801EF9A0(O *, A *);
void fn_800F6E88(void *, void *);
void fn_801E0628(O *__restrict o, A *__restrict a) {
    o->f18(a);
    fn_801EF9A0(o, a);
    o->f34 = 0;
    s32 v = a->f10;
    o->f30 = 0;
    o->f30 = v;
    fn_800F6E88(o->name, a->name);
}
}
