// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
extern u32 lbl_80363878, lbl_80363870;
struct Nd { Nd *parent; Nd *next; Nd *child; void *p12; void *b; void *a; void *p24; void *key; u32 fl; };
inline void fn_801043B0(void *a, void *b, void *c) { (*(void (**)(void *, void *, void *))(lbl_803286D0 + 364))(a, b, c); }
#pragma inline_depth(3)
void fn_801040E0(Nd *n, void *a, void *key, u32 fl) {
    Nd *c;
    n->fl |= fl;
    if ((n->fl & 2) || key != n->key) {
        n->fl |= lbl_80363878;
        n->key = key;
        fn_801043B0(n->a, n->b, a);
    }
    for (c = n->child; c; c = c->next) fn_801040E0(c, n->a, key, n->fl);
    n->fl |= lbl_80363870;
    n->fl &= ~2;
    if (n->p12) fn_801043B0(n->p24, n->p12, n->a);
}

} /* extern "C" */
