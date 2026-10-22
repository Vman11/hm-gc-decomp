// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

extern "C" {

struct R10B { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct Key10B { u8 d[8]; };
struct Tmp10B { u8 d[0x10]; };
struct L10B { u8 pad[0x10]; virtual void p0(); virtual void clr(); };
class C8010C958 { public: u8 d[0x20]; C8010C958(); ~C8010C958(); };
class C80112EB8 { public: u8 d[0x14]; u8 k[0x18]; C80112EB8(); ~C80112EB8(); };
struct P10B;
class C8010E3F8 { public: u8 pad[0x10]; virtual void v0(); virtual void v1(); virtual void init(P10B *, R10B *, void *, s32, s32); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void fin(); u8 k[0x30]; C8010E3F8(); };
struct P10B { L10B l; C8010C958 *f14; C80112EB8 *f18; C8010E3F8 **f1c; L10B f20; u32 f34; u32 f38; u32 f3c; u32 pad40[2]; s32 f48; };
u32 fn_800FADA8(R10B *);
void fn_800FB064(R10B *, void *);
void fn_800FB000(R10B *, s32);
void fn_800FAEA0(R10B *);
void fn_800FAEF8(R10B *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800F8E38(void *, u32);
void fn_800F87F0(void *, void *, void *);
void fn_800F6E88(void *, void *);
void fn_802072D4(void *, P10B *, void *);
void fn_8010C4D0(C8010C958 *, R10B *);
void fn_80112B28(C80112EB8 *, R10B *, L10B *);
extern void *lbl_8035AAB0;
extern char lbl_802E26D0[];

s32 fn_8010B9F4(P10B *p, void *ctx, R10B *r, Key10B *key, void *x, s32 flag) {
    Key10B lk;
    Tmp10B tmp;
    u32 k;
    u32 i;

    if (p->f48 != 0) p->l.clr();
    r->setup(lbl_802E26D0, 0x22, 0);
    k = r->next();
    if (k == 0x5a) {
        if (key) {
            fn_800FB064(r, key);
            fn_802072D4(ctx, p, key);
        } else {
            fn_800FB064(r, &lk);
            fn_802072D4(ctx, p, &lk);
        }
        k = r->next();
    }
    if (k != 0x39) r->err(0x1e);
    p->f34 = fn_800FADA8(r);
    if (p->f34) {
        fn_800F8E38(&p->f20, p->f34);
        if (!lbl_8035AAB0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AAB0);
        p->f14 = new C8010C958[p->f34];
        fn_800F7E98();
        if (!p->f14) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < p->f34; i++) {
            fn_8010C4D0(&p->f14[i], r);
            fn_800F6E88(&tmp, &p->f14[i]);
            fn_800F87F0(&p->f20, &tmp, &p->f14[i]);
        }
    }
    fn_800FAEA0(r);
    if (r->next() != 0x3b) r->err(0x1e);
    p->f38 = fn_800FADA8(r);
    if (p->f38) {
        if (!lbl_8035AAB0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AAB0);
        p->f18 = new C80112EB8[p->f38];
        fn_800F7E98();
        if (!p->f18) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < p->f38; i++) {
            fn_80112B28(&p->f18[i], r, &p->f20);
        }
    }
    fn_800FAEA0(r);
    if (r->next() != 0x3d) r->err(0x1e);
    p->f3c = fn_800FADA8(r);
    if (p->f3c) {
        fn_800F8E38(p, p->f38 + p->f3c);
        for (i = 0; i < p->f38; i++) {
            fn_800F6E88(&tmp, p->f18[i].k);
            fn_800F87F0(p, &tmp, &p->f18[i]);
        }
        if (!lbl_8035AAB0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AAB0);
        p->f1c = new C8010E3F8 *[p->f3c];
        fn_800F7E98();
        if (!p->f1c) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < p->f3c; i++) {
            fn_800FB000(r, 0x3e);
            if (!lbl_8035AAB0) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AAB0);
            p->f1c[i] = new C8010E3F8;
            fn_800F7E98();
            if (!p->f1c[i]) fn_800604C4(-4, 0, 0, 0);
            fn_800FAEF8(r);
            p->f1c[i]->init(p, r, x, 0, flag);
            fn_800F6E88(&tmp, p->f1c[i]->k);
            fn_800F87F0(p, &tmp, p->f1c[i]);
        }
    }
    if (flag) fn_800FAEA0(r);
    for (i = 0; i < p->f3c; i++) {
        p->f1c[i]->fin();
    }
    p->f48 = 1;
    return 0;
}

}

} /* extern "C" */
