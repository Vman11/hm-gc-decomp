// fn_80032CC4: per-frame game update.
#include "common.h"

struct Obj9C {
    u8 pad0[0x68];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(f32);
};
struct Ply {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(f32);
    virtual void v13(void *, s32, void *, s32, s32);
    u8 pad4[0x98];
    Obj9C *f9c;
    u8 padA0[0x16c];
    void *f20c;
};
struct Ctl {
    u8 pad0[0x2a4];
    s32 f2a4;
};
struct Glob {
    u8 pad0[0x48];
    Ply *f48;
    Ctl *f4c;
};
struct Tim {
    u8 pad0[0x10];
    s32 f10;
    f32 dt;
    f32 f18;
    u8 pad1c[0x27ec - 0x1c];
    f32 f27ec;
};
struct World {
    u8 pad0[0x2a0];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    u8 pad2a4[0x33b0 - 0x2a4];
    void *f33b0;
    u8 pad33b4[0x36b8 - 0x33b4];
    s32 f36b8;
};
struct Sta {
    u8 pad0[0x280];
    s32 f280;
    s32 f284;
    u8 pad288[8];
    f32 f290;
};
struct Game {
    u8 pad0[0x14];
    void *f14;
    u8 pad18[4];
    s32 f1c;
    u8 pad20[4];
    World *f24;
    void *f28;
    u8 pad2c[0x78 - 0x2c];
    void *f78;
    u8 f7c;
    u8 pad7d[3];
    void *f80;
    void *f84;
    u8 pad88[4];
    u32 f8c;
    u8 pad90[0x2b8 - 0x90];
    s32 f2b8;
    u8 pad2bc[0x2f0 - 0x2bc];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(s32); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(char *);
    virtual void v14(s32); virtual void v15(s32);
    u8 pad2f4[0x300 - 0x2f4];
    s32 f300;
    u8 pad304[0x770 - 0x304];
    u8 f770[0x7bc - 0x770];
    s32 f7bc;
    u8 pad7c0[8];
    void *f7c8;
    u8 f7cc[0x804 - 0x7cc];
    u8 f804[0x818 - 0x804];
    u8 f818[0xb70 - 0x818];
    Sta *fb70;
    s32 *fb74;
    s32 fb78;
    s32 fb7c;
    s32 fb80;
    s32 fb84;
    s32 fb88;
    s32 fb8c;
    u8 padb90[0xc30 - 0xb90];
    f32 fc30;
    s32 fc34;
};
struct Snd {
    u8 pad0[0xc0];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(char *, s32);
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(char *);
};
struct Cam {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(f32);
};
struct Snd2 {
    u8 pad0[0x1c4];
    Cam *f1c4;
};
struct Menu {
    u8 pad0[0x80];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54();
    virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(s32, s32);
};
struct Fade {
    u8 pad0[0x1c];
    s32 f1c;
    s32 f20;
};
struct HH { u8 pad0[0x33d8]; void *f33d8; u8 pad33dc[0x3404 - 0x33dc]; s32 f3404; };
struct PP { u8 pad0[4]; void *f4; };

extern "C" {
extern Tim *lbl_8035B488;
extern Glob *lbl_8035B308;
extern Game *lbl_8035B65C;
extern Snd *lbl_8035B684;
extern HH *lbl_8035A1DC;
extern Fade *lbl_8035A02C;
extern Fade *lbl_8035A01C;
extern void *lbl_8035A0A4;
extern void *lbl_8035B594;
extern void * volatile lbl_8035B79C;
extern PP *lbl_8035B5C4;
extern void *lbl_8035B5E4;
extern void **lbl_8035B334;
extern void *lbl_8035B39C;
extern f32 lbl_8035B018;
extern s32 lbl_80359FA0;
extern s8 lbl_80359FA4;
extern volatile s32 lbl_80359FA8;
extern s8 lbl_80359FAC;
extern f32 lbl_8035BD4C;
extern f32 lbl_8035BD7C;
extern f32 lbl_8035BD80;
extern f32 lbl_8035BDD8;
extern f32 lbl_8035BDEC;
extern f32 lbl_8035BE20;
extern char lbl_80294834[12];
extern char lbl_80294840[12];
extern char lbl_8035BD98[6];
extern char lbl_8035BDA0[6];
extern char lbl_8035BDE0[8];
extern char lbl_8035BDF0[7];
extern char lbl_8035BDF8[7];
extern char lbl_8035BE00[8];
extern char lbl_8035BE08[8];
extern char lbl_8035BE10[6];
extern char lbl_8035BE18[8];

void fn_80037D2C(void *);
void fn_800316C8(Game *, f32);
void fn_8026DA8C(void *, f32);
void fn_80268504(void *, f32);
f64 fn_800F049C(f64);
void fn_80039E80(Fade *, s32, f32);
void __ct__9C80253F24Fiiii(Game *, char *, s32, s32, s32);
void fn_8023EA4C(Tim *);
void fn_8003D130(void *, s32);
void fn_80039EA4(Fade *, f32);
void fn_80039F78(Fade *, s32);
void fn_80240244(void *);
void fn_802494A4(void *, s32);
void fn_80223934(void);
s32 fn_8024DAE0(void *);
void fn_8024DC30(void *);
void fn_8026820C(void *, s32);
void fn_80268178(void *, s32);
void fn_802680D8(void *);
s32 fn_80037AA4(void *, s32);
void fn_8002C3EC(void *, s32);
void fn_80037A34(void *);
void fn_80038E40(void *);
void fn_800377DC(void *);
void fn_8026D368(void *, void *);
void fn_8026C530(void *, void *);
void fn_8024EB24(void *, f32);
void fn_800303A8(char *, s32);
s32 fn_800F6CD0(char *, char *);
void fn_80039988(Fade *);
void fn_80038058(void *);
Menu *fn_801AA960(void *, char *, char *);
void fn_801C2368(void *, Menu *, s32);
void fn_80253E40(Game *);
void fn_8007479C(Ply *);
void fn_801C28C0(void *, f32);
void fn_802516A4(void *, s32);
void fn_8002AD6C(void *);
void fn_8002AAD4(void *, void *, void *, void *, f32);
void fn_80228A48(void *, f32);
void fn_8022EB48(void *, f32);
void fn_80235858(void *, f32);
void fn_80032478(void *, void *);
void fn_80254990(Game *, void *, void *);
void fn_80180600(void *, f32);
s32 fn_802542E8(Game *);

static inline f32 G27(Tim *t) { return t->f27ec; }
static inline f32 GK() { return lbl_8035BD4C; }
s32 fn_80032CC4(Game *self) {
    f32 dt;
    f32 d;
    f32 dt2;
    char buf[8];
    char buf2[8];
    u8 b18[12];
    u8 b24[20];
    s32 n;
    bool busy;

    dt = lbl_8035B488->dt;
    if (self->f300 != 0) fn_80037D2C(self->f770);
    if (self->fb8c != 0) fn_800316C8(self, dt);
    fn_8026DA8C(self->f80, dt);
    fn_80268504(self->f84, dt);
    if (self->fb84 != 0) return 0;
    if (self->fb80 != 0) {
        lbl_8035A1DC->f3404 = 1;
        return 0;
    }
    {
        f32 r;
        d = lbl_8035BD4C - lbl_8035B018;
        r = lbl_8035B488->f18;
        if ((f32)__fabs(d) > lbl_8035BD4C) {
            f32 x = lbl_8035BD7C - (f32)fn_800F049C(lbl_8035BDEC * r); lbl_8035B018 = x * d + lbl_8035B018;
        }
    }
    if (self->f2b8 != 0) {
        if (lbl_8035A02C->f20 != 0) {
            self->fc30 -= lbl_8035B488->dt;
            if (self->fc30 <= lbl_8035BD4C) {
                fn_80039E80(lbl_8035A02C, 0, lbl_8035BDD8);
                self->f2b8 = 0;
                __ct__9C80253F24Fiiii(self, lbl_80294834, 0, 0, 0);
            }
        }
        lbl_8035B308->f48->f9c->v11(dt);
        self->v6(self->f1c);
        fn_8023EA4C(lbl_8035B488);
        self->f24->v39();
        return 1;
    }
    switch (*self->fb74) {
    case 1:
        self->v8();
        break;
    case 4:
        fn_8003D130(lbl_8035A0A4, 0);
        lbl_8035B65C->v13(lbl_8035BDA0);
        break;
    case 5:
        fn_80039E80(lbl_8035A02C, 1, lbl_8035BD80);
        while (lbl_8035A02C->f20 != 0) {
            fn_8023EA4C(lbl_8035B488);
            fn_80039EA4(lbl_8035A02C, lbl_8035B488->dt);
            self->v6(self->f1c);
            fn_80039F78(lbl_8035A02C, self->f1c);
            self->f24->v39();
        }
        lbl_8035B308->f48->v4();
        self->fb84 = 1;
        break;
    case 6: {
        Ply *p = lbl_8035B308->f48;
        fn_80240244(p->f20c);
        fn_802494A4(p->f20c, 0);
        p->v4();
        self->v8();
        break;
    }
    case 7:
    case 10:
        lbl_8035B684->v8(lbl_80294840);
        break;
    }
    if ((self->f7bc != 0 && self->fb8c == 0) || self->fc34 != 0) {
    if (lbl_8035B308->f4c->f2a4 != 0 && self->fc34 == 0) {
        fn_80223934();
    } else {
        self->fc34 = 0;
        if (fn_8024DAE0(lbl_8035B594)) fn_8024DC30(lbl_8035B594);
        if (self->fb78 == 0) {
            if (self->fb7c == 0) {
                if (lbl_8035BD4C == G27(lbl_8035B488)) lbl_8035B488->f27ec = lbl_8035BD7C;
                __ct__9C80253F24Fiiii(self, lbl_8035BDF0, 0, 0, 0);
                self->v14(1);
                fn_8026820C(lbl_8035B79C, 12);
            } else {
                self->v15(1);
                fn_80268178(lbl_8035B79C, 12);
                fn_802680D8(lbl_8035B79C);
            }
        }
        self->fb78 = 1;
    }
    } else {
        self->fb78 = 0;
    }
    if (self->fb70->f280 != 0) fn_80037D2C(self->f770);
    n = *self->fb74;
    if (n == 7) {
        *self->fb74 = 0;
    } else if (n == 2) {
        self->v15(1);
        fn_80268178(lbl_8035B79C, 12);
        fn_802680D8(lbl_8035B79C);
        __ct__9C80253F24Fiiii(self, lbl_8035BDF8, 0, 0, 0);
    } else if (n >= 1) {
        self->v15(1);
        fn_80268178(lbl_8035B79C, 12);
        fn_802680D8(lbl_8035B79C);
    }
    if (!lbl_80359FA4) {
        lbl_80359FA0 = 0;
        lbl_80359FA4 = 1;
    }
    if (fn_80037AA4(self->f770, 0x6f)) {
        if (lbl_80359FA0 == 0) {
            fn_8002C3EC(self->f818, 1);
            lbl_80359FA0 = 1;
        }
    } else {
        fn_8002C3EC(self->f818, 0);
        lbl_80359FA0 = 0;
    }
    if (self->f7c) {
        fn_80037A34(self->f770);
        fn_80038E40(self->f7cc);
        fn_800377DC(self->f804);
    }
    fn_8026D368(self->f80, self->f28);
    if (self->f300 != 0) {
        fn_80039E80(lbl_8035A02C, 0, lbl_8035BD80);
        if (self->f24->f36b8 == 0) fn_8026C530(self->f80, self->f14);
        self->f300 = 0;
    }
    {
        Sta *s = self->fb70;
        busy = false;
        if (s->f284 != 0 || s->f290 != lbl_8035BD4C) busy = true;
    }
    if (!busy) fn_8024EB24(lbl_8035B5C4->f4, lbl_8035B488->dt);
    fn_800303A8(buf, 0);
    if (!lbl_80359FAC) {
        lbl_80359FA8 = 1;
        lbl_80359FAC = 1;
    }
    if (fn_800F6CD0(buf, lbl_8035BDE0)) {
        if (lbl_80359FA8 == 0) {
            fn_80039988(lbl_8035A01C);
            fn_8026820C(lbl_8035B79C, 13);
        }
        fn_80038058(self->f7c8);
        if (lbl_8035A01C->f1c != 0) {
            Menu *m = fn_801AA960(lbl_8035B65C->f24->f33b0, lbl_8035BE00, lbl_8035BE08);
            m->v59(0, 1);
            fn_801C2368(self->f78, m, 1);
        }
        lbl_80359FA8 = 1;
    } else if (lbl_80359FA8 != 0) {
        lbl_80359FA8 = 0;
        fn_80268178(lbl_8035B79C, 13);
        fn_802680D8(lbl_8035B79C);
    }
    lbl_8035B684->v3(buf2, -1);
    if (fn_800F6CD0(buf2, lbl_8035BDA0)) fn_80038058(self->f7c8);
    fn_80253E40(self);
    ((Snd2 *)lbl_8035B684)->f1c4->v11(dt);
    if (self->fb7c != 0 || fn_800F6CD0(buf, lbl_8035BE10)) {
    fn_8007479C(lbl_8035B308->f48);
    fn_80039EA4(lbl_8035A02C, lbl_8035B488->dt);
    fn_801C28C0(self->f78, dt);
    n = self->fb7c;
    if (n == 0) self->v14(0);
    self->v6(self->f1c);
    if (n == 0) self->v15(0);
    if (self->fb7c != 0) {
        fn_80038058(self->f7c8);
    } else {
        self->fb7c = 0;
    }
    if (self->fb7c != 0) fn_802516A4(lbl_8035B5E4, lbl_8035B488->f10);
    fn_8002AD6C(self->f818);
    if (fn_800F6CD0(buf, lbl_8035BE18)) {
        if (self->fb88 != 0) {
            Ply *p = lbl_8035B308->f48;
            p->v13(b24, 0, b18, 0, 0);
            fn_8002AAD4(self->f818, self->f28, b24, b18, dt);
            p->f9c->v11(dt);
            p->v12(dt);
        }
    } else if (fn_800F6CD0(buf, lbl_8035BD98)) {
        dt2 = dt * lbl_8035BE20;
        fn_80228A48(lbl_8035B334[0], dt2);
        fn_8022EB48(lbl_8035B334[2], dt2);
        fn_80235858(lbl_8035B39C, dt2);
    }
    fn_8023EA4C(lbl_8035B488);
    if (fn_800F6CD0(buf, lbl_8035BDE0)) fn_802516A4(lbl_8035B5E4, lbl_8035B488->f10);
    self->f24->v39();
    return 1;
    }
    fn_80254990(self, self->f14, (void *)fn_80032478);
    fn_80180600(lbl_8035A1DC->f33d8, dt);
    self->f8c |= 0x40;
    return fn_802542E8(self);
}
}
