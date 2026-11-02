// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Nd { Nd *parent; Nd *child; Nd *next; Nd *prev; u32 f16; u32 a; u32 f24; u32 f28; u32 c; u32 e; u32 d; };
struct Blk { Nd *nodes; Blk *next; };
struct P { u8 pad[356]; s32 dirty; Blk *blks; Nd *free; u8 pad368[4]; u32 grow; u8 pad376[372]; Nd *root; u8 pad752[100]; s32 cnt; };
extern void *lbl_8035AFCC;
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
static inline void Link(Blk *b, u32 n) {
    u32 i;
    for (i = 0; i < n - 1; i++) b->nodes[i].next = &b->nodes[i + 1];
}
Nd *fn_801D52A0(P *p, u32 a, Nd *parent, u32 c, u32 d, u32 e) {
    Nd *n;
    p->cnt++;
    if (p->free == 0) {
        u32 cnt = p->grow;
        Blk *b;
        if (!lbl_8035AFCC) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AFCC);
        b = new Blk;
        fn_800F7E98();
        if (!b) fn_800604C4(-4, 0, 0, 0);
        b->next = p->blks;
        if (!lbl_8035AFCC) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AFCC);
        b->nodes = new Nd[cnt];
        fn_800F7E98();
        if (!b->nodes) fn_800604C4(-4, 0, 0, 0);
        p->blks = b;
        Link(b, cnt);
        b->nodes[cnt - 1].next = p->free;
        p->free = b->nodes;
    }
    n = p->free;
    p->free = n->next;
    n->next = 0;
    n->a = a;
    n->f24 = 0;
    n->f28 = 0;
    n->child = 0;
    n->next = 0;
    n->prev = 0;
    n->f16 = 0;
    n->parent = parent;
    n->e = e;
    n->d = d;
    n->c = c;
    if (!parent) {
        if (!p->root) p->root = n;
        else {
            Nd *t = p->root;
            while (t->next) t = t->next;
            n->prev = t;
            t->next = n;
        }
    } else {
        Nd *t = parent->child;
        if (!t) parent->child = n;
        else {
            while (t->next) t = t->next;
            n->prev = t;
            t->next = n;
        }
    }
    p->dirty = 1;
    return n;
}

} /* extern "C" */
