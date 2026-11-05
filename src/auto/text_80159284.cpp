#include "common.h"
extern "C" {
void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035ACD0;
}
struct C80170688 { u8 pad0[4]; u32 f4; u32 f8; u8 pad[68 - 12]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void init(void *, u32, u32, u32); virtual void v4(); virtual void use(void *, s32); u8 pad2[112 - 72];
    C80170688(); ~C80170688(); };
struct Pair { C80170688 b[2]; u32 cur; u32 used; Pair *next; };
struct D { u32 f0; u8 f4[4]; u8 f8[16]; f32 f24; f32 f28; f32 f32_; u8 f36[4]; };
struct S { u8 pad[4]; void *f4; u8 pad2[28 - 8]; Pair *list; u32 f32; u32 f36; u8 pad3[44 - 40]; Pair *cur; };
extern "C" {
void fn_801373B8(C80170688 *, void *);
void fn_80137314(C80170688 *, void *);
void fn_801372FC(C80170688 *, f32);
void fn_801372E0(C80170688 *, f32, f32);
void fn_80137288(C80170688 *, void *);
void fn_8016FA30(C80170688 *, void *, u32);

void fn_80159284(S *s, u32 fmt, D *d, u32 n, void *x) {
    u32 fl;
    Pair *p;
    Pair *r;
    s32 k;
    s->f36 = n;
    {
        fl = d->f0;
        for (p = s->list; p; p = p->next) {
            if (fmt == p->b[0].f8 && fl == (p->b[0].f4 & 0x3E)) { r = p; goto found; }
        }
    }
    if (!lbl_8035ACD0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035ACD0);
    {
        Pair *q = new Pair;
        fn_800F7E98();
        if (!q) fn_800604C4(-4, 0, 0, 0);
        u32 f;
        Pair *o;
        o = s->list;
        q->cur = 0;
        s->list = q;
        f = (*(volatile u32 *)&d->f0 & 0x3E) | 1;
        q->next = o;
        q->used = 0;
        q->b[0].init(s->f4, 4096, fmt, f);
        q->b[1].init(s->f4, 4096, fmt, (d->f0 & 0x3E) | 1);
        r = q;
    }
found:
    fl = *(volatile u32 *)&d->f0;
    *(Pair *volatile *)&s->cur = r;
    if (fl & 2) { fn_801373B8(&s->cur->b[0], d->f4); fn_801373B8(&s->cur->b[1], d->f4); }
    else if (fl & 4) { fn_80137314(&s->cur->b[0], d->f8); fn_80137314(&s->cur->b[1], d->f8); }
    if (d->f0 & 8) { fn_801372FC(&s->cur->b[0], d->f24); fn_801372FC(&s->cur->b[1], d->f24); }
    else if (d->f0 & 0x10) { fn_801372E0(&s->cur->b[0], d->f28, d->f32_); fn_801372E0(&s->cur->b[1], d->f28, d->f32_); }
    if (d->f0 & 0x20) { fn_80137288(&s->cur->b[0], d->f36); fn_80137288(&s->cur->b[1], d->f36); }
    if (s->cur->used + n > 4096) {
        s->cur->cur = (s->cur->cur + 1) & 1;
        s->cur->used = 0;
        k = 8;
    } else {
        k = 4;
    }
    s->f32 = s->cur->used;
    s->cur->b[s->cur->cur].use(x, k);
    if (s->f32) fn_8016FA30(&s->cur->b[s->cur->cur], x, s->f32);
}
}
