// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 pad[8]; u8 name[20]; } Ent80116C38;
void fn_800EB764(void *, void *);
s32 fn_800EB580(void *, void *);

s32 fn_80116C38(u8 **pp, void *key, s32 *out) {
    s32 lo = 0;
    s32 hi;
    s32 mid;
    s32 cmp;
    u8 buf[32];
    hi = M2C_FIELD(*pp, s16 *, 32);
    hi--;
    while (lo <= hi) {
        u8 *h;
        mid = (lo + hi) / 2;
        h = *pp;
        if (mid < M2C_FIELD(h, s16 *, 32)) {
            fn_800EB764(buf, ((Ent80116C38 *)(h + M2C_FIELD(h, s32 *, 34)))[mid].name);
        }
        cmp = fn_800EB580(buf, key);
        if (cmp > 0) {
            hi = mid - 1;
        } else if (cmp < 0) {
            lo = mid + 1;
        } else {
            *out = mid;
            return 0;
        }
    }
    *out = 0x7FFFFFFF;
    return 19;
}

} /* extern "C" */
