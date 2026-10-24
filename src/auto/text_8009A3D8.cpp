// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct C80214C34 { u8 d[456]; C80214C34(); ~C80214C34(); };
struct C80210CEC { u8 d[8]; C80210CEC(); ~C80210CEC(); };
struct Mgr { u8 pad_[192]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void err(char *); };
struct MC { u8 pad_[8]; u32 x8; u8 pad12[96 - 12]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void open(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual struct Card *card(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual int chk(void *); virtual int fin(void *); };
struct Card { u8 pad_[1720]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual int prep(void *); virtual void s18(); virtual int done(); };
struct Get { virtual void s0(); virtual void s1(); virtual struct MC *get(int, int); };
extern "C" {
struct O { u8 pad0[144]; u32 x144; u8 pad148[720 - 148]; u8 x720[12]; int x732; u8 pad736[768 - 736]; u8 x768[4]; };
extern char lbl_8029A1C8[];
extern void *lbl_8035A0A4;
extern u8 *lbl_8035B690;
extern Mgr *lbl_8035B684;
extern char lbl_803614F0[8], lbl_8036157C[8], lbl_803615BC[8];
extern void *lbl_8035A9F4;
extern void *lbl_8035B65C;
void fn_8003E77C(void *, void *);
void fn_8003E66C(void *);
void fn_8009BAD0(O *);
void fn_80272F28(O *, char *, char *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(void *);
void fn_800E8F6C(char *, char *, ...);
void fn_80214A74(C80214C34 *, int);
void fn_802148B0(C80214C34 *, char *);
void fn_80214884(C80214C34 *, int);
void fn_8020B224(MC *, u8 *);
int fn_80210BD4(C80210CEC *, Card *, char *, int);
int fn_802108B4(C80210CEC *, u8 *, int, int);
void fn_80210938(C80210CEC *);
void fn_8003DE9C(void *, u8 **, u8 *);
void *fn_801AA960(void *, char *, char *);
void __ct__9C80253F24Fiiii(void *, char *, int, int, int);
#define FAIL() do { lbl_8035B684->err(lbl_803614F0); fn_8009BAD0(o); fn_80272F28(o, lbl_8036157C, pool + 132); } while (0)
#define FAILD() do { lbl_8035B684->err(lbl_803614F0); delete buf; fn_8009BAD0(o); fn_80272F28(o, lbl_8036157C, pool + 132); } while (0)
void fn_8009A3D8(O *o) {
    char *pool = lbl_8029A1C8;
    u8 tmp[4];
    u8 *buf;
    char name[32];
    void *m;
    MC *mc;
    Card *c;
    fn_8003E77C(lbl_8035A0A4, (void *)o->x144);
    fn_8003E66C(lbl_8035A0A4);
    mc = (*(Get **)*(u8 **)(lbl_8035B690 + 4))->get(0, 0);
    if (!mc) { FAIL(); return; }
    mc->open();
    if (!(mc->x8 & 2) && mc->chk(tmp)) { FAIL(); return; }
    c = mc->card();
    if (!c) { FAIL(); return; }
    C80214C34 f;
    if (!lbl_8035A9F4) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    buf = new u8[8191];
    fn_800F7E98();
    if (!buf) fn_800604C4(-4, 0, 0, 0);
    fn_800E8F6C(name, pool + 144);
    name[7] = *(int *)((u8 *)lbl_8035A0A4 + 688) + 48;
    fn_80214A74(&f, *(int *)((u8 *)lbl_8035A0A4 + 688));
    fn_802148B0(&f, name);
    fn_80214884(&f, 8191);
    fn_8020B224(mc, o->x720);
    if (c->prep(&f)) { FAILD(); return; }
    C80210CEC g;
    if (fn_80210BD4(&g, c, name, 2)) { FAILD(); return; }
    if (fn_802108B4(&g, buf, 8191, 0)) {
        lbl_8035B684->err(lbl_803614F0);
        fn_80210938(&g);
        delete buf;
        fn_8009BAD0(o);
        fn_80272F28(o, lbl_8036157C, pool + 132);
        return;
    }
    fn_80210938(&g);
    if (c->done()) { FAILD(); return; }
    if (mc->fin(tmp)) { FAILD(); return; }
    fn_8003DE9C(lbl_8035A0A4, &buf, o->x768);
    delete buf;
    o->x732 = 0;
    {
        m = lbl_8035A0A4;
        fn_8003E77C(m, fn_801AA960(*(void **)(*(u8 **)lbl_8035B684 + 13232), lbl_803615BC, pool + 180));
    }
    __ct__9C80253F24Fiiii(lbl_8035B65C, pool + 192, 0, 0, 0);
}

} /* extern "C" */
