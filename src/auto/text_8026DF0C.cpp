// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
// NonMatching: only ctx register differs (target r29, mine r27; 12 asm diff lines).
#include "common.h"

extern "C" {

struct G7C4 {
    u8 pad_v[0x24];
    virtual void w0();
    virtual void w1();
    virtual void w2();
    virtual void w3();
    virtual void w4();
    virtual void w5();
    virtual void w6();
    virtual void w7();
    virtual void w8();
    virtual void w9();
    virtual void w10();
    virtual void w11();
    virtual void set(f32);
};
struct Y26D { u8 pad[0x10]; f32 f10; };
struct X26D {
    u8 pad_v[0x10];
    virtual void w0();
    virtual void w1();
    virtual void w2();
    virtual void w3();
    virtual void w4();
    virtual Y26D *at(u32);
    u8 pad14[4]; u32 f18;
};
struct T26D;
struct T26D {
    u8 pad0[8]; u32 f8; u32 fc; u8 pad10[4]; char f14[0x10];
    virtual void w0();
    virtual void w1();
    virtual void w2();
    virtual void w3();
    virtual void w4();
    virtual void w5();
    virtual void w6();
    virtual void *get(u32);
    virtual X26D *get2(s32);
};
struct G7C0 {
    virtual void w0();
    virtual void w1();
    virtual void w2();
    virtual void w3();
    virtual void w4();
    virtual T26D *make();
};
struct Z26D {
    u8 pad_v[0x8];
    virtual void w0();
    virtual void w1();
    virtual void w2();
    virtual void w3();
    virtual void w4();
    virtual void *get(s32);
};
struct R26D { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
class C80215F50 { public: u8 pad[0x2c]; R26D *r; u8 pad30[8]; C80215F50(); ~C80215F50(); };
struct Sub26D { char k[8]; void *a; u32 b; u32 c; u32 d; };
struct Ent26D { char name[8]; u32 n; u32 n2; Sub26D sub[10]; };
struct E4C26D { u32 a; u32 b; };
struct P26D { u8 pad[0x14]; T26D *f14; T26D *f18; u32 pad1c; void *f20; u8 pad24[0x30 - 0x24]; u32 f30; f32 *f34; u8 pad38[0x44 - 0x38]; u32 f44; u32 pad48; E4C26D f4c[1]; u8 pad54[0x18c - 0x54]; u32 f18c; Ent26D *f190; u8 f194[0x18]; s32 f1ac; };
struct G65C { u8 pad[8]; void *f8; u8 padc[0x24 - 0xc]; u8 *f24; };
void fn_80216044(void *, char *);
void fn_800F6FBC(void *, void *);
void fn_800F6E40(void *, void *);
void fn_800E8F6C(char *, char *, ...);
s32 fn_802160B8(void *, char *, s32);
struct G418 { void *f0; };
char *fn_8023C824(G418 *, void *);
char *strncpy(char *, const char *, unsigned long);
char *strcat(char *, const char *);
void fn_801FAB7C(T26D *, void *, void *, s32);
s32 fn_80215C84(C80215F50 *, void *, char *, s32, s32);
void fn_80060E30(s32, char *, ...);
u32 fn_800FADA8(R26D *);
void fn_800FB0F8(R26D *, char **);
void fn_8026E778(P26D *, void *, char *, u32 *);
void fn_80215BFC(C80215F50 *);
void fn_80215FDC(void *);
void fn_800F8E38(void *, u32);
s32 fn_800F6CD0(void *, char *);
void *fn_800F8274(void *, void *);
void fn_800F87F0(void *, void *, void *);
Z26D *fn_80207198(void *, char *, s32);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
extern G7C4 *lbl_8035B7C4;
extern G7C0 *lbl_8035B7C0;
extern G65C *lbl_8035B65C;
extern G418 *lbl_8035B418;
extern void *lbl_8035B7C8;
extern void *lbl_8035B7B8;
extern f32 lbl_80366DD4;
extern char lbl_802AA558[];
extern char lbl_80366DF0[8];
extern char lbl_80366DF8[4];
extern char lbl_80366DFC[8];
extern char lbl_80366E04[8];
extern char lbl_80366DD8[8];
extern char lbl_80359E38[8];

static inline void *find26(P26D *p, char *key, char *pool) {
    char buf30[0x40];
    char b14[0xc];
    void *r;
    u32 q;
    if (fn_800F6CD0(key, lbl_80366DD8)) return 0;
    for (q = 0; q < p->f14->f8; q++) {
        r = fn_800F8274(p->f14->get(q), key);
        if (r) return r;
    }
    if (p->f18) {
        for (q = 0; q < p->f18->f8; q++) {
            r = fn_800F8274(p->f18->get(q), key);
            if (r) return r;
        }
    }
    fn_800F6E40(b14, key);
    fn_800E8F6C(buf30, pool + 0x2a0, b14);
    return 0;
}

void fn_8026DF0C(P26D *p, void *a) {
    char bufA8[0x80];
    char buf20[0x10];
    u8 kc[8];
    char *s8;
    char *pool;
    void *ctx;
    u32 i;
    u32 n;
    R26D *rd;
    u32 k;
    pool = lbl_802AA558;

    ctx = lbl_8035B65C->f8;
    lbl_8035B7C4->set(lbl_80366DD4);
    p->f1ac = 1;
    for (i = 0; i < p->f44; i++) p->f4c[i].a = 0;
    fn_80216044(ctx, pool + 0x2d0);
    fn_800F6FBC(a, kc);
    fn_800F6E40(a, kc);
    fn_800E8F6C(buf20, lbl_80366DF0, a);
    if (fn_802160B8(ctx, buf20, 0) == 0) {
        s32 e;
        p->f18 = lbl_8035B7C0->make();
        strncpy(p->f18->f14, fn_8023C824(lbl_8035B418, lbl_8035B418->f0), 0x10);
        fn_801FAB7C(p->f18, lbl_8035B7C8, a, 0);
        C80215F50 obj;
        e = fn_80215C84(&obj, a, lbl_80366DF8, 2, 0);
        if (e) fn_80060E30(e, pool + 0x2dc);
        rd = obj.r;
        rd->setup(lbl_80359E38, 1, 0);
        k = rd->next();
        while (k != 0x39 && k != 0) k = rd->next();
        if (k == 0x39) {
            n = fn_800FADA8(rd);
            for (u32 m = 0; m < n; m++) {
                fn_800FB0F8(rd, &s8);
                fn_800E8F6C(bufA8, s8, fn_8023C824(lbl_8035B418, lbl_8035B418->f0));
                strcat(bufA8, lbl_80366DFC);
                fn_8026E778(p, ctx, bufA8, &p->f18c);
                delete[] s8;
            }
        }
        fn_80215BFC(&obj);
        e = fn_80215C84(&obj, lbl_80366E04, lbl_80366DF8, 2, 0);
        if (e) fn_80060E30(e, pool + 0x2dc);
        rd = obj.r;
        rd->setup(lbl_80359E38, 1, 0);
        k = rd->next();
        while (k != 0x39 && k != 0) k = rd->next();
        if (k == 0x39) {
            n = fn_800FADA8(rd);
            for (u32 m = 0; m < n; m++) {
                fn_800FB0F8(rd, &s8);
                fn_800E8F6C(bufA8, s8, fn_8023C824(lbl_8035B418, lbl_8035B418->f0));
                strcat(bufA8, lbl_80366DFC);
                fn_8026E778(p, ctx, bufA8, &p->f18c);
                delete[] s8;
            }
        }
        fn_80215BFC(&obj);
    }
    fn_80215FDC(ctx);
    fn_800F8E38(p->f194, p->f18c);
    for (i = 0; i < p->f18c; i++) {
        u32 j;
        for (j = 0; j < p->f190[i].n; j++) {
            void *r = find26(p, p->f190[i].sub[j].k, pool);
            p->f190[i].sub[j].a = r;
        }
        fn_800F87F0(p->f194, &p->f190[i], &p->f190[i]);
    }
    p->f20 = fn_80207198(lbl_8035B65C->f24 + 0x3e0, pool + 0x30c, 0)->get(0);
    if (p->f18 && p->f18->fc) {
        X26D *x = p->f18->get2(0);
        p->f30 = x->f18;
        if (!lbl_8035B7B8) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B7B8);
        p->f34 = new f32[p->f30];
        fn_800F7E98();
        if (!p->f34) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < p->f30; i++) p->f34[i] = x->at(i)->f10;
    }
}

}
