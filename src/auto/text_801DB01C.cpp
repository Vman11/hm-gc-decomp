// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct B80 { u8 pad[0x80]; };
struct N37 : B80 {
virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); 
    virtual u32 v19();
    u8 p84[0x11c - 0x84]; N37 *parent; u8 p120[0x134 - 0x120]; N37 *next; N37 *child;
};
N37 *fn_800F80DC(void *name, void *b, s32 c);
static inline void Remove(N37 *par, N37 *p) {
    p->parent = 0;
    if (par->child == 0) { p->next = 0; return; }
    if (par->child == p) { par->child = par->child->next; p->next = 0; return; }
    for (N37 *c = par->child; c->next != 0; c = c->next) {
        if (c->next == p) { c->next = p->next; break; }
    }
    p->next = 0;
}
static inline void Add(N37 *par, N37 *p) {
    p->parent = par;
    N37 *c = par->child;
    if (c == 0) { par->child = p; return; }
    for (; c->next != 0; c = c->next) {
        if (c->next->v19() == 0x5f) break;
    }
    p->next = c->next;
    c->next = p;
}
void fn_801DB01C(N37 *p, void *b, void *name) {
    if (p->parent != 0) {
        Remove(p->parent, p);
        p->parent = 0;
    }
    p->parent = fn_800F80DC(name, b, 0);
    if (p->parent != 0) Add(p->parent, p);
}

} /* extern "C" */
