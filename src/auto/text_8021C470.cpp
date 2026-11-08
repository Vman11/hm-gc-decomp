#include "common.h"

// Keyframe bracket search. NonMatching (DIFF 28, SDIFF 0): only arr(r6)/first(r5) volatile regs swapped.
extern "C" {
f64 fn_800EFE78(f64 x);
typedef struct { u8 pad[0x14]; u16 *f14; } T_8021C470;

void fn_8021C470(T_8021C470 *t, s32 start, s32 n, s32 base, s32 *i0, s32 *i1, f32 *frac, f32 x) {
    u16 *arr;
    u16 *lo;
    u16 *mid;
    f32 num;
    u16 *hi;
    s32 first;
    s32 d;
    s32 den;
    u16 *last;
    s32 k;
    k = (f32)fn_800EFE78(x);
    arr = t->f14 + start;
    first = arr[0];
    last = arr + n - 1;
    if (k < first) {
        d = base - *last;
        num = x + (f32)d;
        den = first + d;
        *i0 = n - 1;
        *i1 = 0;
    } else if (k >= *last) {
        num = x - (f32)(s32)*last;
        den = (base - *last) + first;
        *i0 = n - 1;
        *i1 = 0;
    } else {
        lo = arr;
        hi = last;
        while (lo + 1 != hi) {
            mid = lo + ((hi - lo) >> 1);
            if (*mid > k) {
                hi = mid;
            } else {
                lo = mid;
            }
        }
        num = x - (f32)(s32)*lo;
        den = *hi - *lo;
        *i0 = lo - arr;
        *i1 = hi - arr;
    }
    *frac = num / (f32)den;
}
}
