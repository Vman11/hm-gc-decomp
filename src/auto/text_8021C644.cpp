// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" {

s32 fn_800FB33C(int);


struct P { u8 p[12]; u32 n; u32 p10; u16 *arr; };
void fn_8021C644(P *p, int a) {
    u32 i;
    for (i = 0; i < p->n; i++) p->arr[i] = fn_800FB33C(a);
}

} /* extern "C" */

} /* extern "C" */
