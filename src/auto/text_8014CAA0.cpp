// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { u32 a, b; u8 mid[20]; u32 c, d; } S8014CAA0;
void fn_801482DC(void *dst, const void *src);
void fn_8014CAA0(S8014CAA0 *dst, const S8014CAA0 *src) {
    dst->a = src->a;
    dst->b = src->b;
    fn_801482DC(dst->mid, src->mid);
    dst->c = src->c;
    dst->d = src->d;
}

} /* extern "C" */
