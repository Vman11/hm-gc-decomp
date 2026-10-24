// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct O40 {
    u8 pad[88];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void s16(u32, int, u32); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void s21(int);
};
struct G7 { u8 pad[32]; f32 *f32p; u8 pad36[4]; O40 *o40; };
struct G6 {
    u8 pad[712];
    s32 i712;
    u8 pad716[36];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void s15(int);
};
struct Q64 { u8 pad[116]; s32 i116; };
struct R788 { u8 pad[788]; s32 i788; };
struct P {
    u8 pad0[28];
    s32 i28;
    s32 i32;
    s32 on;
    u8 pad40[8];
    f32 t;
    u32 snd;
    u32 a56;
    s32 playing;
    Q64 *q;
    s32 i68;
    s32 i72;
};
extern G7 *lbl_8035B7BC;
extern void *lbl_8035B79C;
extern G6 *lbl_8035B65C;
extern void **lbl_8035B334;
extern void *lbl_8035B5E4;
extern char lbl_803664A8[8], lbl_803664B0[8], lbl_803664C4[8];
extern f32 lbl_803664B8, lbl_803664C0;
void fn_801E24A8(Q64 *);
s32 fn_80268004(void *);
void fn_80268014(void *);
void fn_8026B5CC(G7 *, f32);
void fn_8026D7C0(G7 *);
R788 *fn_802288FC(void *, char *);
void fn_801E1F94(Q64 *);
void __ct__9C80253F24Fiiii(G6 *, char *, int, int, int);
void *fn_800F8274(void *, char *);
s32 fn_80253664(void *, int);

static inline s32 busy() { return fn_80253664(fn_800F8274(lbl_8035B5E4, lbl_803664B0), 76) != 0; }
static inline void clr(R788 *r) { r->i788 = 0; }
static inline void stop(P *p) {
    if (p->on) {
        lbl_8035B65C->i712 = 1;
        if (p->i28) lbl_8035B65C->s15(0);
        if (p->snd) {
            lbl_8035B7BC->o40->s21(0);
            p->playing = 0;
            fn_80268014(lbl_8035B79C);
        }
        fn_8026B5CC(lbl_8035B7BC, *lbl_8035B7BC->f32p);
        fn_8026D7C0(lbl_8035B7BC);
    }
    p->on = 0;
    if (p->i32) clr(fn_802288FC(*lbl_8035B334, lbl_803664A8));
    fn_801E1F94(p->q);
    __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_803664C4, 0, 0, 0);
}

void fn_80250414(P *p, f32 dt) {
    if (p->on) {
        p->t += dt;
        fn_801E24A8(p->q);
        if (p->snd && !p->playing) {
            O40 *o = lbl_8035B7BC->o40;
            if (fn_80268004(lbl_8035B79C)) {
                o->s16(p->snd, 0, p->a56);
                p->playing = 1;
            }
        }
        if (p->q->i116 == 0) stop(p);
        {
            if (p->i72 != fn_80253664(fn_800F8274(lbl_8035B5E4, lbl_803664B0), 76) && p->t > lbl_803664B8) {
                p->i72 = fn_80253664(fn_800F8274(lbl_8035B5E4, lbl_803664B0), 76);
                p->i68 = 1;
            }
            if (busy() == 1 && p->t > lbl_803664C0 && p->i68) stop(p);
        }
    }
}

} /* extern "C" */
