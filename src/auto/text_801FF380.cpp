#include "common.h"

extern "C" {

struct T { u8 pad[4]; u32 a4; u8 pad8[4]; void *t12; };
struct D36 { u8 pad[8]; void *a8; u8 pad12[4]; char *name; };
struct G { u8 pad[96]; u32 a96; u8 pad100[16]; void *tbl[8]; };
struct D { u8 pad[8]; u32 fl; u8 pad12[4]; void *a16; void *a20; u8 pad24[12]; D36 *d36; };
struct E;
struct V152 { u8 pad[4]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void s3(); };
struct M4 { u8 pad[8]; void *a8; };
struct M { u8 pad[4]; M4 *a4; u8 pad8[72]; s32 a80; u8 pad84[8]; V152 *v152; };
struct E {
    u8 pad[40];
    s32 a40;
    u8 pad44[108];
    u8 s152[8];
    void *h160;
    u8 pad164[4];
    E *e168;
    void *h172;
    u8 pad176[88];
    u8 a264[60];
    u8 a324[60];
    u8 a384[72];
    void *h456;
};
struct S16 { u32 a, b, c, d; };
E *fn_801FFC10(void);
s32 fn_80202EE0(E *, D *, M *);
void fn_801FDCE0(M4 *, M *);
void fn_80202958(E *, T *, void *, G *);
void fn_801FE3F0(void);
void *fn_801FE48C(V152 *, s32, void (*)(void), E *);
void fn_800C7434(void *, s32);
void fn_802037EC(u8 *, void *);
void fn_800BAC40(T *, void *, u32);
void fn_80202A50(E *, T *, void *, G *);
void fn_802021A8(E *, u32);
void fn_800C7240(void *);
void fn_80205454(u8 *, void *);
void fn_80201F5C(E *, D *, E *);
void fn_800C9A68(void *, int);
void fn_80205198(u8 *, S16 *);
char *strcpy(char *, const char *);
void fn_80210CFC(char *, char *);
s32 fn_800BD3AC(char *, u8 *);
T *fn_800BAC18(void *, int);
void fn_802069AC(u8 *, void *);
G *fn_80203850(void *, void *);
s32 fn_80201714(u32);
void *fn_80203840(void *, void *);
void fn_80202C98(E *);

static inline int isA(D *d) { return (d->fl >> 10) & 1; }

void fn_801FF380(M *m, D *d, u32 x, E *e) {
    s32 n;
    void *h;
    m->v152->s3();
    if (!e) e = fn_801FFC10();
    else e->a40 = 1;
    if (fn_80202EE0(e, d, m) == 0) {
        if (d->fl & 0x800) {
            h = fn_801FE48C(m->v152, 31, fn_801FE3F0, e);
            fn_800C7434(h, 30);
        } else {
            n = (5 - m->a80) * 5;
            h = fn_801FE48C(m->v152, n, fn_801FE3F0, e);
            fn_800C7434(h, n - 1);
        }
        if (h) {
            fn_801FDCE0(m->a4, m);
            u32 fl = d->fl;
            int b = isA(d);
            if (b && !(fl & 0x80)) {
                void *q = m->a4->a8;
                T *t = (T *)((T *)(b ? d->d36 : 0))->t12;
                fn_802037EC(e->s152, q);
                e->h160 = h;
                if (t) {
                    fn_800BAC40(t, h, t->a4);
                    fn_80202958(e, t, h, 0);
                    fn_802021A8(e, x);
                } else {
                    fn_800C7240(h);
                    e->h160 = 0;
                }
            } else if (fl & 0x800) {
                S16 s;
                char buf[256];
                char buf2[256];
                fn_80205454(e->s152, m->a4->a8);
                fn_80201F5C(e, d, e);
                e->h456 = h;
                fn_800C9A68(h, 1);
                s.c = 0x8000;
                s.d = 4096;
                s.a = 0;
                s.b = 0;
                fn_80205198(e->s152, &s);
                strcpy(buf, d->d36->name);
                fn_80210CFC(buf2, buf);
                if (fn_800BD3AC(buf2, e->a264)) {
                    fn_800BD3AC(buf2, e->a324);
                    fn_800BD3AC(buf2, e->a384);
                    fn_80202958(e, fn_800BAC18(d->d36->a8, 0), h, 0);
                    fn_802021A8(e, x);
                } else {
                    fn_800C7240(h);
                    e->h456 = 0;
                }
            } else if (b && (fl & 0x80)) {
                void *a;
                G *g;
                T *t;
                fn_802069AC(e->s152, m->a4->a8);
                e->h172 = h;
                a = d->a16;
                g = fn_80203850(a, d->a20);
                { s32 ix = fn_80201714(g->a96); t = fn_800BAC18(fn_80203840(a, g->tbl[ix]), 0); }
                if (t) {
                    fn_800BAC40(t, h, t->a4);
                    fn_80202958(e, t, h, g);
                    e->e168 = e;
                    fn_802021A8(e, x);
                } else {
                    fn_800C7240(h);
                    e->h172 = 0;
                }
            }
        }
    }
}

} /* extern "C" */
