// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
extern u8 lbl_803286D0[];
extern u32 lbl_80363878, lbl_80363870;
struct Nd { Nd *parent; Nd *next; Nd *child; u32 p0; void *b; void *a; u32 p1; u32 key; u32 fl; };
inline void fn_801043B0(void *a, void *b, void *c) { (*(void (**)(void *, void *, void *))(lbl_803286D0 + 364))(a, b, c); }
#pragma inline_depth(2)
int fn_801044C4(Nd *n, void *x, u32 k) {
    Nd *c;
    if (!n->parent) {
        if (!(n->fl & 2) && k == n->key) return 0;
        n->key = k;
        fn_801043B0(n->a, n->b, x);
    } else {
        fn_801044C4(n->parent, x, k);
        if (!(n->fl & 2) && k == n->key) return 0;
        n->key = k;
        fn_801043B0(n->a, n->b, n->parent->a);
    }
    for (c = n->child; c; c = c->next) c->fl |= lbl_80363878;
    n->fl |= lbl_80363870;
    n->fl &= ~2;
    return 2;
}

} /* extern "C" */
