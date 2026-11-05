// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

// fn_8014C4B4: NonMatching draft (DIFF 6, see hm-work/wA_8018D508): only the leaf prologue stw r29-r31 interleaving with the first loads differs.
struct S { u32 f0; u32 f4; u8 c8[4]; u32 n12; u8 d16[8]; u8 e24; u8 e25; };
static inline bool hdr(S *a, S *b) { return b->f0 == a->f0 && b->n12 == a->n12 && b->f4 == a->f4; }
u8 fn_8014C4B4(S *a, S *b) {
    if (hdr(a, b)) {
        u8 r = 1;
        r &= b->c8[0] == a->c8[0];
        r &= b->c8[1] == a->c8[1];
        r &= b->c8[2] == a->c8[2];
        r &= b->c8[3] == a->c8[3];
        r &= b->e24 == a->e24;
        r &= b->e25 == a->e25;
        for (int i = 0; i < a->n12; i++) r &= b->d16[i] == a->d16[i];
        return r;
    }
    return 0;
}

}
