// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" {

u32 fn_800F80DC(int, int, int);
void fn_800F85DC(int, int, int);
void fn_800F87F0(int, int, int);


void fn_801C0614(int a, int b, int c) {
    int t;
    if (fn_800F80DC(c, b, (int)&t) == 0) fn_800F87F0(c, b, a);
    else fn_800F85DC(c, t, a);
}

} /* extern "C" */

} /* extern "C" */
