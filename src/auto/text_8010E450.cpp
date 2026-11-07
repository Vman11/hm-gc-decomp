#include "common.h"

extern "C" {

struct Rng { u32 x0; u32 b; u32 e; };
struct Desc { u8 pad[8]; s32 type; };

struct EB {
    Desc *d;
    u32 x4;
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void *get(s32 i);
};
struct E : EB {
    Rng rc;
    u8 pad18[8];
    Rng r20;
    u8 pad2c[8];
    s32 f34;
};

struct TB {
    u8 pad[0x10];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void *row(u32 i);
};
struct Tbl : TB { u8 pad14[0xc]; u32 n; };

struct Sorter { Tbl *t; u32 *idx; };
struct Col { u8 name[0x10]; u32 n; };
struct Key { Col *c; s32 asc; };

typedef int (*CmpFn)(void *, void *, u32);

extern u32 lbl_8035A9F4;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
void *__nwa__FUl(u32);
void __dla__FPv(void *);
void fn_800F6E88(void *, void *);
E *fn_8010CE64(void *, void *);
int strncmp(void *, void *, u32);
int memcmp(void *, void *, u32);

static inline Rng *R(E *e) { return e->f34 ? &e->r20 : &e->rc; }

static inline E **Alloc(u32 sz) {
    E **r;
    if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    r = (E **)__nwa__FUl(sz);
    fn_800F7E98();
    if (r == 0) fn_800604C4(-4, 0, 0, 0);
    return r;
}

void fn_8010E450(Sorter *s, Key *k, CmpFn cmp) {
    u8 buf[8];
    u32 sw;
    u32 n;
    int doSw;
    u32 sz;
    u32 cn;
    E **p;
    u32 i;
    u32 size;
    s32 type;
    u32 m;
    u32 j1;
    u32 l1;
    Rng *r;
    u32 l;
    int c;
    u32 t;
    void *s1;
    u32 l2;
    E **arr;
    void *s2;
    cn = k->c->n;
    n = s->t->n;
    size = 0;
    fn_800F6E88(buf, k->c);
    arr = Alloc(n * 4);
    for (p = arr, i = 0; i < n; i++) *p++ = fn_8010CE64(s->t->row(i), buf);
    type = arr[0]->d->type;
    switch (type) {
    case 1: size = 4; break;
    case 2: size = 4; break;
    case 3: size = 4; break;
    case 4: size = 8; break;
    case 5: size = 0; break;
    case 6: size = cn * 4; break;
    case 7: size = cn; break;
    case 8: size = cn * 4; break;
    case 9: size = cn * 4; break;
    case 10: size = cn * 8; break;
    case 11: size = 0; break;
    }
    if (type == 5) {
        m = n - 1;
        sw = 1;
        while (sw) {
            for (i = 0, sw = 0, j1 = 1; i < m; i++, j1++) {
                doSw = 0;
                s1 = arr[s->idx[i]]->get(0);
                s2 = arr[s->idx[j1]]->get(0);
                r = R(arr[s->idx[i]]);
                l1 = r->e - r->b;
                r = R(arr[s->idx[j1]]);
                l2 = r->e - r->b;
                l = l2;
                if (l1 < l2) l = l1;
                if (k->asc) {
                    if (cmp) c = cmp(s1, s2, l); else c = strncmp(s1, s2, l);
                    if (c > 0 || (c == 0 && l1 > l2)) doSw = 1;
                } else {
                    if (cmp) c = cmp(s1, s2, l); else c = strncmp(s1, s2, l);
                    if (c < 0 || (c == 0 && l2 > l1)) doSw = 1;
                }
                if (doSw) {
                    sw++;
                    t = s->idx[i];
                    s->idx[i] = s->idx[j1];
                    s->idx[j1] = t;
                }
            }
        }
    } else {
        sz = size;
        n--;
        size = 1;
        while (size) {
            for (size = 0, i = 0, j1 = 1; i < n; i++, j1++) {
                doSw = 0;
                if (k->asc) {
                    switch (type) {
                    case 2:
                        if (*(s32 *)arr[s->idx[i]]->get(0) > *(s32 *)arr[s->idx[j1]]->get(0)) doSw = 1;
                        break;
                    case 3:
                        if (*(f32 *)arr[s->idx[i]]->get(0) > *(f32 *)arr[s->idx[j1]]->get(0)) doSw = 1;
                        break;
                    default:
                        if (memcmp(arr[s->idx[i]]->get(0), arr[s->idx[j1]]->get(0), sz) > 0) doSw = 1;
                        break;
                    }
                } else {
                    switch (type) {
                    case 2:
                        if (*(s32 *)arr[s->idx[i]]->get(0) < *(s32 *)arr[s->idx[j1]]->get(0)) doSw = 1;
                        break;
                    case 3:
                        if (*(f32 *)arr[s->idx[i]]->get(0) < *(f32 *)arr[s->idx[j1]]->get(0)) doSw = 1;
                        break;
                    default:
                        if (memcmp(arr[s->idx[i]]->get(0), arr[s->idx[j1]]->get(0), sz) < 0) doSw = 1;
                        break;
                    }
                }
                if (doSw) {
                    size++;
                    t = s->idx[i];
                    s->idx[i] = s->idx[j1];
                    s->idx[j1] = t;
                }
            }
        }
    }
    __dla__FPv(arr);
}

}
