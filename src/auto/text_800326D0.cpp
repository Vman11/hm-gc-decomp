#include "common.h"

extern "C" {

/* NonMatching draft (wDJ best, committed by wMF): DIFF 26 / SDIFF 20 vs target. Left: rect int->float conversion block scheduling (stfs f1 at 40/44 kept early in target) and 'li r5,0; mr r3,r5' zero CSE. See wCZ/wDJ/wGY STATUS for tried variants. */
struct V4 { f32 x, y, z, w; };
struct C8023C7CC {
    u8 pad[8];
    void *a;
    void *b;
    u8 pad2[16];
    C8023C7CC();
    ~C8023C7CC();
};
struct Scr { u8 pad[0x1c]; u16 w; u16 h; };
struct Gx { u8 pad0[4]; Scr *scr; u8 pad8[0x1928]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void set(u32, s32, s32); virtual void end(); virtual void begin(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void cull(s32); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void color(V4 *); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59(); virtual void p60(); virtual void p61(); virtual void flush(); };
struct CamObj { u8 pad0[8]; V4 c; u8 pad18[0x50]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void tint(V4 *); };
struct Cam { u8 pad[0x9c]; CamObj *o; };
struct Scene { u8 pad[0x48]; Cam *cam; };
struct Snd { u8 pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void vol(u32); };
struct Q { u32 flags; u8 pad[0x54]; Q *sub; };
struct W { u8 pad[0x9c]; Q *q; };
struct Fade { u8 pad[0x284]; s32 on; u8 pad288[8]; f32 a; u8 pad294[0xc]; s32 h; };
struct Z { u8 pad[0x33bc]; f32 *vol; };
struct P30 { u8 pad[4]; struct { void *p; } *s; };
struct Self {
    u32 mode;
    u8 pad4[8];
    void *f0c;
    u8 pad10[8];
    u8 *f18;
    Snd **f1c;
    u8 pad20[4];
    Z *f24;
    u32 f28;
    u32 f2c;
    P30 *f30;
    u8 pad34[0x24];
    V4 f58;
    u8 pad68[0xc];
    void *f74;
    void *f78;
    u8 pad7c[0x10];
    u32 f8c;
    u8 pad90[0x238];
    s32 f2c8;
    u8 pad2cc[0x548];
    void *f814;
    u8 f818[0x358];
    Fade *fb70;
    u8 padb74[8];
    s32 fb7c;
    u8 padb80[0xc];
    s32 fb8c;
    u8 padb90[0x88];
    void *fc18;
};
void fn_80100CF4(V4 *);
void fn_8002B760(void *, u8);
void fn_8019AA94(void *, u8 *);
void fn_80228678(void *, Snd **);
void fn_80271EAC(void *);
void fn_8023C720(C8023C7CC *, void *);
void fn_8023C528(C8023C7CC *, s32);
void *fn_8023A490(void *, void *);
void fn_8023C3F4(C8023C7CC *);
void fn_801904C0(Q *, Snd **, void *, int);
void fn_8019A504(void *, u8 *, P30 *);
void fn_802540E0(Self *, Gx *);
void fn_800303A8(char *, int);
int fn_800F6CD0(char *, char *);
void fn_8003984C(void *);
void fn_8023A8AC(void *, V4 *, void *, Gx *, f32);
void fn_8002C34C(void *, Gx *);
void fn_801C3050(void *, Gx *);
void fn_80039F78(void *, Gx *);
extern Scene *lbl_8035B308;
extern void **lbl_8035B334;
extern void *lbl_8035A01C;
extern void *lbl_8035A02C;
extern char lbl_8035BDE0[8];
extern volatile f32 lbl_8035BDD4;
extern f32 lbl_8035BDD8;
extern volatile f32 lbl_8035BD7C;
extern f32 lbl_8035BDDC;
extern f32 lbl_8035BD4C;

static inline u8 Active(Fade *f) {
    u8 r = 0;
    if (f->on != 0 || f->a != lbl_8035BD4C) r = 1;
    return r;
}

void fn_800326D0(Self *self, Gx *gx) {
    volatile V4 a;
    volatile V4 b;
    Cam *cam;
    Z *z;
    fn_80100CF4((V4 *)&a);
    fn_80100CF4((V4 *)&b);
    cam = lbl_8035B308->cam;
    if (cam != 0) {
        CamObj *o = cam->o;
        a.x = o->c.x; a.y = o->c.y; a.z = o->c.z; a.w = o->c.w;
        b.x = o->c.x; b.y = o->c.y; b.z = o->c.z; b.w = o->c.w;
        b.w = o->c.w * lbl_8035BDD4;
        o->tint((V4 *)&b);
    }
    if (self->fb7c == 0) fn_8002B760(self->f818, self->fb8c == 0);
    z = self->f24;
    gx->set(self->f28, 7, 0);
    *(Gx **)(self->f18 + 8) = gx;
    gx->color(&self->f58);
    if (self->f8c & 0x20) gx->cull(1);
    else gx->cull(0);
    if (self->f0c != 0) fn_8019AA94(self->f0c, self->f18);
    {
        volatile V4 c;
        c.x = lbl_8035BDD8;
        c.y = lbl_8035BDD8;
        c.z = lbl_8035BDD8;
        c.w = lbl_8035BD7C;
        gx->color((V4 *)&c);
    }
    fn_80228678(*lbl_8035B334, self->f1c);
    gx->color(&self->f58);
    fn_80271EAC(self->f74);
    if (self->mode == 1) {
        C8023C7CC it;
        fn_8023C720(&it, lbl_8035B308);
        fn_8023C528(&it, 0);
        while (it.a != 0) {
            Q *q = ((W *)(it.a != 0 ? fn_8023A490(it.a, it.b) : 0))->q;
            if (q != 0) {
                if (q->flags & 2) {
                    fn_801904C0(q, self->f1c, self->f30->s->p, 0);
                } else {
                    q = q->sub;
                    if (q != 0 && (q->flags & 2)) fn_801904C0(q, self->f1c, self->f30->s->p, 0);
                }
            }
            fn_8023C3F4(&it);
        }
    }
    if (self->mode == 4) fn_8019A504(self->f0c, self->f18, self->f30);
    {
        f32 *vol = z->vol;
        Snd *snd = *self->f1c;
        snd->vol(vol != 0 ? (u32)(lbl_8035BDDC * *vol) : 0x80);
    }
    fn_802540E0(self, gx);
    {
        char buf[8];
        fn_800303A8(buf, 0);
        if (fn_800F6CD0(buf, lbl_8035BDE0) != 0) fn_8003984C(lbl_8035A01C);
    }
    gx->flush();
    if (Active(self->fb70)) {
        V4 r1, r2;
        gx->set(self->f2c, 0, 0);
        gx->begin();
        {
            s32 w = gx->scr->w;
            s32 h = gx->scr->h;
            s32 off = self->fb70->h;
            r1.x = lbl_8035BD4C;
            r1.y = lbl_8035BD4C;
            r1.z = w;
            r1.w = off;
            r2.x = lbl_8035BD4C;
            r2.y = h - off;
            r2.z = w;
            r2.w = h;
        }
        fn_8023A8AC(self->fc18, &r1, self->f814, gx, lbl_8035BD4C);
        fn_8023A8AC(self->fc18, &r2, self->f814, gx, lbl_8035BD4C);
        gx->end();
        gx->flush();
    }
    {
        u8 skip = 0;
        if (Active(self->fb70) && !(self->f8c & 0x10)) skip = 1;
        if (!skip) {
            fn_8002C34C(self->f818, gx);
            if (self->f2c8 != 0) {
                gx->set(self->f28, 0, 0);
                fn_801C3050(self->f78, gx);
                gx->flush();
            }
        }
    }
    if (self->fb7c != 0) {
        char buf2[8];
        fn_800303A8(buf2, 0);
    }
    if (Active(self->fb70)) fn_80039F78(lbl_8035A02C, gx);
    if (cam != 0) cam->o->tint((V4 *)&a);
}

} /* extern "C" */
