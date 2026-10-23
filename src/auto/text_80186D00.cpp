// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern volatile f32 lbl_803649B0;
extern f32 lbl_803649B4;
typedef struct { u8 pad[16]; u16 w; u16 h; } I80186D00;
typedef struct { u8 pad[28]; u16 w; u16 h; } Q80186D00;
typedef struct { u8 pad[4]; const Q80186D00 *q; } P80186D00;
typedef struct {
    u8 pad[4]; u32 flags;
    u8 pad2[4];
    f32 f12, f16, f20, f24;
    u8 pad3[8];
    volatile f32 f36, f40;
    u8 pad4[4];
    f32 f48, f52, f56, f60;
    u8 f64[20];
    const I80186D00 *f84;
} T80186D00;
void fn_8012DD1C(const I80186D00 *img, const P80186D00 *p, f32 *a, f32 *b, u8 *c64, f32 *c);

void fn_80186D00(T80186D00 *t, const P80186D00 *p) {
    f32 b[2];
    f32 a[2];
    f32 c[4];
    f32 sx, sy;
    if (t->flags & 8) {
        s32 w = p->q->w;
        s32 h = p->q->h;
        a[0] = t->f12 * w;
        a[1] = t->f16 * h;
        c[0] = t->f48 * w;
        c[2] = t->f56 * w;
        c[1] = t->f52 * h;
        c[3] = t->f60 * h;
    } else {
        a[0] = t->f12;
        a[1] = t->f16;
        c[0] = t->f48;
        c[1] = t->f52;
        c[2] = t->f56;
        c[3] = t->f60;
    }
    b[0] = t->f20;
    b[1] = t->f24;
    sx = t->f36;
    if (sx != lbl_803649B0) b[0] = sx / (s32)t->f84->w;
    sy = t->f40;
    if (sy != lbl_803649B0) b[1] = sy / (s32)t->f84->h;
    if (t->flags & 2) {
        a[0] = lbl_803649B4 * (f32)(p->q->w - (s32)(b[0] * t->f84->w));
    }
    if (t->flags & 4) {
        a[1] = lbl_803649B4 * (f32)(p->q->h - (s32)(b[1] * t->f84->h));
    }
    fn_8012DD1C(t->f84, p, a, b, t->f64, c);
}

} /* extern "C" */
