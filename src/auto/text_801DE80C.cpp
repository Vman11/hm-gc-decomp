#include "common.h"

struct A { u8 pad[8]; s32 f8; s32 fc; };
struct O {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void f18();
    s32 f4; s32 f8; u8 pad[0x1c]; s32 f28; s32 f2c; s32 f30;
};
extern "C" {
void fn_801EF9A0(O *, A *);
void fn_801DE80C(O *__restrict o, A *__restrict a) {
    if (o->f8) o->f18();
    fn_801EF9A0(o, a);
    o->f2c = 0;
    s32 v = a->f8;
    o->f28 = 0;
    o->f28 = v;
    o->f30 = a->fc;
}
}
