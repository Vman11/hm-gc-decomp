// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

f32 fn_800FB2E0(void *);
void fn_8017B580(void *, void *, void *, void *, u32);

void fn_8019F820(u8 *p, void *a, void *b, void *s, u32 c) {
    if (c == 65) {
        *(f32 *)(p + 0x14) = fn_800FB2E0(s);
    } else {
        fn_8017B580(p, a, b, s, c);
    }
}
