// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

double fn_800EFE78(double x);
typedef struct {
    u8 pad[20];
    u16 *arr;
} P;

int fn_8021C38C(P *p, int start, int n, f32 x) {
    u16 *lo, *hi, *a, *b, *mid; int t;
    t = (f32)fn_800EFE78(x);
    lo = &p->arr[start];
    hi = lo + n - 1;
    if (t < *lo || t >= *hi) return n - 1;
    a = lo;
    b = hi;
    while (a + 1 != b) {
        mid = a + ((b - a) >> 1);
        if (*mid > t) b = mid; else a = mid;
    }
    return a - lo;
}

} /* extern "C" */
