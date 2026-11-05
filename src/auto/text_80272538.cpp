#include "common.h"
extern "C" {
struct Rect { u32 x, y, w, h; };
struct Msg {
    u32 f0;
    Rect r;
    u32 f14;
    u32 f18;
    f32 f1c;
    u32 f20;
    s32 f24;
    u32 f28, f2c;
    u8 f30[8];
    char *f38;
    u32 f3c, f40;
    u32 f44;
    u32 flags;
};
struct Dim { u8 pad[0x1c]; u16 w, h; };
struct Scr { u8 pad[0x30]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11(); };
struct Ctx { Scr *scr; Dim *dim; };
struct Box {
    u8 pad[0x50];
    u32 f50;
    u8 pad54[0xc];
    virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3();
    virtual void show(Msg *); virtual void b5(); virtual void tick(f32); virtual void open(); virtual void close();
};
struct Pad { u8 pad[0xbc]; s32 fbc; };
struct Inp { virtual void i0(); virtual void i1(); virtual void i2(); virtual void i3(); virtual void i4(); virtual void i5(); virtual void i6(); virtual void i7(); virtual void i8(); virtual void i9(); virtual void i10(); virtual void i11(); virtual void i12(); virtual void i13(); virtual void i14(); virtual void i15(); virtual void i16(); virtual void i17(); virtual void i18(); virtual void i19(); virtual Pad **getPad(); };
struct Mgr { u8 pad[0x18]; Inp *inp; };
struct Snd { u32 f0; s32 f4; };
struct Self { u32 f0; Scr *f4; Ctx *f8; u8 padc[8]; Box *f14; s32 f18; };
struct Vt { u8 pad[8]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual f32 *get(s32); };
struct G460c { u8 pad[0x2f50]; u32 f2f50; };
struct G460 { u8 pad[0xc]; G460c *c; };
struct G690 { u32 f0; void *f4; };
extern Mgr *lbl_8035B5E4;
extern G460 * volatile lbl_8035B460;
struct O684;
extern O684 **lbl_8035B684;
extern u32 * volatile lbl_8035B418;
extern G690 * volatile lbl_8035B690;
extern char lbl_80366F70[8], lbl_80366F50[8], lbl_80366F58[8], lbl_80366F78[8], lbl_80366F84[8];
extern u32 lbl_80366F60;
extern f32 lbl_80366F80, lbl_80366F88, lbl_80366F8C, lbl_80366F90;
extern char lbl_802AA958[];
Snd *fn_800F8274(Mgr *, char *);
void fn_8015B000(void);
void fn_8015B014(void);
void *memset(void *, int, u32);
void *memcpy(void *, const void *, u32);
char *strcpy(char *, const char *);
char *strcat(char *, const char *);
void fn_800F6FBC(char *, void *);
Vt *fn_80207198(void *, const char *, s32);
void fn_80216044(void *, const char *);
void fn_80215FDC(void *);
s32 fn_800FBB9C(void);
void fn_800FBA70(s32);
void fn_8011B250(void);
void fn_802516A4(Mgr *, s32);
s32 fn_80253664(Snd *, s32);
s32 fn_8011DC28(Pad *, u32);

struct Sub3e0 { u8 d[4]; };
struct O684 { u8 pad[0x3e0]; Sub3e0 sub; };
static inline void SetVol(Msg *m, O684 *o) {
    if (&o->sub) m->f1c = *fn_80207198(&o->sub, lbl_802AA958, 0)->get(0);
    else m->f1c = lbl_80366F80;
}
static inline Pad *GetPad(Inp *i) {
    Pad **p = i->getPad();
    if (p) p = (Pad **)*p;
    return (Pad *)p;
}
static inline void SetR(Msg *m, Rect *r) {
    m->flags |= lbl_80366F60;
    if (r) memcpy(&m->r, r, sizeof(Rect));
}

static inline Snd *GetSnd() { return fn_800F8274(lbl_8035B5E4, lbl_80366F70); }

void fn_80272538(Self *s, char *name, s32 wait, s32 *out) {
    Msg m;
    char buf[128];
    Rect r;
    Pad *pad;
    s32 sOut = 0;
    s32 pOut = 0;
    Snd *snd;
    snd = GetSnd();
    {
        Pad **p = lbl_8035B5E4->inp->getPad();
        if (p) p = (Pad **)*p;
        pad = (Pad *)p;
    }
    s->f8->scr->a11();
    fn_8015B000();
    r.x = 0;
    r.y = 0;
    r.w = s->f8->dim->w;
    r.h = s->f8->dim->h;
    memset(&m, 0, sizeof(Msg));
    m.flags |= lbl_80366F60;
    if (&r != 0) memcpy(&m.r, &r, sizeof(Rect));
    m.f44 = 0;
    m.f0 = (u32)s->f8->scr;
    if (m.flags & 4) {
        strcpy(buf, lbl_80366F50);
        strcat(buf, name);
        strcat(buf, lbl_80366F58);
    } else {
        strcpy(buf, lbl_80366F50);
        strcat(buf, name);
        strcat(buf, lbl_80366F58);
    }
    *(char * volatile *)&m.f38 = buf;
    m.f18 = lbl_8035B460->c->f2f50;
    fn_800F6FBC(lbl_80366F78, m.f30);
    SetVol(&m, *lbl_8035B684);
    *(volatile s32 *)&m.f24 = 10;
    *(volatile u32 *)&m.f20 = *lbl_8035B418;
    fn_80216044(lbl_8035B690->f4, lbl_80366F84);
    s->f14->show(&m);
    fn_80215FDC(lbl_8035B690->f4);
    if (s->f14->f50 & 1) {
        s->f14->open();
        s->f18 = 1;
    }
    while (s->f18 != 0) {
        s32 t0 = fn_800FBB9C();
        s->f14->tick(lbl_80366F88);
        s->f4->a6();
        s->f18 = (s->f14->f50 >> 1) & 1;
        fn_802516A4(lbl_8035B5E4, 1);
        if (snd && snd->f4 && wait) {
            if (!((f32)fn_80253664(snd, 0x4c) >= lbl_80366F8C && (f32)fn_80253664(snd, 0x4c) <= lbl_80366F90)) sOut = 1;
            if (sOut && (f32)fn_80253664(snd, 0x4c) >= lbl_80366F8C && (f32)fn_80253664(snd, 0x4c) <= lbl_80366F90) {
                if (out) *out = 1;
                s->f18 = 0;
            }
        }
        if (pad && pad->fbc && wait) {
            if (fn_8011DC28(pad, 0x10000001) == 1) pOut = 1;
            if (pOut && fn_8011DC28(pad, 0x10000001) == 0) {
                if (out) *out = 1;
                s->f18 = 0;
            }
        }
        if (s->f18 == 1) {
            s32 d = 0x1c - (fn_800FBB9C() - t0);
            if (d < 0) d = 0;
            fn_800FBA70(d);
            fn_8011B250();
        }
    }
    s->f18 = 0;
    s->f14->close();
    if (s->f14) s->f14->b5();
    s->f8->scr->a11();
    fn_8015B014();
}
}
