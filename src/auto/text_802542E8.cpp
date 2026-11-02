// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C800322B0 { u32 a; s32 b; u32 c; C800322B0() { a = 0; c = 0; b = 0; } ~C800322B0() {} };
void __ct__9C80242B00Fi(void *p);
struct C80032274 : C800322B0 {
    u8 name[8];
    s32 f20;
    s32 f24;
    u8 pad28[4];
    s32 f32;
    u8 pad36[4];
    C80032274() { __ct__9C80242B00Fi(this); }
    ~C80032274() {}
};
extern u8 *lbl_8035B684;
u8 *fn_8010915C(u8 *p, char *name);
void fn_800F6E88(u8 *dst, char *name);
void fn_801089F0(u8 *obj, void *l);
static inline void play(char *name, s32 a, s32 b, s32 c) {
    u8 *obj;
    C80032274 loc;
    obj = fn_8010915C(lbl_8035B684 + 136, name);
    if (obj != 0) {
        fn_800F6E88(loc.name, name);
        loc.a = (u32)obj;
        loc.b = -1;
        loc.f20 = a;
        loc.f24 = b;
        loc.f32 = c;
        fn_801089F0(obj, &loc);
    }
}
struct Clk { u8 pad[0x10]; u32 dt; f32 t; };
extern Clk *lbl_8035B488;
struct OV { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(f32);
  u8 pad[0x110 - 4]; f32 f110; u8 pad2[0x300 - 0x114]; s32 f300; };
struct S258 { u8 pad[0x258]; OV *o; };
struct S308 { u8 pad[0x48]; S258 *f48; };
extern S308 *lbl_8035B308;
struct V1 { virtual void v0(); virtual void v1(); };
struct S690b { V1 *o; };
struct S690 { u8 pad[4]; S690b *f4; };
extern S690 *lbl_8035B690;
struct S334 { void *f0; u8 pad[4]; void *f8; };
extern S334 *lbl_8035B334;
extern void *lbl_8035B39C, *lbl_8035B388, *lbl_8035B5E4;
extern s32 lbl_8035B2B0;
extern f32 lbl_803596E0[];
extern f32 lbl_803665B4, lbl_803665B8, lbl_803665BC, lbl_803665C0, lbl_803665C4, lbl_803665A8;
extern char lbl_802A9878[], lbl_802A9884[];
extern u8 lbl_803570C4[];
struct R { u8 pad[8]; s32 f8; s32 fc; };
struct V2a0 { u8 pad[0x2a0]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
  virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
  virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
  virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); };
struct Gm { u8 pad[0x1c]; void *f1c; u8 pad20[4]; V2a0 *f24; u8 pad28[0x68 - 0x28]; R *f68; R *f6c; void *f70; u8 pad74[4]; void *f78; u8 f7c; u8 f7d; u8 pad7e[0x8c - 0x7e]; u32 f8c; u8 pad90[0x2c4 - 0x90]; s32 f2c4; u8 pad2c8[0x2f0 - 0x2c8];
  virtual void w0(); virtual void w1(); virtual void w2(); virtual void w3(); virtual void w4(); virtual void w5(); virtual void w6(void *); };
void fn_8023EA4C(Clk *);
void fn_80228A48(void *, f32);
void fn_8022EB48(void *, f32);
void fn_80225FC0(void *);
void fn_80226690(void *);
void fn_80235858(void *, f32);
void fn_8023544C(void *, f32);
void fn_802516A4(void *, u32);
void fn_801C28C0(void *, f32);
void fn_800E8F6C(char *, const char *, ...);
void fn_8023A670(void *, char *, f32, f32, f32, f32, ...);

static inline s32 fr(R *r) { return r->f8 - r->fc; }
static inline s32 us(R *r) { return r->fc; }
s32 fn_802542E8(Gm *g) {
    OV *o;
    u32 dt;
    f32 t;
    g->f8c |= 0x80;
    fn_8023EA4C(lbl_8035B488);
    o = 0;
    dt = lbl_8035B488->dt;
    t = lbl_8035B488->t;
    if (lbl_8035B308->f48) o = lbl_8035B308->f48->o;
    if (o->f300) t *= lbl_803665B4;
    lbl_8035B690->f4->o->v1();
    fn_80228A48(lbl_8035B334->f0, t);
    fn_8022EB48(lbl_8035B334->f8, t);
    if (g->f8c & 0x40) fn_80225FC0(g->f70);
    else fn_80226690(g->f70);
    if (o) {
        lbl_8035B2B0 = 1;
        if (lbl_803596E0[0] == o->f110) o->v12(lbl_8035B488->t);
        else o->v12(t * o->f110);
        play(lbl_802A9878, 0, 0, 0);
    }
    fn_80235858(lbl_8035B39C, t);
    fn_8023544C(lbl_8035B388, t);
    if (g->f7d) fn_802516A4(lbl_8035B5E4, dt);
    if (g->f7c) fn_801C28C0(g->f78, t);
    g->w6(g->f1c);
    if (g->f2c4) {
        static volatile s32 acc;
        static volatile s8 accI;
        static volatile f32 fps;
        static volatile s8 fpsI;
        static volatile u32 cnt;
        static volatile s8 cntI;
        if (!accI) { acc = 0; accI = 1; }
        if (!fpsI) { fps = lbl_803665B8; fpsI = 1; }
        if (!cntI) { cnt = 0; cntI = 1; }
        char buf[256];
        if (cnt >= 3) {
            fps = lbl_803665BC / (f32)acc;
            acc = 0;
            cnt = 0;
        } else {
            acc += dt;
            cnt++;
        }
        fn_800E8F6C(buf, lbl_802A9884, fps, fr(g->f68) + fr(g->f6c), g->f68->fc + g->f6c->fc);
        fn_8023A670(lbl_803570C4, buf, lbl_803665C0, lbl_803665C4, lbl_803665A8, lbl_803665A8);
    }
    g->f24->v39();
    return 1;
}

} /* extern "C" */
