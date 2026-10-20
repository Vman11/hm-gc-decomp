// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 fn_800F80DC(int, int, int);
void fn_800F85DC(int, int, int);
void fn_800F87F0(int, int, int);


} /* extern "C" */


void fn_801C0614(void *p, void *b, void *c) {
    u32 x;
    if (fn_800F80DC(c, b, &x) == NULL) {
        fn_800F87F0(c, b, p);
    } else {
        fn_800F85DC(c, x, p);
    }
}
