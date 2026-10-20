// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB064(void *, void *);
void fn_801C068C(void *, void *, void *, void *);
void *fn_801AAA08(void *, s32, void *, void *);
void fn_801DCA84(void *, s32, void *, void *);

void fn_801B2864(u8 *p, s32 a, void *b, void *c) {
    u8 b16[16];
    u8 b8[8];
    switch (a) {
    case 140:
        fn_800FB064(c, b16);
        fn_801C068C(p, b, p + 404, b16);
        break;
    case 139:
        fn_800FB064(c, b16);
        fn_800FB064(c, b8);
        *(void **)(p + 412) = fn_801AAA08(*(void **)(p + 116), 9, b16, b8);
        break;
    default:
        fn_801DCA84(p, a, b, c);
        break;
    }
}

} /* extern "C" */
