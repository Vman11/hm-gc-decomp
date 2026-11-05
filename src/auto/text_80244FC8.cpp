// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

// NonMatching draft (wA_80127F34): only the two final plane-dot products differ (FP scheduling/regs). DIFF 44 / SDIFF 10.

struct Vec { f32 x, y, z; };
extern "C" {
struct Path { u8 pad[12]; u32 n; int loop; u8 pad20[4]; Vec *pts; };
extern f32 lbl_80366260, lbl_80366250, lbl_80366258;
u32 fn_802466B4(Path *, int, Vec *, int, int, int);
void fn_80101820(Vec *);
void fn_80101624(Vec *, Vec *, Vec *, f32);
static inline void Sub(Vec *d, const Vec *a, const Vec *b) { d->x = a->x - b->x; d->y = a->y - b->y; d->z = a->z - b->z; }
static inline f32 Dot(const Vec *a, const Vec *b) { return a->x * b->x + a->y * b->y + a->z * b->z; }
static inline u32 Nx(Path *p, u32 i) { u32 k = i + 1; if (k >= p->n) k = 0; return k; }
static inline void Tan(Path *p, u32 i, Vec *res) {
    Vec b, a;
    f32 w = lbl_80366260;
    if (p->n == 2) {
        { u32 k = 1; if (p->n <= 1) k = 0; Sub(&a, &p->pts[k], &p->pts[0]); }
        fn_80101820(&a);
        b = a;
    } else {
        u32 pv;
        if (!p->loop) {
            if (i == p->n - 1) w = lbl_80366250;
            if (i == 0) w = lbl_80366258;
        }
        { u32 k = Nx(p, i); Sub(&a, &p->pts[k], &p->pts[i]); }
        fn_80101820(&a);
        if (p->loop) pv = i ? i - 1 : p->n - 1;
        else pv = i ? i - 1 : 0;
        { u32 k = Nx(p, pv); Sub(&b, &p->pts[k], &p->pts[pv]); }
        fn_80101820(&b);
    }
    fn_80101624(res, &b, &a, w);
}
void fn_80244FC8(Path *p, Vec *out) {
    Vec r1, r2, s;
    u32 i, j;
    f32 d1, d2, sum, t;
    i = fn_802466B4(p, 0, &s, 0, 0, 0);
    if (p->loop) j = i < p->n - 1 ? i + 1 : 0;
    else {
        j = p->n - 1;
        if (i < j) j = i + 1;
    }
    Tan(p, i, &r1);
    Tan(p, j, &r2);
    {
        Vec da, db;
        Sub(&da, &s, &p->pts[i]);
        Sub(&db, &s, &p->pts[j]);
        d1 = __fabs(Dot(&da, &r1));
        d2 = __fabs(Dot(&db, &r2));
    }
    sum = d1 + d2;
    t = lbl_80366250;
    if (t != sum) t = d1 / sum;
    fn_80101624(out, &r1, &r2, t);
}
}
