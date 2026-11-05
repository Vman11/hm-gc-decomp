#include "common.h"

extern "C" {
struct F { u32 f0; u32 m[4]; };
static inline u32 nb(u32 m) {
    u32 n;
    if (m == 0) return 0;
    while (!(m & 1)) m >>= 1;
    n = 0;
    while (m & 1) { m >>= 1; n++; }
    return n;
}
static inline u32 sh(u32 m) {
    u32 n;
    if (m == 0) return 32;
    n = 0;
    while (!(m & 1)) { m >>= 1; n++; }
    return n;
}
u32 fn_80147CD8(F *__restrict f, u8 *__restrict c) {
    u32 rs = 8 - nb(f->m[0]);
    u32 gs = 8 - nb(f->m[1]);
    u32 bs = 8 - nb(f->m[2]);
    u32 as = 8 - nb(f->m[3]);
    u32 r = (u32)c[0] >> rs;
    u32 g = (u32)c[1] >> gs;
    u32 b = (u32)c[2] >> bs;
    u32 a = (u32)c[3] >> as;
    u32 v = r << sh(f->m[0]);
    v |= g << sh(f->m[1]);
    v |= b << sh(f->m[2]);
    v |= a << sh(f->m[3]);
    return v;
}
}
