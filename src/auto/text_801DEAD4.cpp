#include "common.h"

struct N { void *key; u8 p[16]; N *next; };
struct X { u8 p[72]; N *head; };
struct Q { u8 p[216]; void *key; };
struct O { u8 p[8]; Q *q; u8 r[36 - 12]; u32 fl; void *a; void *b; };
extern "C" {
X *fn_8019565C(void *);
void fn_8019B7E8(void *, X *);
void fn_801DEAD4(O *o) {
    void *key = o->q->key;
    X *x = fn_8019565C(o->b ? o->b : o->a);
    if (o->fl & 2) {
        N *n = x->head;
        while (n) { if (n->key == key) return; n = n->next; }
        fn_8019B7E8(key, x);
    }
}
}
