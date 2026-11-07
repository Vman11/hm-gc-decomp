#include "common.h"
extern "C" {
struct S;
struct N { N *next; N *prev; s32 a8; s32 c12; u32 b16; void *q20; S *s24; };
struct S {
    u8 pad0[0x20];
    N *free32;
    N *tail36;
    u8 pad28[0x10];
    N **list56;
    u8 pad3c[4];
    u32 n64;
};
s32 fn_8011DDE0(void *, N *);
void fn_80118FC4(N ***, N *);
static inline N *find(S *p, void *q, s32 a, u32 b) {
    u32 i;
    for (i = 0; i < p->n64; i++) {
        N *e = p->list56[i];
        if (e->q20 == q && e->a8 == a && e->b16 == b) return e;
    }
    return 0;
}
void fn_8011CD28(S *p, void *q, s32 a, s32 c, u32 b) {
    if (!find(p, q, a, b)) {
        N *n = p->free32;
        if (n) {
            if ((p->free32 = n->next) != 0) p->free32->prev = 0;
            else p->tail36 = 0;
        }
        n->q20 = q;
        n->a8 = a;
        n->b16 = b;
        n->s24 = p;
        if (fn_8011DDE0(q, n)) {
            fn_80118FC4(&p->list56, n);
        } else {
            if ((n->next = p->free32) != 0) p->free32->prev = n;
            else p->tail36 = n;
            p->free32 = n;
            n->prev = 0;
        }
    }
}
}
