#include "common.h"
struct FB { u32 x0; u8 pad4[12]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void al(u32); };
struct C80215414 { u8 pad[4]; FB *x4; C80215414(); ~C80215414(); };
struct C801768A4 { u8 d[104]; C801768A4(); ~C801768A4(); };
struct C80170688 { u8 d[112]; C80170688(); ~C80170688(); };
struct Er { virtual void s0(); virtual void s1(); virtual int get(); };
extern "C" {
struct Hdr { char name[8]; u32 size; u32 x12; u32 x16; u32 x20; u32 x24; u32 x28; u32 x32; u32 x36; u32 x40; u32 x44; u32 x48; u32 x52; u32 x56; u32 x60; };
struct Heap { u8 pad[24]; u32 x24; u32 x28; };
struct O { u8 pad0[20]; u32 x20; u8 pad24[4]; u32 x28; u8 pad32[40 - 32]; u8 *x40; C801768A4 *x44; u8 pad48[4]; C80170688 *x52; u32 x56; u8 *x60; u32 x64; };
extern char lbl_803645F0[8], lbl_803645F4[8];
extern Heap *lbl_8035A9F4, *lbl_8035AC18;
int fn_80215284(C80215414 *, char *, char *, int);
void fn_80060E30(int, char *, char *, char *, ...);
int fn_80215154(C80215414 *, void *, u32, int);
int fn_802151F4(C80215414 *, u8 *, u32, int, Er **);
void fn_80215110(C80215414 *, Er *);
void fn_80215230(C80215414 *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(Heap *);
void fn_80133A18(O *, void *, u32, char *);
void fn_80175FA0(C801768A4 *, u8 **, u8 **);
void fn_80170354(C80170688 *, void *, u8 **, u8 **);
void fn_8015EED0(u8 *, void *, O *, u8 **, u8 **, u8 **, u8 **, u8 **, void *);
void fn_800F87F0(O *, void *, u8 *);
static inline void Pri(Heap *h) {
    if (h->x24 >= 5) h->x28 = h->x24;
    else h->x28 = 5;
}
void fn_80160140(O * o_in, void *ctx, char *name) {
    O * o = o_in;
    Er *er;
    u8 *p32, *p28, *p24, *p20, *p16;
    C80215414 f;
    u8 l40[8];
    u8 *buf;
    Hdr hdr;
    u8 h56[16];
    u32 sz;
    int e;
    u32 i;
    if ((e = fn_80215284(&f, name, lbl_803645F0, 2)) != 0) fn_80060E30(e, lbl_803645F4, name, lbl_803645F0);
    if ((e = fn_80215154(&f, h56, 16, 0)) != 0) fn_80060E30(e, lbl_803645F4, name, lbl_803645F0);
    if ((e = fn_80215154(&f, &hdr, 64, 0)) != 0) fn_80060E30(e, lbl_803645F4, name, lbl_803645F0);
    f.x4->al((f.x4->x0 + 31) & ~31);
    sz = hdr.size;
    Pri(lbl_8035A9F4);
    if (!lbl_8035A9F4) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    buf = new u8[sz];
    fn_800F7E98();
    if (!buf) fn_800604C4(-4, 0, 0, 0);
    lbl_8035A9F4->x28 = lbl_8035A9F4->x24;
    e = fn_802151F4(&f, buf, sz, 0, &er);
    if (e == 7) {
        e = er->get();
        fn_80215110(&f, er);
    }
    if (e) fn_80060E30(e, lbl_803645F4, name, lbl_803645F0);
    o->x64 = hdr.x40;
    Pri(lbl_8035AC18);
    if (!lbl_8035AC18) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AC18);
    o->x60 = new u8[o->x64];
    fn_800F7E98();
    if (!o->x60) fn_800604C4(-4, 0, 0, 0);
    lbl_8035AC18->x28 = lbl_8035AC18->x24;
    int pm361 = fn_802151F4(&f, o->x60, o->x64, 0, &er);
    e = (s32)pm361;
    if (e == 7) {
        e = (er->get());
        fn_80215110(&f, er);
    }
    if (e) fn_80060E30(e, lbl_803645F4, name, lbl_803645F0);
    o->x28 = hdr.x24;
    o->x56 = hdr.x32;
    fn_80133A18(o, ctx, hdr.x16, hdr.name[0] == 0 ? 0 : hdr.name);
    if (!lbl_8035AC18) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AC18);
    o->x44 = new C801768A4[o->x28];
    fn_800F7E98();
    if (!o->x44) fn_800604C4(-4, 0, 0, 0);
    p20 = buf + hdr.x28;
    p16 = o->x60 + hdr.x52;
    for (i = 0; i < o->x28; ++i) fn_80175FA0(&o->x44[i], &p20, &p16);
    if (!lbl_8035AC18) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AC18);
    o->x52 = new C80170688[o->x56];
    fn_800F7E98();
    if (!o->x52) fn_800604C4(-4, 0, 0, 0);
    p20 = buf + hdr.x36;
    p16 = o->x60 + hdr.x56;
    for (i = 0; i < o->x56; ++i) fn_80170354(&o->x52[i], ctx, &p20, &p16);
    p32 = hdr.x44 + o->x60;
    p28 = o->x60 + hdr.x48;
    p24 = buf + hdr.x12;
    p20 = buf + hdr.x20;
    p16 = o->x60 + hdr.x60;
    for (i = 0; i < o->x20; i++) {
        fn_8015EED0(o->x40 + i * 80, ctx, o, &p32, &p28, &p24, &p20, &p16, l40);
        fn_800F87F0(o, l40, o->x40 + i * 80);
    }
    delete[] buf;
    fn_80215230(&f);
}
}
