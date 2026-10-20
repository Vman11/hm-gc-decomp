// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_800FB33C(int);


} /* extern "C" */


void fn_8021C644(u8 *p, void *a) {
    u32 off = 0;
    u32 i;
    for (i = 0; i < *(u32 *)(p + 12); i++) {
        *(u16 *)(*(u8 **)(p + 20) + off) = fn_800FB33C(a);
        off += 2;
    }
}
