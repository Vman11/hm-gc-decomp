// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

f32 fn_800FB2E0(void *);
void fn_801DCA84(void *, s32, void *, void *);

void fn_801AE958(u8 *p, s32 a, void *b, void *c) {
    switch (a) {
    case 92:
        *(f32 *)(p + 356) = fn_800FB2E0(c);
        *(f32 *)(p + 360) = fn_800FB2E0(c);
        *(f32 *)(p + 364) = fn_800FB2E0(c);
        *(f32 *)(p + 368) = fn_800FB2E0(c);
        break;
    default:
        fn_801DCA84(p, a, b, c);
        break;
    }
}

} /* extern "C" */
