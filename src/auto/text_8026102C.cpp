// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13();
    virtual void v14(void *a, void *b, void *c, void *d, s32 e);
    u8 pad[0x118 - 4];
    f32 f118, f11c, f120;
    u8 pad2[0x154 - 0x124];
    f32 f154;
};
struct P {
    u8 pad[0x50];
    u8 a50[0xc]; u8 a5c[0xc]; u8 a68[0xc]; u8 a74[0xc];
    f32 f80, f84, f88;
    u8 pad8c[8];
    f32 f94;
    u8 pad98[4];
    Obj *o;
};
void fn_8026102C(P *p) {
    Obj *o;
    p->o->v14(p->a50, p->a5c, p->a68, p->a74, 0);
    f32 s = p->f94;
    o = p->o;
    o->f118 = p->f80;
    o->f11c = p->f84;
    o->f120 = p->f88;
    o->f154 = s;
}

} /* extern "C" */
