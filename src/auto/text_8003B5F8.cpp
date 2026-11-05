#include "common.h"
extern "C" {
typedef struct { u8 r, g, b, a; } C4;
typedef struct { C4 c[4]; } C16;
typedef struct { u8 pad[64]; C16 cols; } Mat;
typedef struct { u8 pad[44]; Mat *mat; u8 pad2[100 - 48]; s32 cur; u32 pad3; u32 max; u32 last; } T;
extern volatile u32 lbl_8035A078;
extern volatile s8 lbl_8035A07C;
extern volatile f32 lbl_8035A080;
extern volatile s8 lbl_8035A084;
extern volatile s32 lbl_8035A088;
extern volatile s8 lbl_8035A08C;
extern const f32 lbl_8035C158, lbl_8035C15C, lbl_8035C160;
u32 fn_800FBB9C(void);
void fn_80121E1C(void *p);
void fn_8003B3E8(T *t, void *p);

void fn_8003B5F8(T *t, void *p) {
    u32 dt;
    C16 c;
    if (!lbl_8035A07C) { lbl_8035A078 = fn_800FBB9C(); lbl_8035A07C = 1; }
    if (!lbl_8035A084) { lbl_8035A080 = lbl_8035C158; lbl_8035A084 = 1; }
    if (!lbl_8035A08C) { lbl_8035A088 = 1; lbl_8035A08C = 1; }
    dt = fn_800FBB9C() - lbl_8035A078;
    lbl_8035A078 = fn_800FBB9C();
    lbl_8035A080 = lbl_8035C15C * (f32)dt + lbl_8035A080;
    fn_80121E1C(&c);
    if (lbl_8035A080 > lbl_8035C160) {
        lbl_8035A080 = lbl_8035C158;
        if (lbl_8035A088 == 0) {
            c.c[0].r = 59; c.c[0].g = 0; c.c[0].b = 168; c.c[0].a = 255;
            c.c[1].r = 0; c.c[1].g = 54; c.c[1].b = 164; c.c[1].a = 255;
            c.c[2].r = 0; c.c[2].g = 115; c.c[2].b = 144; c.c[2].a = 255;
            c.c[3].r = 0; c.c[3].g = 138; c.c[3].b = 104; c.c[3].a = 255;
            t->mat->cols = c;
            lbl_8035A088 = 1;
        } else {
            c.c[0].r = 59; c.c[0].g = 0; c.c[0].b = 168; c.c[0].a = 255;
            c.c[1].r = 0; c.c[1].g = 54; c.c[1].b = 164; c.c[1].a = 255;
            c.c[2].r = 130; c.c[2].g = 96; c.c[2].b = 133; c.c[2].a = 255;
            c.c[3].r = 140; c.c[3].g = 96; c.c[3].b = 119; c.c[3].a = 255;
            t->mat->cols = c;
            lbl_8035A088 = 0;
        }
    }
    if (fn_800FBB9C() - t->last < 500) {
        t->max--;
        if (t->max == 0) t->max = 1;
    } else {
        t->cur++;
        if (t->cur > (s32)t->max) t->cur = t->max;
    }
    fn_8003B3E8(t, p);
}
}
