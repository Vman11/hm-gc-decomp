// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 fn_80116B10(void *ctx, u32 h, u32 **out);
extern void fn_80116A70(u32 *s, void *len);
extern void fn_80116B58(void *ctx, s32 err);

static inline void Convert(u32 *d, u32 *s) {
    s32 n;
    u32 acc;
    u32 i;
    fn_80116A70(s, &n);
    if (*s > 255) {
        while (n >= 0) {
            *d++ = *s++;
            n -= 4;
        }
    } else {
        acc = 0;
        for (i = 0; (s32)i < n; i++) {
            acc = (acc << 8) | *s++;
            if ((i & 3) == 3) {
                *d++ = acc;
                acc = 0;
            }
        }
        if (i & 3) {
            *d = acc << ((4 - (i & 3)) * 8);
        } else {
            *d = 0;
        }
    }
}

static inline s32 Check(void *ctx, s32 err) {
    if (err) fn_80116B58(ctx, err);
    return err;
}

s32 fn_80114C48(void *a, void *ctx, u32 *q) {
    u32 *dst;
    u32 *src;
    u32 len;
    u32 *tmp;
    fn_80116B10(ctx, q[2], &src);
    fn_80116A70(src, &len);
    if (Check(ctx, fn_80116B10(ctx, q[1] + ((len + 3) >> 2), &tmp))) return 0;
    fn_80116B10(ctx, q[2], &dst);
    Convert(dst, src);
    return len;
}

} /* extern "C" */
