#include "common.h"
extern "C" {
typedef struct { u8 p[0x10]; f32 t; u8 q[100 - 0x14]; } E;
typedef struct { u8 p[0x14]; E *e; u32 n; } L;
typedef struct { u8 p[4]; L *l; u8 q[0x14 - 8]; f32 dt; s32 f18; s32 f1c; } O;
typedef struct { u8 p[0x178]; s32 f178; } G1;
typedef struct { u8 p[0xb8c]; s32 fb8c; } G2;
extern f32 lbl_8035C060;
extern G1 *lbl_80359F2C;
extern G2 *lbl_8035B65C;
extern char lbl_80294D78[];
s32 fn_800FBB9C(void);
void __ct__9C80253F24Fiiii(G2 *, char *, s32, s32, s32);
static inline void addt(E *e, f32 d) { e->t = e->t + d; }
static inline void addt2(E *e, O *o) { e->t = e->t + o->dt; }
static inline f32 B1(f32 d, f32 t) { t += d; return t; }
static inline f32 B2(f32 d, f32 t) { t = t + d; return t; }
static inline f32 B3(f32 d, f32 t) { return t + d; }
static inline void C1(f32 d, E *e, f32 t) { e->t = t + d; }
static inline void C2(f32 d, f32 t, E *e) { e->t = t + d; }
static inline void C3(f32 d, f32 t, E *e) { t += d; e->t = t; }
static inline void C4(E *e, f32 d, f32 t) { t += d; e->t = t; }
static inline f32 B4(f32 d, f32 *t) { return *t + d; }
static inline f32 A1(f32 a, f32 b) { return a + b; }
static inline f32 Dt(O *o) { return o->dt; }
static inline f32 Tt(E *e) { return e->t; }
void fn_80039988(O *o) {
    u32 i;
    for (i = 0; i < o->l->n; i++) {
        { E *e = &o->l->e[i]; e->t = Dt(o) + Tt(e); }
    }
    o->dt = lbl_8035C060;
    o->f18 = fn_800FBB9C();
    o->f1c = 0;
    lbl_80359F2C->f178 = 0;
    if (lbl_8035B65C != 0 && lbl_8035B65C->fb8c != 0) {
        __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_80294D78, 0, 0, 0);
    }
}
}
