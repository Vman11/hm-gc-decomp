// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct ND9B10 { u8 pad[0x6c]; u32 f6c; u8 pad70[0x90 - 0x70]; ND9B10 *flink; };
inline s32 fn_801C1760(ND9B10 *n) { return (n->f6c & 2) != 0; }

ND9B10 *fn_801D9B10(ND9B10 *slow, ND9B10 *cur, void *x) {
    ND9B10 *a = cur->flink;
    if (!a || fn_801C1760(a)) return a;
    a = a->flink;
    if (!a || fn_801C1760(a)) return a;
    slow = slow->flink;
    if (slow == a) return 0;
    return fn_801D9B10(slow, a, x);
}

} /* extern "C" */
