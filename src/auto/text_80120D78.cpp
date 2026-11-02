// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_8029DEA0[];
struct C4 { u8 b, g, r, a; };
struct T { u8 pad[16]; u32 f16; u32 f20; u32 f24; u16 f28; u8 pad30[26]; u32 f56; C4 pal[322]; u32 f1348; u8 *f1352; };
struct TV { u8 pad[1340]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void reset(); };
void fn_8014824C(void *, int, int, int, int);
void fn_80148288(void *, int, u32, u32, u32, u32, int);
void fn_801486B4(T *, const char *);
static inline void pal(T *t, u8 *q, u32 i) {
    for (; i < t->f56; i++) {
        t->pal[i].r = q[0];
        t->pal[i].g = q[1];
        t->pal[i].b = q[2];
        t->pal[i].a = 255;
        q += 3;
    }
}
void fn_80120D78(T *t, u8 *h) {
    if (t->f28) ((TV *)t)->reset();
    u8 *p = h + 16;
    t->f16 = h[0] + (h[1] << 8);
    t->f20 = h[2] + (h[3] << 8);
    u32 bpp = h[4] + (h[5] << 8);
    t->f56 = h[6] + (h[7] << 8);
    t->f24 = h[8] + ((u32)h[9] << 8) + ((u32)h[10] << 16) + ((u32)h[11] << 24);
    t->f1348 = h[12] + ((u32)h[13] << 8) + ((u32)h[14] << 16) + ((u32)h[15] << 24);
    switch (bpp) {
    case 4: fn_8014824C(&t->f28, 4, 15, 0, 0); break;
    case 8: fn_8014824C(&t->f28, 8, 255, 0, 0); break;
    case 16: fn_80148288(&t->f28, 16, 0x7C00, 0x3E0, 0x1F, 0, 0); break;
    case 24: fn_80148288(&t->f28, 24, 0xFF0000, 0xFF00, 0xFF, 0, 0); break;
    case 32: fn_80148288(&t->f28, 32, 0xFF00, 0xFF0000, 0xFF000000, 0xFF, 0); break;
    default: fn_801486B4(t, lbl_8029DEA0); break;
    }
    pal(t, p, 0);
    p += t->f56 * 3;
    t->f1352 = p;
}

} /* extern "C" */
