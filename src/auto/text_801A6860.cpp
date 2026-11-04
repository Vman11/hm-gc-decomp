// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct N801A6860 { u8 pad[8]; struct N801A6860 *next; } N801A6860;
void *fn_801A53C0(N801A6860 *n, s32 a, s32 b);
void *fn_801A6860(N801A6860 * __restrict l, s32 a, s32 b) {
    N801A6860 *n;
    for (n = l->next; n != 0; n = n->next) {
        void *r = fn_801A53C0(n, a, b);
        if (r != 0) return r;
    }
    return 0;
}

} /* extern "C" */
