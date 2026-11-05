#include "common.h"

extern "C" {

extern void *lbl_8035A9F4;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
struct S52 { u8 pad[16]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual int seek(int); };
struct P {
    u8 pad0[16];
    u32 w16;
    u32 h20;
    u32 a24;
    u16 a28;
    u8 pad30[18];
    u8 f48[4];
    S52 *f52;
    u32 a56;
    u8 pad60[1284];
    u32 a1344;
    u32 a1348;
    u8 pad1352[4];
    s32 a1356;
    u8 t1360;
    u8 b1361;
    u8 c1362;
    u8 pad1363;
    u32 a1364;
};
extern char lbl_802A01C8[];
void fn_801485B4(P *, int);
int fn_802108B4(void *, u8 *, u32, u32 *);
void fn_801486B4(P *, char *);
void fn_8014824C(u16 *, u32, u32, int, int);
void fn_80148288(u16 *, u32, u32, u32, u32, u32, int);
void fn_80148210(u16 *, u32, u32, int, int);
void fn_80060568(char *, int, int, int);
void fn_8014BC1C(P *, u8 *);

void fn_8014BDD4(P *p) {
    char *str = lbl_802A01C8;
    u32 got;
    u8 h[18];
    int e;
    u32 off;
    u32 bpp;
    e = fn_802108B4(p->f48, h, 18, &got);
    if (e) fn_801485B4(p, e);
    off = h[0] + 18;
    p->t1360 = h[2];
    p->a1364 = h[3] + (h[4] << 8);
    p->a56 = h[5] + (h[6] << 8);
    p->b1361 = h[7];
    p->w16 = h[12] + (h[13] << 8);
    p->h20 = h[14] + (h[15] << 8);
    bpp = h[16];
    p->c1362 = h[17];
    e = p->f52->seek(off);
    p->a1344 = off + p->a56 * ((p->b1361 + 7) >> 3);
    if (e) fn_801485B4(p, e);
    p->a24 = (p->w16 * bpp + 7) >> 3;
    p->a1348 = p->a24 * p->h20;
    switch (p->t1360) {
    case 1: {
        u8 *buf;
        u32 size;
        if (p->a56 > 0x100) fn_801486B4(p, str + 0x40);
        size = ((p->b1361 + 7) >> 3) * p->a56;
        if (!lbl_8035A9F4) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035A9F4);
        buf = new u8[size];
        fn_800F7E98();
        if (!buf) fn_800604C4(-4, 0, 0, 0);
        e = fn_802108B4(p->f48, buf, size, &got);
        if (e) fn_801485B4(p, e);
        fn_8014BC1C(p, buf);
        delete[] buf;
        break;
    }
    case 2:
    case 3:
        p->a56 = 0;
        break;
    default:
        fn_801486B4(p, str + 0x58);
        break;
    }
    switch (p->t1360) {
    case 0:
        fn_801486B4(p, str);
        break;
    case 1:
        fn_8014824C(&p->a28, bpp, (1 << bpp) - 1, 0, 0);
        p->a1356 = 0;
        break;
    case 2:
        switch (bpp) {
        case 16:
            fn_80148288(&p->a28, bpp, 0x7C00, 0x3E0, 0x1F, 0x8000, 0);
            break;
        case 24:
            fn_80148288(&p->a28, bpp, 0xFF0000, 0xFF00, 0xFF, 0, 0);
            break;
        case 32:
            fn_80148288(&p->a28, bpp, 0xFF00, 0xFF0000, 0xFF000000, 0xFF, 0);
            break;
        default:
            fn_80060568(str + 0x24, 0, 0, 0);
            break;
        }
        p->a1356 = 0;
        break;
    case 3:
        fn_80148210(&p->a28, bpp, (1 << bpp) - 1, 0, 0);
        p->a1356 = 0;
        break;
    default:
        fn_801486B4(p, str);
        break;
    }
}

}
