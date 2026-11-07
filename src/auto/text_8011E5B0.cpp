// NonMatching (wRE): SDIFF 0 / DIFF 26 register-only (2nd-loop Fire(s,i,0): n/k colour swap).
#include "common.h"
struct S;
struct Ev { S *owner; s32 z1; s32 id; s32 arg; s32 state; s32 b0; s32 flag; };
struct Lis { virtual void on(Ev *e); virtual void off(Ev *e); };
struct Nd { Nd *next; Nd *prev; u8 pad8[4]; s32 key; s32 arg; u8 pad14[4]; Lis *obj; };
struct LH { Nd *first; Nd *last; };
struct ID { s32 id; s32 pad; };
struct S {
    u32 n0; u8 pad4[0x34]; Lis **ls; u8 pad3c[4]; u32 nls; u8 pad44[8]; ID *ids; u8 pad50[0x28];
    s32 *cur; s32 *prev; u8 pad80[0x14]; LH *lists; u8 pad98[0x10]; u32 lim; u32 n1; s32 b0;
};
extern "C" {
static inline void *List(S *s, u32 i) { if (i < s->lim) return &s->lists[i]; return 0; }
static inline void All(S *s, u32 n, Ev *e) {
    u32 k;
    for (k = 0; k < n; k++) {
        Lis *l = s->ls[k];
        if (e->state != 0) l->on(e);
        else l->off(e);
    }
}
static inline void Fire(S *s, u32 i, s32 state) {
    u32 n;
    LH *lh;
    Ev e;
    u32 k;
    u8 f;
    lh = (LH *)List(s, i);
    n = s->nls;
    e.owner = s;
    e.z1 = 0;
    e.id = s->ids[i].id;
    e.arg = 0;
    e.state = state;
    e.b0 = s->b0;
    f = 0;
    if (s->cur[i] == s->prev[i] && state != 0) f = 1;
    e.flag = f != 0;
    All(s, n, &e);
    if (lh) {
        Nd *nd = lh->first;
        while (nd) {
            if (nd->key == e.state) {
                e.arg = nd->arg;
                if (e.state == 0) nd->obj->off(&e);
                else nd->obj->on(&e);
            }
            if (nd) nd = nd->next;
            else nd = lh->first;
        }
    }
}
/* same as Fire but lh declared before n (register colouring) */
static inline void FireB(S *s, u32 i, s32 state) {
    LH *lh;
    u32 n;
    Ev e;
    u32 k;
    u8 f;
    lh = (LH *)List(s, i);
    n = s->nls;
    e.owner = s;
    e.z1 = 0;
    e.id = s->ids[i].id;
    e.arg = 0;
    e.state = state;
    e.b0 = s->b0;
    f = 0;
    if (s->cur[i] == s->prev[i] && state != 0) f = 1;
    e.flag = f != 0;
    All(s, n, &e);
    if (lh) {
        Nd *nd = lh->first;
        while (nd) {
            if (nd->key == e.state) {
                e.arg = nd->arg;
                if (e.state == 0) nd->obj->off(&e);
                else nd->obj->on(&e);
            }
            if (nd) nd = nd->next;
            else nd = lh->first;
        }
    }
}
void fn_8011E5B0(S *s) {
    u32 i;
    s32 a, b;
    for (i = 0; i < s->n0; i++) {
        if (i < s->lim) { a = s->cur[i]; b = s->prev[i]; } else { a = b = 0; }
        if (a != b) Fire(s, i, a);
    }
    for (i = s->n0; i < s->n0 + s->n1; i++) {
        if (i < s->lim) { a = s->cur[i]; b = s->prev[i]; } else { a = b = 0; }
        if (a != b) {
            if (b != 0) Fire(s, i, 0);
            if (a != 0) FireB(s, i, a);
        }
    }
}
}
