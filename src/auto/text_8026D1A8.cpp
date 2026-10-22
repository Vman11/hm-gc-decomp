#include "common.h"

extern "C" {

u32 rand(void);
u8 *fn_800F8274(u8 *);

static inline u32 RandMod8026D1A8(u32 n) {
    u32 r = 0;
    if (n != 0) {
        r = rand() % n;
    }
    return r;
}

u8 *fn_8026D1A8(u8 *param_1) {
    u8 *p;
    u8 *result;
    u32 n;
    u32 r;

    result = 0;
    p = fn_800F8274(param_1 + 0x194);
    if (p != 0 && (n = *(u32 *)(p + 8), (s32)n > 0) && n <= 10) {
        r = RandMod8026D1A8(n);
        if (r == *(u32 *)(p + 0xc)) {
            r++;
            r %= n;
        }
        *(u32 *)(p + 0xc) = r;
        result = p + r * 0x18 + 0x10;
    }
    return result;
}

} /* extern "C" */
