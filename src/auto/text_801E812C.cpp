#include "common.h"

struct V3 { f32 x, y, z; };
struct A { u8 pad[8]; char name[8]; s32 f10; V3 p; s32 fc_dummy; };
struct O {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void f18(A *);
    u8 pad[0x24]; char name[8]; s32 f30; s32 f34; V3 p;
};
struct A2 { u8 pad[8]; s32 f8; s32 fc; };
struct O2 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void f18(A2 *);
    u8 pad[0x24]; s32 f28; s32 f2c; s32 f30;
};
extern "C" {
void fn_801EF9A0(void *, void *);
void fn_800F6E88(void *, void *);
void fn_801E812C(O2 *__restrict o, A2 *__restrict a) {
    o->f18(a);
    fn_801EF9A0(o, a);
    o->f2c = 0;
    s32 v = a->f8;
    o->f28 = 0;
    o->f28 = v;
    o->f30 = a->fc;
}
}
