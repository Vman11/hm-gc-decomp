// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801748B0(int, int);


} /* extern "C" */


void fn_8016E400(u8 *p, void *a) {
    u32 off = 0;
    u32 i;
    for (i = 0; i < *(u16 *)(p + 18); i++) {
        fn_801748B0(*(u8 **)(p + 4) + off, a);
        off += 48;
    }
}
