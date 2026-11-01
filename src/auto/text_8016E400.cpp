// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" {

void fn_801748B0(int, int);


typedef struct { u8 d[0x30]; } E8016E400;
typedef struct { u8 pad[4]; E8016E400 *arr; u8 pad8[0xa]; u16 n; } S8016E400;
void fn_8016E400(S8016E400 *p, int b) {
    u32 i;
    for (i = 0; i < p->n; i++) fn_801748B0((int)&p->arr[i], b);
}

} /* extern "C" */

} /* extern "C" */
