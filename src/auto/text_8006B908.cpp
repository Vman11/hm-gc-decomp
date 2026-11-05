#include "common.h"

extern "C" {

struct V9 { f32 x, y, z; };
struct E9 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void Set(void *, int, int, int, int);
};
struct Q9 { u8 pad[0x10]; void *f10; u8 pad14[0x20 - 0x14]; u32 f20; };
struct O9 { u8 pad[0x30]; Q9 *f30; };
struct P9 {
    u8 pad[0xe0]; E9 *fe0; u8 pade4[0xec - 0xe4]; s32 *fec;
    u8 padf0[0x110 - 0xf0]; O9 **f110; u8 pad114[0x118 - 0x114]; void *f118;
    u8 pad11c[0x260 - 0x11c]; f32 *f260; u8 pad264[4]; s32 f268; f32 f26c; f32 f270;
    u8 pad274[0x288 - 0x274]; u8 f288[4];
};
struct T9 { void *a, *b, *c; void (*fn)(void *, V9 *); };
extern T9 lbl_803286D0;
extern f32 lbl_8035F0C0;
extern u32 lbl_8035F200;
void fn_80072AC8(void *, V9 *);
void fn_8023F9C8(P9 *, s32);
void fn_80190C98(O9 *);
void fn_8006B908(P9 *p) {
    V9 v;
    Q9 *q; u32 i; O9 *o;
    p->f268 = *p->fec;
    p->f26c = *p->f260 / (f32)p->f268;
    p->f270 = lbl_8035F0C0;
    p->fe0->Set(p->f288, 0, 0, 0, 0);
    fn_80072AC8(p->f118, &v);
    for (i = 6; i <= 9; i++) {
        fn_8023F9C8(p, i);
        o = p->f110[i];
        if (o && (q = o->f30)) {
            lbl_803286D0.fn(q->f10, &v);
            q->f20 |= lbl_8035F200;
            fn_80190C98(o);
        }
    }
}

} /* extern "C" */
