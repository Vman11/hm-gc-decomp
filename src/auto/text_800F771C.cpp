// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct E { u8 *base; u32 p4; u32 size; u8 pc[28]; } E;
typedef struct H { u8 p[12]; E e[16]; } H;
void fn_800F7138(E *, void *);
int fn_800F771C(H *h, u8 *p) {
    E *e;
    for (e = h->e; e < h->e + 16; e++) {
        if (e->size && p >= e->base && p < e->base + e->size) { fn_800F7138(e, p); return 1; }
    }
    return 0;
}

} /* extern "C" */
