#include "common.h"

typedef struct { u8 pad[0x280]; s32 q[8][8]; } D;
typedef struct { u8 pad[4]; u8 px[8][8]; } Out;
extern s32 lbl_8035B0E0, lbl_8035B0E4, lbl_8035B0E8;

static inline u8 Clamp(s32 v) {
    if (v < 0) return 0;
    if (v > 255) return 255;
    return v;
}

void fn_801F474C(Out *out, s16 *in, D *d) {
    s32 ws[64];
    s32 *w;
    int i;
    s32 k1 = lbl_8035B0E4, k2 = lbl_8035B0E8, k0 = lbl_8035B0E0;
    for (i = 0; i < 8; i++) {
        s16 *c = &in[i * 8];
        s32 *q = d->q[i];
        w = &ws[i * 8];
        if ((c[1] | c[2] | c[3] | c[4] | c[5] | c[6] | c[7]) == 0) {
            w[0] = q[0] * c[0];
            w[1] = w[0];
            w[2] = w[0];
            w[3] = w[0];
            w[4] = w[0];
            w[5] = w[0];
            w[6] = w[0];
            w[7] = w[0];
        } else {
            s32 a1 = q[1] * c[1];
            s32 a7 = q[7] * c[7];
            s32 d17 = (k1 * (a1 - a7)) >> 6;
            s32 s17 = a1 + a7;
            s32 a5 = q[5] * c[5];
            s32 a3 = q[3] * c[3];
            s32 d53 = (k2 * (a5 - a3)) >> 6;
            s32 s53 = a5 + a3;
            s32 t = s17 - s53;
            s32 e = d17 + d53;
            s32 f = d17 - d53;
            s32 a2 = q[2] * c[2];
            s32 a6 = q[6] * c[6];
            s32 g = ((a2 - a6) * k0) >> 6;
            s32 s26 = a2 + (a6 + g);
            s32 h = (e * k0) >> 6;
            s32 o1 = h + f;
            s32 o0 = s53 + (s17 + o1);
            s32 tt = (t * k0) >> 6;
            s32 o2 = tt + o1;
            s32 o3 = h + tt;
            s32 a0 = q[0] * c[0];
            s32 a4 = q[4] * c[4];
            s32 s04 = a0 + a4;
            s32 d04 = a0 - a4;
            s32 p0 = s04 + s26;
            s32 p1 = d04 + g;
            s32 p3 = s04 - s26;
            s32 p2 = d04 - g;
            w[0] = p0 + o0;
            w[1] = p1 + o2;
            w[2] = p2 + o3;
            w[3] = p3 + h;
            w[4] = p3 - h;
            w[5] = p2 - o3;
            w[6] = p1 - o2;
            w[7] = p0 - o0;
        }
    }
    for (i = 0; i < 8; i++) {
        w = &ws[i];
        {
            s32 s17 = w[8] + w[56];
            s32 d17 = (lbl_8035B0E4 * (w[8] - w[56])) >> 6;
            s32 s53 = w[40] + w[24];
            s32 d53 = (lbl_8035B0E8 * (w[40] - w[24])) >> 6;
            s32 t = s17 - s53;
            s32 e = d17 + d53;
            s32 f = d17 - d53;
            s32 g = ((w[16] - w[48]) * lbl_8035B0E0) >> 6;
            s32 s26 = w[16] + (w[48] + g);
            s32 h = (e * lbl_8035B0E0) >> 6;
            s32 o1 = h + f;
            s32 o0 = s53 + (s17 + o1);
            s32 tt = (t * lbl_8035B0E0) >> 6;
            s32 o2 = tt + o1;
            s32 o3 = h + tt;
            s32 s04 = w[0] + (w[32] + 0x80800);
            s32 d04 = (w[0] - w[32]) + 0x80800;
            s32 p0 = s04 + s26;
            s32 p1 = d04 + g;
            s32 p3 = s04 - s26;
            s32 p2 = d04 - g;
            out->px[0][i] = Clamp((p0 + o0) >> 12);
            out->px[1][i] = Clamp((p1 + o2) >> 12);
            out->px[2][i] = Clamp((p2 + o3) >> 12);
            out->px[3][i] = Clamp((p3 + h) >> 12);
            out->px[4][i] = Clamp((p3 - h) >> 12);
            out->px[5][i] = Clamp((p2 - o3) >> 12);
            out->px[6][i] = Clamp((p1 - o2) >> 12);
            out->px[7][i] = Clamp((p0 - o0) >> 12);
        }
    }
}
