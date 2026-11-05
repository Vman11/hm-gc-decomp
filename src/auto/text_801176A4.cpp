#include "common.h"

// NonMatching (DIFF 14, SDIFF 2): ret r(r28)/loop off40(r27) regs swapped; loop add scheduled after stfs x.
struct VB_801176A4 { u8 pad[0xd0]; };
struct T_801176A4 : VB_801176A4 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual s32 v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual s32 v7();
};
extern "C" {
typedef struct { u8 pad[0xc]; f32 fc; f32 f10; s32 f14; s32 f18; s32 f1c; } A_801176A4;
typedef struct { s32 f0; s32 f4; s32 f8; s32 fc; f32 f10; f32 f14; f32 f18; f32 f1c; f32 f20; } D_801176A4;
typedef struct {
    s32 f0; s32 f4; s32 f8; u8 padc[0xc]; s32 f18; u8 pad1c[0x34];
    s32 *f50; u8 pad54[0x54]; s32 fa8; s32 fac;
} H_801176A4;
#define H(t) ((H_801176A4 *)(t))
extern volatile f32 lbl_80363A7C;
extern volatile f32 lbl_80363A80;
extern volatile f32 lbl_80363A68;
void *memset(void *, int, u32);
void fn_80118694(void *, s32, s32);
s32 fn_8011F5C0(T_801176A4 *, A_801176A4 *);
void fn_80118B5C(void *, D_801176A4 *);

static inline void Upd0(H_801176A4 *h) { h->fa8 = h->f0 + h->f4 + h->f8; }
static inline void Upd1(H_801176A4 *h) { Upd0(h); h->fac = h->f4 + h->f8; }

static inline void SetX(H_801176A4 *h, s32 v) { h->f0 = v; Upd0(h); }
static inline void SetY(H_801176A4 *h, s32 v) { h->f4 = v; Upd1(h); }
static inline void SetZ(H_801176A4 *h, s32 v) { h->f8 = v; Upd1(h); }
static inline void SetAll(H_801176A4 *h, s32 x, s32 y, s32 z) {
    h->f0 = x;
    Upd0(h);
    h->f4 = y;
    Upd1(h);
    h->f8 = z;
    Upd1(h);
}
static inline void Loop_801176A4(T_801176A4 *t, A_801176A4 *a, u32 i) {
    f32 x = a->fc;
    f32 y = a->f10;
    for (; i < H(t)->f4; i++) {
        D_801176A4 d;
        memset(&d, 0, 0x24);
        *(volatile s32 *)&d.f8 = ((s32 * volatile &)H(t)->f50)[i * 2];
        *(volatile s32 *)&d.f4 = 1;
        *(volatile s32 *)&d.f0 = *(volatile s32 *)&H(t)->f18;
        s32 v = i + *(volatile s32 *)&H(t)->f0;
        *(volatile f32 *)&d.f1c = x;
        *(volatile s32 *)&d.fc = v;
        *(volatile f32 *)&d.f20 = y;
        *(volatile f32 *)&d.f10 = lbl_80363A7C;
        *(volatile f32 *)&d.f14 = lbl_80363A80;
        *(volatile f32 *)&d.f18 = lbl_80363A68;
        fn_80118B5C(*(u8 * volatile *)((u8 *)t + 0xd4) + i * 0x40, &d);
    }
}

s32 fn_801176A4(T_801176A4 *__restrict t, A_801176A4 *__restrict a) {
    s32 r;
    if ((r = t->v7()) != 0) {
        return r;
    }
    SetX(H(t), a->f14);
    SetY(H(t), a->f18);
    SetZ(H(t), a->f1c);
    fn_80118694((u8 *)t + 0xd8, H(t)->fa8 * 2, 0xff);
    r = fn_8011F5C0(t, a);
    if (r == 0) {
        r = t->v3();
        if (r == 0) {
            Loop_801176A4(t, a, 0);
        }
    }
    return r;
}
}
