// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B320;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
struct V { f32 x, y, z; };
struct FT { u8 pad[12]; void (*f12)(void *, V *); };
extern FT lbl_803286D0;
extern f32 lbl_80361C70;
extern u32 lbl_80361C64;
extern char lbl_80361C68[8];
struct R { u32 f0; u16 f4; };
struct R2 { u32 f0; u16 f4; };
struct G8 { u8 pad[144]; u8 f144[4]; };
struct G684 { u8 pad[12352]; G8 g; };
struct H { G684 *f0; };
extern H *lbl_8035B684;
struct G65C { u8 pad[12]; void *f12; };
extern G65C *lbl_8035B65C;
struct P { u8 pad[16]; void *f16; u8 pad20[12]; u32 f32; };
struct O { u8 pad[48]; P *f48; };
struct C801883E0 : O { C801883E0(); u8 padx[152]; };
struct C8018E150 : O { C8018E150(); u8 padx[116]; };
struct T { u8 pad[156]; void *f156; u8 pad160[580]; C8018E150 *f740; C801883E0 *f744; };
R *fn_800F9398(void *, const char *);
void fn_80188144(C801883E0 *, G8 *, R2 *, int);
void fn_8018DFAC(C8018E150 *, G8 *, R2 *);
void fn_80190C98(O *);
void fn_80190940(O *, void *);
void fn_8019B7E8(void *, O *);
void fn_80233030(T *, void *);
static inline void upd(O *o, V *v) {
    P *q = o->f48;
    if (q) {
        lbl_803286D0.f12(q->f16, v);
        q->f32 |= lbl_80361C64;
        fn_80190C98(o);
    }
}
static inline void mk3(T *t, G8 *g, R2 *rr, V &v) {
            rr->f0 &= ~0x800;
            if (lbl_8035B320 == 0) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035B320);
            t->f744 = new C801883E0;
            fn_800F7E98();
            if (t->f744 == 0) fn_800604C4(-4, 0, 0, 0);
            fn_80188144(t->f744, g, rr, 0);
            upd(t->f744, &v);
            fn_80190940(t->f744, t->f156);
            fn_8019B7E8(lbl_8035B65C->f12, t->f744);
}
static inline void mk2(T *t, G8 *g, R2 *rr, V &v) {
            rr->f0 &= ~0x800;
            if (lbl_8035B320 == 0) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035B320);
            t->f740 = new C8018E150;
            fn_800F7E98();
            if (t->f740 == 0) fn_800604C4(-4, 0, 0, 0);
            fn_8018DFAC(t->f740, g, rr);
            upd(t->f740, &v);
            fn_80190940(t->f740, t->f156);
            fn_8019B7E8(lbl_8035B65C->f12, t->f740);
}
static inline void body(T *t) {
    G8 *g = &lbl_8035B684->f0->g;
    R *r = fn_800F9398(g->f144, lbl_80361C68);
    if (r) {
        V v;
        v.x = lbl_80361C70; v.y = lbl_80361C70; v.z = lbl_80361C70;
        switch (r->f4) {
        case 3:
            mk3(t, g, (R2 *)r, v);
            break;
        case 2:
            mk2(t, g, (R2 *)r, v);
            break;
        }
    }
}
void fn_800A3198(T *t, void *x) {
    body(t);
    fn_80233030(t, x);
}

} /* extern "C" */
