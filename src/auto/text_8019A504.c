// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8018846C(int, int, int);


} /* extern "C" */


void fn_8019A504(u8 *p, void *a, void *b) {
    u8 *e = *(u8 **)(p + 60);
    u8 *end = e + *(u32 *)(p + 56) * 44;
    for (; e < end; e += 44) {
        fn_8018846C(e, a, b);
    }
}
