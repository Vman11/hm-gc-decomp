#include "common.h"
extern "C" {
struct E35 { u8 pad[0xa]; u16 fa; };
struct S35 { u8 pad[8]; s32 f8; };
struct B10 { u8 pad[0x10]; };
struct O35 : B10 {
virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); 
    virtual void v24(E35 *e, u16 k, S35 *s, void *c, f32 a, f32 b);
};
struct R35 { u8 pad[0x18]; O35 *o; O35 *getO() { return o; } E35 *getE() { return e; } u8 p1c[0x28 - 0x1c]; E35 *e; };
struct Q35 { u8 pad[0x18]; S35 *s; };
struct P35 { R35 *r; u8 p4[0x2c - 4]; u16 n0, n1; u8 p30[6]; u16 k; };
void fn_80101B0C(P35 *p, Q35 *q, void *c, f32 a, f32 b) {
    u32 st;
    O35 *o = p->r->getO();
    u32 end = p->n0 + p->n1;
    u32 i = p->n0;
    if (q != 0) {
        for (st = i; st < end; st++) {
            E35 *e = &p->r->e[st];
            S35 *s = &q->s[e->fa];
            s->f8 = 0;
            o->v24(e, p->k, s, c, a, b);
        }
    } else {
        for (st = i; st < end; st++) o->v24(&p->r->e[st], p->k, 0, c, a, b);
    }
}
}
