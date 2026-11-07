// Code of main that had no source file yet: decomp.wtf gave it this one.
#include "common.h"
extern "C" {
#include "common.h"
struct R8 { s32 x0; s32 f4; };
struct T36 { u8 pad[4]; u32 f4; s32 f8; R8 *f12; u32 f16; };
struct Q156 { u8 pad[8]; u32 f8; u8 pad2[24]; T36 *f36; };
struct F84 { u8 pad[16]; s32 f16; };
struct F120 { u8 pad[4]; u32 f4; u8 pad2[76]; F84 *f84; u8 pad3[4]; f32 f92; };
struct F116 { u8 pad[12]; f32 f12; f32 f16; };
struct O152 { u8 pad[88]; f32 f88; f32 f92; f32 f96; f32 f100; s32 f104; f32 f108; u8 pad2[4]; F116 *f116; F120 *f120; void *f124; };
struct P18C { u8 pad[20]; u8 f20[92]; s32 f112; u8 pad2[8]; s32 f124; u8 pad3[20]; f32 f148; O152 *f152; Q156 *f156; };
struct Box { f32 x0, x4, x8, x12; };
struct H4 { u8 pad[28]; u16 h28; u16 h30; };
struct H8 { u8 pad[4]; H4 *f4; };
struct H12 { u8 pad[11344]; H8 *f11344; };
struct H460 { u8 pad[12]; H12 *f12; };
struct Snd { u8 pad[28]; u16 h28; u8 pad2[2]; u16 h32; };
extern "C" {
extern u8 *lbl_8035B594;
extern H460 *lbl_8035B460;
extern f32 lbl_8035B584;
extern f32 lbl_8035B57C;
extern f32 lbl_803663B8;
extern f32 lbl_803663BC;
extern f32 lbl_803663C0;
extern f32 lbl_803663C4;
extern f32 lbl_803663C8;
extern f32 lbl_803663CC;
extern char lbl_802A9308[];
void fn_8024E3DC(void *a, void *b, s32 *c);
void *fn_801E4CC0(void *a, s32 b);
void *fn_801E4CB0(void *a, s32 b);
void fn_800E8F6C(char *buf, char *fmt, ...);
void fn_800F6FBC(char *s, void *h);
O152 *fn_800F8274(void *a, void *h);
void fn_8012D0A4(F84 *a, Box *b, void *c, f32 *d, s32 e, s32 f, f32 g, f32 h, f32 i);
R8 *fn_800BAC18(s32 a, s32 b);

static inline void tl(P18C *p, s32 n, s32 cnt) {
    O152 *o;
    f32 x;
    f32 y;
    o = p->f152;
    if (o->f104 != 0) {
        x = o->f88;
        y = o->f92;
    } else {
        x = o->f116->f12;
        y = o->f116->f16;
    }
    if (o->f120->f4 & 8) {
        s32 hh = lbl_8035B460->f12->f11344->f4->h30;
        y -= (f32)(s32)(lbl_803663CC * (f32)(u32)((n - 4) * cnt)) / (f32)hh;
    } else {
        y -= (f32)(u32)((n - 4) * cnt);
    }
    o->f108 = lbl_803663B8;
    o = p->f152;
    o->f96 = x;
    o->f100 = y;
}
void fn_8024C18C(P18C *p) {
    char buf[12];
    Box box;
    u8 h[8];
    f32 v[2];
    s32 found;
    void *snd;
    O152 *o;
    F120 *a;
    F84 *m;
    s32 cnt;
    s32 n;
    f32 r;
    f32 x;
    f32 y;

    if (p->f112 != 0) {
        lbl_8035B584 = lbl_803663B8;
        return;
    }
    fn_8024E3DC(lbl_8035B594, p->f20, &found);
    snd = 0;
    if (found != 0) {
        Snd *s = (Snd *)(lbl_8035B594 + 452);
        if (s->h28 != 0) {
            snd = fn_801E4CC0(s, 0);
        } else if (s->h32 != 0) {
            snd = fn_801E4CC0(fn_801E4CB0(s, 0), 0);
        }
    } else {
        snd = fn_801E4CC0(lbl_8035B594 + 284, 0);
    }
    fn_800E8F6C(buf, lbl_802A9308, p->f124);
    fn_800F6FBC(buf, h);
    p->f152 = fn_800F8274(snd, h);
    {
        f32 z = lbl_803663B8;
        v[0] = z;
        v[1] = z;
    }
    o = p->f152;
    a = o->f120;
    snd = o->f124;
    m = a->f84;
    if (a->f4 & 8) {
        fn_8012D0A4(m, &box, snd, v, 0, 17,
                    a->f92 * (f32)lbl_8035B460->f12->f11344->f4->h28, lbl_803663BC, lbl_8035B57C);
    } else {
        fn_8012D0A4(m, &box, snd, v, 0, 17, a->f92, lbl_803663BC, lbl_8035B57C);
    }
    cnt = m->f16;
    n = (s32)((box.x12 - box.x4) / (f32)cnt);
    lbl_8035B584 = (f32)(n * cnt) / lbl_803663C0;
    r = *(volatile f32 *)&lbl_8035B584;
    if (p->f156 != 0 && (p->f156->f8 & 0x400)) {
        T36 *t;
        lbl_8035B584 = lbl_803663B8;
        t = p->f156->f36;
        r = (f32)(s32)(lbl_803663C4 * (f32)t->f16) / (f32)t->f12->f4;
    } else if (p->f156 != 0 && (p->f156->f8 & 0x800)) {
        Q156 *q;
        lbl_8035B584 = lbl_803663B8;
        q = p->f156;
        r = (f32)(s32)(lbl_803663C4 * (f32)q->f36->f4) / (f32)fn_800BAC18(q->f36->f8, 0)->f4;
    }
    p->f148 = (lbl_803663C8 / (f32)(u32)n) * r;
    lbl_8035B584 = r;
    tl(p, n, cnt);
}
}
}
