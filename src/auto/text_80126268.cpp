// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
struct M { u8 pad[16]; u32 w; u32 h; };
struct BS { u32 w[4]; };
void fn_80124AE4(struct M *, u32, u32, struct BS *);
void fn_801244A4(struct M *, u32, u32);
void fn_801229D0(struct M *, u32, u32);
void fn_80121EE4(struct M *, u32, u32);
static inline u32 bits(struct BS *b0, int pos, int n) {
    struct BS *b; int r; int i; int k;
    k = pos; b = b0;
    r = 0;
    for (i = n; i > 0; i--) {
        r <<= 1; r |= (b->w[k >> 5] >> (k & 31)) & 1;
        k--;
    }
    return r;
}
static inline u32 rd(u8 *p) { return p[0] + (p[1] << 8) + (p[2] << 16) + (p[3] << 24); }
void fn_80126268(struct M *m, u8 *p0) {
    struct BS *pb; struct BS bs; u8 *p; u32 y; u32 x;
    pb = &bs;
    p = p0;
    for (y = 0; y < m->h >> 2; y++) {
        for (x = 0; x < m->w >> 3; x++) {
            bs.w[0] = rd(p);
            bs.w[1] = rd(p + 4);
            bs.w[2] = rd(p + 8);
            bs.w[3] = rd(p + 12);
            p += 16;
            if (bits(pb, 127, 1)) fn_80124AE4(m, x, y, &bs);
            else if (!bits(&bs, 126, 1)) fn_801244A4(m, x, y);
            else if (bits(&bs, 125, 1)) fn_801229D0(m, x, y);
            else fn_80121EE4(m, x, y);
        }
    }
}

} /* extern "C" */
