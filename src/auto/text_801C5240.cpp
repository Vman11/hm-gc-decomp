// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB064(void *, void *);
void fn_801C068C(void *, void *, void *, void *);
void fn_801DCA84(void *, s32, void *);

void fn_801C5240(u8 *p, s32 a, void *b, void *c) {
    u8 buf[8];
    switch (a) {
    case 77:
        fn_800FB064(c, buf);
        fn_801C068C(p, b, p + 364, buf);
        break;
    case 89:
        fn_800FB064(c, buf);
        fn_801C068C(p, b, p + 360, buf);
        break;
    case 90:
        fn_800FB064(c, buf);
        fn_801C068C(p, b, p + 356, buf);
        break;
    default:
        fn_801DCA84(p, a, b);
        break;
    }
}

} /* extern "C" */
