#include "common.h"

struct E_80195AA0 { u32 flags; u8 pad4[8]; f32 t; u8 pad10[0x30]; };
struct P_80195AA0 { u8 pad[0x1b0]; f32 a; f32 b; };
struct L_80195AA0 { u32 n; u32 *vals; };
struct R_80195AA0 {
    u8 pad[8];
    virtual void p0(); virtual void p1(); virtual void p2();
    virtual void begin(void *a, P_80195AA0 *p, void *m);
    virtual void draw(void *a, void *b, void *c, E_80195AA0 *from, E_80195AA0 *to, u32 v);
    virtual void end(void *a);
};
struct O_80195AA0 {
    R_80195AA0 *r;
    P_80195AA0 *p;
    E_80195AA0 *buf;
    u32 head;
    u32 tail;
    u32 cap;
    u32 count;
    u8 m[4];
};

extern "C" void fn_80195AA0(O_80195AA0 *o, void *a, L_80195AA0 *l, void *b, void *c) {
    if (o->count != 0) {
        E_80195AA0 *cur;
        E_80195AA0 *end;
        E_80195AA0 *prev;
        u32 v;
        u32 j;
        u32 nm1;
        E_80195AA0 *start;
        u32 idx;
        f32 s;
        nm1 = l->n - 1;
        s = (f32)(s32)l->n / (o->p->a + o->p->b);
        cur = o->buf + o->head;
        end = o->buf + o->tail;
        o->r->begin(a, o->p, o->m);
        prev = cur;
        start = cur;
        idx = (s32)(s * cur->t);
        if (idx > nm1) idx = nm1;
        v = l->vals[idx];
        do {
            if (cur <= o->buf) cur = o->buf + o->cap;
            cur--;
            if (cur != end && (cur->flags & 0xf) == 0) {
                j = (s32)(s * cur->t);
                if (j > nm1) j = nm1;
                if (idx != j) {
                    if (start < prev) {
                        o->r->draw(a, b, c, o->buf, start, v);
                        o->r->draw(a, b, c, prev, o->buf + (o->cap - 1), v);
                    } else {
                        o->r->draw(a, b, c, prev, start, v);
                    }
                    v = l->vals[j];
                    start = cur;
                    idx = j;
                }
                prev = cur;
            }
        } while (cur != end);
        if (start < prev) {
            o->r->draw(a, b, c, o->buf, start, v);
            o->r->draw(a, b, c, prev, o->buf + (o->cap - 1), v);
        } else {
            o->r->draw(a, b, c, prev, start, v);
        }
        o->r->end(a);
    }
}
