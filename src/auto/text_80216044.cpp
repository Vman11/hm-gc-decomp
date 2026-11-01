// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" {

void fn_80207BF4(int, int);


typedef struct { u8 pad[0x5c]; u32 n; u8 pad60[4]; void **arr; } S80216044;
void fn_80216044(S80216044 *p, int b) {
    u32 i;
    for (i = 0; i < p->n; i++) fn_80207BF4((int)p->arr[i], b);
}

} /* extern "C" */

} /* extern "C" */
