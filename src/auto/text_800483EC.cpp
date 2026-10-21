// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { f32 r, g, b, a; } ColorF;
extern char lbl_80295B14[];
extern char lbl_8035D188[4];
extern u32 lbl_8035D180;
void *fn_8023F4A0(void *p, char *a, char *b, char *name, s32 x);

void fn_800483EC(void *p, s32 on) {
    ColorF *s;
    ColorF *d;
    f32 r, g, b, a;
    f32 a2, b2, g2, r2;
    u32 *f;
    if ((on != 0 && M2C_FIELD(p, void **, 0x138) != 0) || (on == 0 && M2C_FIELD(p, void **, 0x13c) != 0)) {
        if (on != 0) {
            s = M2C_FIELD(M2C_FIELD(p, void **, 0x138), ColorF **, 0xc);
            a = s->a; r = s->r; g = s->g; b = s->b;
        } else {
            s = M2C_FIELD(M2C_FIELD(p, void **, 0x13c), ColorF **, 0xc);
            a = s->a; r = s->r; g = s->g; b = s->b;
        }
        d = M2C_FIELD(p, ColorF **, 0x170);
        d->r = r; d->g = g; d->b = b; d->a = a;
    }
    M2C_FIELD(p, void **, 0x134) = fn_8023F4A0(p, lbl_8035D188, lbl_8035D188, lbl_80295B14, 0);
    if (M2C_FIELD(p, void **, 0x134) != 0) {
        s = M2C_FIELD(M2C_FIELD(p, void **, 0x134), ColorF **, 0xc);
        a2 = s->a; b2 = s->b; g2 = s->g; r2 = s->r;
        d = (ColorF *)((u8 *)M2C_FIELD(M2C_FIELD(p, void **, 0x188), void **, 0x10) + 0x14);
        d->r = r2; d->g = g2; d->b = b2; d->a = a2;
    }
    f = M2C_FIELD(p, u32 **, 0x18c);
    if (f != 0 && M2C_FIELD(p, s32 **, 0x128) != 0 && *M2C_FIELD(p, s32 **, 0x128) != 0 && on == 0) {
        *f |= lbl_8035D180;
    }
}

} /* extern "C" */
