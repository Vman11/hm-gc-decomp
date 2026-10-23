// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct T278 { u8 pad[4]; T278 *f4; T278 *f8; u8 padc[4]; T278 *f10; u8 pad14[8]; s32 f1c; };
struct P278 { u8 pad[0x314]; T278 *f314; };

inline void fn_801D2984(P278 *p, T278 *x) {
    T278 *prev = 0;
    T278 *cur;
    if (!x->f1c) return;
    cur = p->f314;
    if (cur == x) {
        p->f314 = cur->f10;
        x->f10 = 0;
        x->f1c = 0;
        return;
    }
    while (cur != x && cur) {
        prev = cur;
        cur = cur->f10;
    }
    if (cur) {
        prev->f10 = x->f10;
        x->f10 = 0;
        x->f1c = 0;
    }
}

void fn_801D2780(P278 *p, T278 *n) {
    T278 *c;
    for (c = n->f4; c; c = c->f8) {
        if (c->f1c) fn_801D2984(p, c);
        if (c->f4) fn_801D2780(p, c);
    }
}

} /* extern "C" */
