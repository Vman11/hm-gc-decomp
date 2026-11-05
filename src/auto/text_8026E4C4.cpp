#include "common.h"

extern "C" {

void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035B7B8;
}
struct V3 { f32 x, y, z; };
struct Y { u8 pad[88]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void bind(void *, s32); virtual void a6(); virtual void a7(); virtual void a8(); virtual void idle(); virtual void a10(); virtual void a11(); virtual void mode(s32); };
struct Zt;
struct Bk { u8 pad[20]; char name[16]; virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7(); virtual Zt *root(s32); };
struct Rr { virtual void r0(); virtual void r1(); virtual void r2(); virtual void r3(); virtual void r4(); virtual Bk *newBank(); virtual void r6(); virtual void r7(); virtual void r8(); virtual void r9(); virtual void r10(); virtual void r11(); virtual void r12(); virtual void r13(); virtual void r14(); virtual Y *newVoice(); virtual void r16(); virtual void r17(); virtual void r18(); virtual struct Gv *getOut(); };
struct Gv { u8 pad[36]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void attach(void *); virtual void v9(); virtual void setB(f32); virtual void v11(); virtual void setVol(f32); };
struct Ent { Y *p; u32 q; };
struct S { u8 pad[20]; Bk *bank; u8 pad24[36 - 24]; Y *a36; Y *a40; Y *a44; u8 pad48[68 - 48]; u32 n68; Ent ent[40]; u8 pad392[400 - 392]; u8 *f400; u8 pad404[424 - 404]; f32 f424; };
struct X { u8 pad[20]; void *g; Gv *out; };
struct G2 { u8 pad[13232]; X *x; };
struct G1 { u8 pad[12]; G2 *g; };
struct Lg { void *lang; };
extern "C" {
extern Rr *lbl_8035B7C0;
extern void *volatile lbl_8035B7C8;
extern Gv *volatile lbl_8035B7C4;
extern G1 *lbl_8035B460;
extern Lg *lbl_8035B418;
extern f32 lbl_80366DD0, lbl_80366DD4;
extern char lbl_80366DF0[8], lbl_80366E0C[8], lbl_80366E14[8];
extern char lbl_802AA870[];
void fn_801FC834(Gv *, V3 *, V3 *, V3 *);
void fn_800E8F6C(char *, const char *, ...);
s32 fn_802160B8(void *, char *, s32);
char *fn_8023C824(Lg *, void *);
char *strncpy(char *, const char *, u32);
void fn_801FAB7C(Bk *, void *, char *, s32);
Y *fn_800F8274(Zt *, const char *);

void fn_8026E4C4(S *s, Rr *r, void *g, char *name, void *db) {
    u32 i;
    u32 z;
    char buf[64];
    volatile f32 m[9];
    if (!lbl_8035B7C0) {
        lbl_8035B7C0 = r;
        lbl_8035B7C8 = g;
        lbl_8035B7C4 = r->getOut();
        lbl_8035B7C4->attach(lbl_8035B7C8);
        lbl_8035B7C4->setVol(lbl_80366DD0);
        lbl_8035B7C4->setB(lbl_80366DD0);
        f32 o;
        f32 z = *(volatile f32 *)&lbl_80366DD4;
        m[6] = z; m[7] = z; m[8] = z; m[3] = z;
        o = *(volatile f32 *)&lbl_80366DD0;
        m[4] = o; m[5] = z; m[0] = z; m[1] = z; m[2] = o;
        fn_801FC834(lbl_8035B7C4, (V3 *)&m[6], (V3 *)&m[3], (V3 *)&m[0]);
    }
    {
        X *x = lbl_8035B460->g->x;
        x->out = lbl_8035B7C4;
        x->g = g;
    }
    for (i = z = 0; i < s->n68; i++) {
        s->ent[i].p = r->newVoice();
        s->ent[i].p->bind(g, 1);
        s->ent[i].p->idle();
        s->ent[i].q = z;
    }
    s->f424 = lbl_80366DD0;
    if (!lbl_8035B7B8) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B7B8);
    s->f400 = new u8[256000];
    fn_800F7E98();
    if (!s->f400) fn_800604C4(-4, 0, 0, 0);
    fn_800E8F6C(buf, lbl_80366DF0, name);
    if (!fn_802160B8(db, buf, 0)) {
        Zt *t;
        s->bank = lbl_8035B7C0->newBank();
        strncpy(s->bank->name, fn_8023C824(lbl_8035B418, lbl_8035B418->lang), 16);
        fn_801FAB7C(s->bank, lbl_8035B7C8, name, 0);
        t = s->bank->root(0);
        s->a36 = fn_800F8274(t, lbl_802AA870);
        s->a40 = fn_800F8274(t, lbl_80366E0C);
        s->a40->mode(3);
        s->a44 = fn_800F8274(t, lbl_80366E14);
    }
}

} /* extern "C" */
