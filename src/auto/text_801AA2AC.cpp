// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB064(void *, void *);
void fn_801C068C(void *, void *, void *, void *);
u32 fn_800FB33C(void *);
void fn_801DCA84(void *, s32, void *, void *);

void fn_801AA2AC(u8 *p, s32 a, void *b, void *c) {
    u8 buf[8];
    switch (a) {
    case 117:
        fn_800FB064(c, buf);
        fn_801C068C(p, b, p + 368, buf);
        break;
    case 138:
        fn_800FB064(c, buf);
        fn_801C068C(p, b, p + 372, buf);
        break;
    case 73:
        fn_800FB064(c, buf);
        fn_801C068C(p, b, p + 376, buf);
        break;
    case 143:
        *(u32 *)(p + 356) = fn_800FB33C(c);
        break;
    default:
        fn_801DCA84(p, a, b, c);
        break;
    }
}

} /* extern "C" */
