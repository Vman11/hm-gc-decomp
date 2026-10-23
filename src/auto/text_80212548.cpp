// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    u8 pad[4];
    char *tab;
    u8 pad2[12];
    u32 count;
} S80212548;

s32 strncmp(const char *a, const char *b, u32 n);

static inline s32 Find80212548(S80212548 *self, char *key) {
    s32 lo;
    char *tab;
    s32 mid;
    s32 n;
    s32 step;
    s32 r;
    s32 i;
    n = self->count;
    lo = 0;
    tab = self->tab;
    step = (u32)n >> 2;
    mid = (u32)n >> 1;
    while (step > 5u) {
        r = strncmp(tab + mid * sizeof(u32), key, 4);
        if (r == 0) {
            return mid;
        }
        if (r < 0) {
            if (lo < mid) {
                lo = mid;
            }
            mid += step;
        } else {
            mid -= step;
        }
        step /= 2;
    }
    for (i = lo; i < n; i++) {
        r = strncmp(tab + i * sizeof(u32), key, 4);
        if (r == 0) {
            return i;
        }
        if (r > 0) {
            return -1;
        }
    }
    return -1;
}

s32 fn_80212548(S80212548 *self, char *key) {
    if (key == 0 || *key == 0) {
        return 0;
    }
    return Find80212548(self, key);
}

} /* extern "C" */
