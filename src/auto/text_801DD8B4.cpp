// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
struct N {
    u8 pad[0x80];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual u32 type();
    u8 q[0x11c - 0x84]; N *parent; u8 r[0x134 - 0x120]; N *next; N *child;
};
extern "C" void fn_801DD8B4(N *p, N *c) {
    N *n;
    c->parent = p;
    if (p->child == 0) {
        p->child = c;
        return;
    }
    for (n = p->child; n->next != 0; n = n->next) {
        if (n->next->type() == 95) break;
    }
    c->next = n->next;
    n->next = c;
}

} /* extern "C" */
