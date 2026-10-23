// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct ND9378 { u8 pad[0x6c]; u32 f6c; u8 pad70[0xb8 - 0x70]; ND9378 *flink; };
inline s32 fn_801C1760(ND9378 *n) { return (n->f6c & 2) != 0; }

ND9378 *fn_801D9378(ND9378 *slow, ND9378 *cur, void *x) {
    ND9378 *a = cur->flink;
    if (!a || fn_801C1760(a)) return a;
    a = a->flink;
    if (!a || fn_801C1760(a)) return a;
    slow = slow->flink;
    if (slow == a) return 0;
    return fn_801D9378(slow, a, x);
}

} /* extern "C" */
