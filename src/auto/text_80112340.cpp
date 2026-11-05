// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
struct N { u8 pad[0x1e0]; N *next; };
struct L { s32 a, b; N *head; };
s32 *fn_80110444(N *n, s32 k, s32 z);
static inline s32 *find(N *n, s32 k) {
    for (; n != 0; n = n->next) {
        s32 *r = fn_80110444(n, k, 0);
        if (r != 0) return r;
    }
    return 0;
}
s32 *fn_80112340(L * __restrict l, s32 k) {
    return find(l->head, k);
}
}
