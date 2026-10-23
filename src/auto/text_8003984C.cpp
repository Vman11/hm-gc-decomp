// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct E8003984C_0 {
    u8 pad[16];
    f32 f16;
    u8 pad2[60];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *a);
};
struct E8003984C : E8003984C_0 {
    u8 pad3[16];
};
extern "C" {
typedef struct L8003984C { u8 pad[20]; E8003984C *f20; u32 f24; } L8003984C;
typedef struct S8003984C { u8 pad[4]; L8003984C *f4; u8 pad2[4]; void *f12; u8 pad3[4]; f32 f20; u32 f24; u32 f28; } S8003984C;
typedef struct G8003984C_a { u8 pad[16]; u32 f16; } G8003984C_a;
typedef struct G8003984C_b { u8 pad[2956]; s32 f2956; } G8003984C_b;
typedef struct G8003984C_c { u8 pad[376]; u32 f376; } G8003984C_c;
extern G8003984C_a *lbl_8035B488;
extern G8003984C_b *lbl_8035B65C;
extern G8003984C_c *lbl_80359F2C;
extern f32 lbl_8035C060;
extern f32 lbl_8035C064;
extern f32 lbl_8035C068;
extern f32 lbl_8035C06C;

void fn_8003984C(S8003984C *p) {
    u32 i;
    f32 v;
    f32 d;
    u32 n;
    v = lbl_8035C060;
    n = lbl_8035B488->f16;
    if (n > 100) {
        n = 100;
    }
    p->f24 += n;
    d = lbl_8035C064 * ((f32)n / lbl_8035C068);
    p->f20 += d;
    for (i = 0; i < p->f4->f24; i++) {
        E8003984C *e = &p->f4->f20[i];
        v = e->f16;
        v -= d;
        e->f16 = v;
        p->f4->f20[i].v4(p->f12);
    }
    if (v < lbl_8035C06C) {
        p->f28 = 1;
        if (lbl_8035B65C != 0 && lbl_8035B65C->f2956 == 0) {
            lbl_80359F2C->f376 = 1;
        }
    }
}

} /* extern "C" */
