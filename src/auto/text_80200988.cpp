#include "common.h"
extern "C" {
struct Node { s8 b0; u8 b1; s8 b2; u32 v; Node *next; Node() { next = 0; b0 = 0; b1 = 0; b2 = 0; v = 0; } };
struct Ev { s8 b0; u8 b1; s8 b2; u32 v; };
struct Heap { u8 pad[24]; u32 a; u32 b; };
struct Obj { u8 pad[4]; u32 maxAct; u16 mask; u8 pad2[2]; s32 cnt; u32 mul; u32 f20; Node *head; };
extern Heap *lbl_8035A9F4;
extern Heap *lbl_8035B170;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(Heap *);
void fn_800F7E98(void);
void *memset(void *, int, u32);

static inline void emit(Obj *o, Ev *d, Node *p, u32 &t) {
    u32 dt = 0;
    s8 b2;
    u8 b1;
    s8 b0;
    u32 v;
    b0 = p->b0;
    b1 = p->b1;
    b2 = p->b2;
    v = p->v;
    if (v >= t) {
        dt = v - t;
        t += dt;
        dt *= o->mul;
    }
    d->b0 = b0;
    d->b1 = b1;
    d->b2 = b2;
    d->v = dt;
}

static inline void emit2(Obj *o, Ev *d, Node *p, u32 &t, s8 &ob0, s8 &ob2) {
    u32 dt = 0;
    s8 b0;
    s8 b2;
    u8 b1;
    b0 = p->b0;
    b1 = p->b1;
    b2 = p->b2;
    if (p->v >= t) {
        dt = p->v - t;
        t += dt;
        dt *= o->mul;
    }
    d->b0 = b0;
    d->b1 = b1;
    d->b2 = b2;
    d->v = dt;
    ob0 = b0; ob2 = b2;
}
void fn_80200988(Obj *o) {
    u8 tmp[128];
    Ev *d;
    u8 *raw;
    u32 sz = o->cnt * 8;
    Node *nn;
    if (lbl_8035B170->a >= 6) lbl_8035B170->b = lbl_8035B170->a;
    else lbl_8035B170->b = 6;
    if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    raw = new u8[sz + 64];
    fn_800F7E98();
    if (raw == 0) fn_800604C4(-4, 0, 0, 0);
    lbl_8035B170->b = lbl_8035B170->a;
    d = (Ev *)(raw + (64 - ((u32)raw & 63)));
    if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    nn = new Node;
    fn_800F7E98();
    if (nn == 0) fn_800604C4(-4, 0, 0, 0);
    memset(tmp, 0, 128);
    {
        Node *p = o->head;
        Node *nx = p->next;
        u32 t = 0;
        u32 act = 0;
        u32 i = 0;
        while (nx) {
            s32 ty;
            s8 b0, b2;
            emit2(o, &d[i], p, t, b0, b2);
            i++;
            ty = b0 & 0xf0;
            o->mask &= 1 << (b0 & 0xf);
            if (ty == 0x90 && b2 != 0) act++;
            if ((ty == 0x90 && b2 == 0) || ty == 0x80) act--;
            if (act > o->maxAct) o->maxAct = act;
            p = nx;
            nx = nx->next;
            if (nx == 0) emit(o, &d[i], p, t);
        }
    delete[] raw;
    {
        p = o->head;
        for (nx = p->next; nx; nx = nx->next) {
            if (p) delete p;
            p = nx;
        }
    }
    }
    o->head = 0;
}
}
