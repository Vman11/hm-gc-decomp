#include "common.h"
extern "C" {
struct C80210CEC {
    u8 b[0xc];
    C80210CEC();
    ~C80210CEC();
};
struct FileInfo { u8 pad[4]; u32 size; };
struct Rd { u8 pad[4]; FileInfo *fi; };
struct Hdr { u8 m0, m1, m2, m3; u32 v; u16 a; u16 b; u16 c; } __attribute__((aligned(64)));
static inline void poison(void *p, int k) { if (k) *(f32 *)p = 0; }
struct Ent { u8 pad[4]; u32 size; };
struct Node { s8 b0; u8 b1, b2; u32 v; Node *next; Node() { next = 0; b0 = 0; b1 = 0; b2 = 0; v = 0; } };
struct Heap { u8 pad[24]; u32 a; u32 b; };
struct Obj { u8 pad[12]; s32 cnt; u32 f16; u32 f20; Node *head; };
extern char lbl_80365708[2];
extern Heap *lbl_8035A9F4;
extern Heap *lbl_8035B170;
s32 fn_80210ABC(C80210CEC *, char *, char *, s32);
void fn_802108B4(C80210CEC *, void *, u32, u32 *);
void fn_80210938(C80210CEC *);
void fn_80200C24(Obj *, u8 *, u32);
void fn_80200988(Obj *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(Heap *);
void fn_800F7E98(void);

static inline u16 sw16(u16 x) { return ((x >> 8) & 0xFF) + (x & 0xFF); }
static inline u32 sw32(u32 x) { u8 a = x >> 8; u8 b = x >> 16; u8 c = x; u32 d = x >> 24; return d + b + a + c; }

s32 fn_802010A0(Obj *o, char *path) {
    Ent *ents;
    u8 *raw;
    u32 i;
    u32 cnt;
    Ent *e;
    u8 *buf;
    s32 err;
    u32 n;
    C80210CEC rd;
    Hdr hdr;
    err = fn_80210ABC(&rd, path, lbl_80365708, 2);
    if (err) return err;
    {
        u32 len = ((Rd *)&rd)->fi->size;
        if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035A9F4);
        raw = new u8[len + 64];
        fn_800F7E98();
        if (raw == 0) fn_800604C4(-4, 0, 0, 0);
    }
    buf = raw + (64 - ((u32)raw & 63));
    fn_802108B4(&rd, buf, 14, &n);
    poison(&hdr, 0);
    hdr.a = ((Hdr *)buf)->a;
    hdr.b = ((Hdr *)buf)->b;
    hdr.c = ((Hdr *)buf)->c;
    hdr.v = ((Hdr *)buf)->v;
    hdr.m0 = ((Hdr *)buf)->m0;
    hdr.m1 = ((Hdr *)buf)->m1;
    hdr.m2 = ((Hdr *)buf)->m2;
    hdr.m3 = ((Hdr *)buf)->m3;
    hdr.a = sw16(hdr.a);
    hdr.b = sw16(hdr.b);
    hdr.c = sw16(hdr.c);
    if (hdr.a != 1 && hdr.a != 0) return 3;
    if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    ents = new Ent[hdr.b];
    fn_800F7E98();
    if (ents == 0) fn_800604C4(-4, 0, 0, 0);
    cnt = *(volatile u16 *)&hdr.b;
    e = ents;
    for (i = 0; i < cnt; e++, i++) {
        fn_802108B4(&rd, e, 8, &n);
        e->size = sw32(e->size);
        delete[] raw;
        if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035A9F4);
        raw = new u8[e->size];
        fn_800F7E98();
        if (raw == 0) fn_800604C4(-4, 0, 0, 0);
        lbl_8035A9F4->b = lbl_8035A9F4->a;
        fn_802108B4(&rd, raw, e->size, &n);
        fn_80210938(&rd);
        fn_80200C24(o, raw, n);
    }
    o->f16 = o->f20 / hdr.c;
    {
        Node *nd = o->head;
        Node *nn;
        while (nd->next) nd = nd->next;
        if (lbl_8035B170 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B170);
        nn = new Node;
        fn_800F7E98();
        if (nn == 0) fn_800604C4(-4, 0, 0, 0);
        nn->v = nd->v;
        nn->b0 = -1;
        nn->b1 = 47;
        nn->b2 = 0;
        nd->next = nn;
        o->cnt++;
    }
    fn_80200988(o);
    delete[] ents;
    return 0;
}
}
