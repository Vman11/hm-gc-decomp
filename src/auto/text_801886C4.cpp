// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct B_801886C4;
struct O_801886C4;
struct L_801886C4;

struct X_801886C4 {
    u8 pad0[12];
    virtual void v0();
    virtual void Add(L_801886C4 *, O_801886C4 *);
    virtual void Hit(B_801886C4 *, O_801886C4 *, u32, u32, u32);
    virtual void Hit2(B_801886C4 *, O_801886C4 *, u32, u32);
    virtual void Release(B_801886C4 *);
};

struct I_801886C4 {
    X_801886C4 *o;
    u32 x;
};

struct E_801886C4 {
    u32 n;
    I_801886C4 items[7];
    u32 pad;
};

struct L_801886C4 {
    u32 count;
    E_801886C4 *arr;
};

struct O_801886C4 {
    u32 flags;
    u8 pad4[20];
    f32 pos[3];
    f32 radius;
    u8 pad28[64];
    virtual void v0();
    virtual void v1();
    virtual void Update();
    virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22();
    virtual void v23();
    virtual void Notify(u32, u32);
    X_801886C4 *f6c;
    u8 pad70[12];
    X_801886C4 *f7c;
};

struct N_801886C4 {
    f32 min;
    f32 max;
    u8 pad8[4];
    O_801886C4 *obj;
    u8 pad10[8];
    N_801886C4 *next;
};

struct A_801886C4 {
    u8 pad0[16];
    s32 axis;
    N_801886C4 *list;
    u8 pad18[12];
    L_801886C4 l24;
};

struct B_801886C4 {
    u8 pad0[8];
    u32 f8;
    u8 padc[528];
    L_801886C4 l21c;
    L_801886C4 l224;
    s32 f22c;
};

void fn_8018EE6C(L_801886C4 *, L_801886C4 *);
f32 fn_8010155C(f32 *, f32 *);
void *memset(void *, int, unsigned long);

static inline void Reset(E_801886C4 *e, B_801886C4 *b)
{
    if (e->n) {
        e->items[0].o->Release(b);
        e->n = 0;
        e->n = 0;
        memset(e->items, 0, sizeof(e->items));
    }
}

static inline void ResetAll(B_801886C4 *b)
{
    if (b->f22c == 0) {
        u32 i;
        for (i = 0; i < b->l224.count; i++) {
            Reset(&b->l224.arr[i], b);
        }
        b->f22c = 1;
    }
}

void fn_801886C4(A_801886C4 *a, B_801886C4 *b, O_801886C4 *c)
{
    s32 found;
    L_801886C4 *m;
    u32 i;
    f32 hi;
    u32 j;
    E_801886C4 *e;
    f32 lo;
    L_801886C4 *l;
    N_801886C4 *n;

    if (!(c->flags & 0x2000)) {
        if (b->f22c == 0) {
            for (i = 0; i < b->l224.count; i++) {
                Reset(&b->l224.arr[i], b);
            }
            b->f22c = 1;
        }
        c->Notify(b->f8, 0);
        return;
    }
    n = a->list;
    found = 0;
    if (n == 0) {
        l = &a->l24;
    } else {
        switch (a->axis) {
        case 0:
            if (c->flags & 4) c->Update();
            lo = c->pos[0] - c->radius;
            hi = c->pos[0] + c->radius;
            break;
        case 1:
            if (c->flags & 4) c->Update();
            lo = c->pos[1] - c->radius;
            hi = c->pos[1] + c->radius;
            break;
        case 2:
            if (c->flags & 4) c->Update();
            lo = c->pos[2] - c->radius;
            hi = c->pos[2] + c->radius;
            break;
        default:
            l = 0;
            goto done;
        }
        l = &a->l24;
        do {
            O_801886C4 *o;
            if (n->min > hi) break;
            if (n->max >= lo) {
                o = n->obj;
                if ((o->flags & 0x800) && o->f6c) {
                    f32 r;
                    if (o->flags & 4) o->Update();
                    if (c->flags & 4) c->Update();
                    r = o->radius + c->radius;
                    r = r * r;
                    if (fn_8010155C(c->pos, o->pos) <= r) {
                        if (!found) {
                            l = &b->l21c;
                            fn_8018EE6C(l, &a->l24);
                            found = 1;
                        }
                        o->f6c->Add(l, o);
                    }
                }
            }
            n = n->next;
        } while (n);
    }
done:
    m = l;
    if (c->f7c && !(*(u32 *)c->f7c & 2)) {
        if (l == &a->l24) {
            fn_8018EE6C(m = &b->l21c, &a->l24);
        }
        c->f7c->Add(m, c);
    }
    for (i = 0; i < m->count; i++) {
        e = &m->arr[i];
        if (e->n) {
            for (j = 0; j < e->n; j++) {
                e->items[j].o->Hit(b, c, j, e->n, e->items[j].x);
            }
        } else if (b->f22c == 0) {
            e = &b->l224.arr[i];
            if (e->n) {
                e->items[0].o->Release(b);
                e->n = 0;
                e->n = 0;
                memset(e->items, 0, sizeof(e->items));
            }
        }
    }
    c->Notify(b->f8, 0);
    for (i = 0; i < m->count; i++) {
        e = &m->arr[i];
        if (e->n) {
            for (j = 0; j < e->n; j++) {
                e->items[j].o->Hit2(b, c, j, e->n);
            }
        }
    }
    b->f22c = 0;
}

} /* extern "C" */
