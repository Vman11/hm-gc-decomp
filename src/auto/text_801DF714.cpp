// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct E19 { u8 pad[0x10]; u32 id; u8 pad2[0x3c - 0x14]; };
struct T19 { u8 pad[0xac]; s32 n; E19 *e; };
struct P19 { s32 f0; u32 fl; u8 pad[0x20 - 8]; void *h; u8 p24[4]; s32 idx; u32 id; u8 p30[0x50 - 0x30]; s32 st; };
T19 *fn_8019556C(void *h);
void fn_801EB698(P19 *p);
static inline int Has(P19 *p) {
    T19 *t = fn_8019556C(p->h);
    s32 lo, hi;
    if (t == 0) return 0;
    if (p->idx >= 0) {
        lo = p->idx; hi = lo;
    } else {
        lo = 0;
        hi = t->n - 1;
    }
    for (u32 i = lo; i <= (u32)hi; i++) {
        E19 *e = &t->e[i];
        if (e->id == p->id) return 1;
    }
    return 0;
}
void fn_801DF714(P19 *p) {
    if ((p->fl & 1) && p->st == 1) {
        if (Has(p)) fn_801EB698(p);
    }
}

} /* extern "C" */
