// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80132BC0(int, int, int);
void fn_80217880(int, int);

typedef struct { u32 w0, w1; } Copy8;


} /* extern "C" */

typedef struct { u32 a, b, c; } T12_8015FA20;

void fn_8015FA20(u8 *p, void *a, u8 *q) {
    *(T12_8015FA20 *)(p + 88) = *(T12_8015FA20 *)(q + 88);
    *(u16 *)(p + 76) = *(u16 *)(q + 76);
    *(u32 *)(p + 80) = *(u32 *)(q + 80);
    fn_80217880(p + 60, q + 60);
    fn_80132BC0(p, a, q);
}
