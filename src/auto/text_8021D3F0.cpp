// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern f32 lbl_80365988;
typedef struct { u8 pad[40]; const u16 *f28; } S8021D3F0;
f64 fn_800EFE78(f64 x);
void fn_8021D3F0(const S8021D3F0 *p, s32 a, s32 n, s32 len, s32 *i0, s32 *i1, f32 *t, f32 f) {
    const u16 *base, *last, *lo, *hi, *mid;
    s32 k, diff;
    f32 num;
    s32 gap;
    k = (f32)fn_800EFE78(f);
    base = &p->f28[a];
    last = base + n - 1;
    if (k < *base) {
        gap = len - *last;
        num = f + (f32)gap;
        diff = gap + *base;
        *i0 = n - 1;
        *i1 = 0;
    } else if (k >= *last) {
        gap = len - *last;
        diff = gap + *base;
        num = f - (f32)(s32)*last;
        *i0 = n - 1;
        *i1 = 0;
    } else {
        lo = base;
        hi = last;
        while (lo + 1 != hi) {
            mid = lo + ((hi - lo) >> 1);
            if (*mid > k) hi = mid;
            else lo = mid;
        }
        diff = *hi - *lo;
        num = f - (f32)(s32)*lo;
        *i0 = lo - base;
        *i1 = hi - base;
    }
    if (diff == 0) *t = lbl_80365988;
    else *t = num / (f32)diff;
}

} /* extern "C" */
