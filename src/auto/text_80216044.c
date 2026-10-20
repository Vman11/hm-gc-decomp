// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80207BF4(int, int);


} /* extern "C" */


void fn_80216044(u8 *p, void *a) {
    u32 off = 0;
    u32 i;
    for (i = 0; i < *(u32 *)(p + 92); i++) {
        fn_80207BF4(*(void **)(*(u8 **)(p + 100) + off), a);
        off += 4;
    }
}
