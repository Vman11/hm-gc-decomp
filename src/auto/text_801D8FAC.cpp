// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct N1D8 { u8 pad[0x6c]; u32 f6c; u8 pad70[0xcc - 0x70]; N1D8 *fcc; };
inline s32 fn_801C1760(N1D8 *n) { return (n->f6c & 2) != 0; }

N1D8 *fn_801D8FAC(N1D8 *slow, N1D8 *cur, void *x) {
    N1D8 *a = cur->fcc;
    if (!a || fn_801C1760(a)) return a;
    a = a->fcc;
    if (!a || fn_801C1760(a)) return a;
    slow = slow->fcc;
    if (slow == a) return 0;
    return fn_801D8FAC(slow, a, x);
}

} /* extern "C" */
