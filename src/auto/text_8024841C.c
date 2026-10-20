// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8026AF6C(int, int, int, int);


} /* extern "C" */


void fn_8024841C(u8 *p, void *a) {
    u32 off = 0;
    s32 i;
    for (i = 0; i < *(s32 *)(p + 36); i++) {
        fn_8026AF6C(*(void **)(p + 20), p, *(u8 **)(p + 40) + off, a);
        off += 4;
    }
}
