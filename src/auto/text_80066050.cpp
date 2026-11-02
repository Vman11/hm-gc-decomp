// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8035E70C;
extern f64 lbl_8035E730;
extern f64 lbl_8035E738;
struct G25 { u8 pad[0x20]; s32 f20; };
extern G25 *lbl_8035A02C;
struct Q25 { u8 pad[0x18c]; s32 f18c; u8 p190[0x500 - 0x190]; f32 f500, f504; u8 p508[0x68c - 0x508]; s32 f68c; };
struct R25 { s32 f0, f4; };
struct P25 { u8 pad[0x9c]; Q25 *q; u8 pa0[0xec - 0xa0]; f32 fec; u8 pf0[0xfc - 0xf0]; Q25 *ffc; u8 p100[0x158 - 0x100]; f32 f158, f15c; s32 f160; u8 p164[4]; R25 *f168; };
static inline f32 Sq(f32 x) {
    if (x > lbl_8035E70C) {
        const f64 _half = lbl_8035E730;
        const f64 _three = lbl_8035E738;
        volatile f32 y;
        f64 g = __frsqrte((f64)x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        y = x * g;
        return y;
    }
    return x;
}
void fn_80066050(P25 *p) {
    if (lbl_8035A02C->f20 != 0) {
        f32 z = lbl_8035E70C; p->fec = z; p->f158 = z; p->f15c = z;
    } else if (p->ffc->f68c == 0) {
        f32 z = lbl_8035E70C; p->fec = z; p->f158 = z; p->f15c = z;
    } else if (p->f168 != 0 && p->f168->f4 != 0) {
        Q25 *q = p->q;
        p->f15c = q->f500;
        p->f158 = q->f504;
        p->fec = Sq(__fmadds(p->f15c, p->f15c, p->f158 * p->f158));
        p->f160 = p->q->f18c;
    }
}

} /* extern "C" */
