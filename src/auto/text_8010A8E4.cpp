// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8010C3BC(void *, void *, void *);
f32 fn_800FB2E0(void *);

s32 fn_8010A8E4(u8 *p, void *a, void *s) {
    fn_8010C3BC(p, a, s);
    *(f32 *)(p + 0xC) = fn_800FB2E0(s);
    return 0;
}

} /* extern "C" */
