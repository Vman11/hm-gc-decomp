/* Functions from 0x80101624 to 0x80101664, found by decomp-toolkit. */
#include "common.h"

extern "C" {

static inline f32 lerp(f32 a, f32 b, f32 t) {
    return t * (b - a) + a;
}

void fn_80101624(f32 *__restrict o, f32 *__restrict a, f32 *__restrict b, f32 t) {
    o[0] = t * (b[0] - a[0]) + a[0];
    o[1] = t * (b[1] - a[1]) + a[1];
    o[2] = t * (b[2] - a[2]) + a[2];
}

} /* extern "C" */
