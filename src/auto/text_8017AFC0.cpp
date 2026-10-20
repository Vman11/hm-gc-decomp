// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80103B64(void *, void *);

void fn_8017AFC0(u8 *p, u8 *q) {
    fn_80103B64(p, q);
    *(f32 *)(p + 40) = *(f32 *)(q + 40);
    *(u32 *)(p + 44) = *(u32 *)(q + 44);
    *(u32 *)(p + 48) = *(u32 *)(q + 48);
    *(u32 *)(p + 52) = *(u32 *)(q + 52);
    *(u32 *)(p + 56) = *(u32 *)(q + 56);
}

} /* extern "C" */
