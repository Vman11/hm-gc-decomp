// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
extern u8 lbl_803286D0[];
extern u32 lbl_80363880, lbl_80363870;
struct Nd { Nd *parent; Nd *next; Nd *child; u32 p0; void *b; void *a; u32 p1, p2; u32 fl; };
inline void fn_80104B48(void *a, void *b) { (*(void (**)(void *, void *))(lbl_803286D0 + 0))(a, b); }
inline void fn_801043B0(void *a, void *b, void *c) { (*(void (**)(void *, void *, void *))(lbl_803286D0 + 364))(a, b, c); }
#pragma inline_depth(3)
int fn_80104870(Nd *n) {
    Nd *c;
    if (!n->parent) {
        if (!(n->fl & 1)) return 0;
        fn_80104B48(n->a, n->b);
    } else {
        fn_80104870(n->parent);
        if (!(n->fl & 1)) return 0;
        fn_801043B0(n->a, n->b, n->parent->a);
    }
    for (c = n->child; c; c = c->next) c->fl |= lbl_80363880;
    n->fl |= lbl_80363870;
    n->fl &= ~1;
    return 1;
}

} /* extern "C" */
