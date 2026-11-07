#include "common.h"
extern "C" {
int strncmp(const char *, const char *, u32);
typedef struct { char *tbl; u8 p[0xc]; s32 n; } T;
}
#pragma opt_strength_reduction off
static inline s32 search(T *t, const char *name) {
    s32 lo;
    char *tbl;
    s32 mid;
    s32 n;
    s32 step;
    s32 r;
    n = t->n;
    lo = 0;
    tbl = t->tbl;
    step = (u32)n >> 2;
    mid = (u32)n >> 1;
    while ((u32)step > 5) {
        r = strncmp(tbl + mid * 8, name, 8);
        if (r == 0) return mid;
        if (r < 0) {
            if (lo < mid) lo = mid;
            mid += step;
        } else {
            mid -= step;
        }
        step /= 2;
    }
    for (; lo < n; lo++) {
        r = strncmp(tbl + lo * 8, name, 8);
        if (r == 0) return lo;
        if (r > 0) return -1;
    }
    return -1;
}
extern "C" s32 fn_8021263C(T *t, const char *name) {
    if (name[0] == 0) return -1;
    return search(t, name);
}
