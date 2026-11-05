// fn_8016CEF4: code matches 100% (GC/2.0p1). NonMatching only because the native u16->f32 magic
// double (lbl_803646E0) is pooled with text_8016B5F4 (one TU 80168AE8..8016CEF4); needs a TU merge to link.
#include "common.h"

extern "C" {

struct RM {
    u32 viTVmode;
    u16 fbWidth;
    u16 efbHeight;
    u16 xfbHeight;
    u8 pad0a[0x19 - 0x0a];
    u8 aa;
    u8 sample_pattern[0x32 - 0x1a];
    u8 vfilter[7];
};
struct H { u8 pad[24]; u32 f24; u32 f28; };
struct Clr { u8 r, g, b, a; };
struct Buf { u8 d[0x14]; };
struct V27B8 { virtual void s0(); virtual void init(void *a, void *b); };
struct P {
    u8 pad0[4];
    u8 f4[0x330 - 4];
    RM *rm;
    u8 pad334[0x340 - 0x334];
    void *f340;
    u32 nfb;
    u8 f348[0x3b8 - 0x348];
    u8 f3b8[0x1f10 - 0x3b8];
    void *fifo;
    void *gxfifo;
    u8 *xfb[(0x27b8 - 0x1f18) / 4];
    V27B8 v27b8;
};
extern H *lbl_8035AD28;
extern f32 lbl_803646D8;
extern f32 lbl_803646F8;
void fn_80148310(Buf *);
RM *fn_80153B24(void *, void *, void *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(H *);
void fn_800F7E98(void);
void fn_800C182C(RM *);
void *GXInit(void *, u32);
void fn_800DA010(f32 x, f32 y, f32 w, f32 h, f32 n, f32 f);
void fn_800DA0C4(u32 x, u32 y, u32 w, u32 h);
void fn_800D6E48(u16 x, u16 y, u16 w, u16 h);
void fn_800D6F40(u16 w, u16 h);
void fn_800D7120(f32);
void fn_800D7264(u8 a, const u8 *b, s32 c, const u8 *d);
void fn_800D9A6C(s32, s32);
void fn_801481D4(Buf *out, u16 id, u32 a, u32 b, u32 flag);
void fn_800D71EC(Clr c, u32 z);
void fn_800C2584(int);
void fn_800D7480(void *a, s32 b);
void fn_800D746C(s32);
void fn_800C2518(void *);
void fn_800C23E8(void);
void fn_800C1364(void);
void fn_80148138(Buf *, u16, u32, u32, u32);
void fn_8015B218(void *, u16, u16, u32, Buf *, u32, u8 **);
void fn_8015755C(void *, P *, u16, u16, Buf *);
void *__nwa__FUl(u32);
void __dla__FPv(void *);

static inline void lvl(u32 n) { H *h = lbl_8035AD28; if (h->f24 >= n) h->f28 = h->f24; else h->f28 = n; }

int fn_8016CEF4(P *p, void *a, u8 *q) {
    Buf b2c;
    Buf b18;
    Clr clr;
    s32 i;
    u32 stride;
    s32 size;
    u32 j;
    fn_80148310(&b2c);
    fn_80148310(&b18);
    p->f340 = a;
    p->rm = fn_80153B24(p->f340, q + 8, p->f4);
    stride = (u16)((p->rm->fbWidth + 15) & ~15) * 2;
    size = p->rm->xfbHeight * stride;
    lvl(5);
    if (!lbl_8035AD28) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AD28);
    for (i = 0; i < p->nfb; i++) {
        if (!lbl_8035AD28) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AD28);
        p->xfb[i] = (u8 *)__nwa__FUl(size);
        fn_800F7E98();
        if (!p->xfb[i]) fn_800604C4(-4, 0, 0, 0);
        if (!p->xfb[i]) {
            fn_800F7E98();
            lbl_8035AD28->f28 = lbl_8035AD28->f24;
            while (--i >= 0) {
                __dla__FPv(p->xfb[i]);
                p->xfb[i] = 0;
            }
            return 2;
        }
        for (j = 0; j < (u32)size / 4; j++) {
            p->xfb[i][j * 4 + 0] = 0x10;
            p->xfb[i][j * 4 + 1] = 0x80;
            p->xfb[i][j * 4 + 2] = 0x10;
            p->xfb[i][j * 4 + 3] = 0x80;
        }
    }
    fn_800F7E98();
    lbl_8035AD28->f28 = lbl_8035AD28->f24;
    fn_800C182C(p->rm);
    p->gxfifo = GXInit(p->fifo, 0x20000);
    fn_800DA010(lbl_803646D8, lbl_803646D8, (f32)p->rm->fbWidth, (f32)p->rm->efbHeight, lbl_803646D8, lbl_803646F8);
    fn_800DA0C4(0, 0, p->rm->fbWidth, p->rm->efbHeight);
    fn_800D6E48(0, 0, p->rm->fbWidth, p->rm->efbHeight);
    fn_800D6F40(p->rm->fbWidth, p->rm->xfbHeight);
    fn_800D7120((f32)p->rm->xfbHeight / (f32)p->rm->efbHeight);
    fn_800D7264(p->rm->aa, p->rm->sample_pattern, 1, p->rm->vfilter);
    if (p->rm->aa) {
        fn_800D9A6C(2, 0);
        fn_801481D4(&b18, 0x10, 0xFFFF, 0, 0);
    } else {
        fn_800D9A6C(0, 0);
        fn_801481D4(&b18, 0x18, 0xFFFFFF, 0, 0);
    }
    clr.r = 0;
    clr.g = 0;
    clr.b = 0;
    clr.a = 0xFF;
    fn_800D71EC(clr, 0xFFFFFF);
    fn_800C2584(0);
    fn_800D7480(p->xfb[0], 1);
    fn_800D746C(1);
    fn_800C2518(p->xfb[0]);
    fn_800C23E8();
    fn_800C1364();
    fn_800D7480(p->xfb[0], 1);
    fn_800C23E8();
    fn_800C1364();
    if (p->rm->viTVmode & 1) fn_800C1364();
    p->v27b8.init(a, p->f4);
    fn_80148138(&b2c, 0x10, 0xFC00, 0x3E0, 0x1F);
    fn_8015B218(p->f348, p->rm->fbWidth, p->rm->xfbHeight, stride, &b2c, p->nfb, p->xfb);
    fn_8015755C(p->f3b8, p, p->rm->fbWidth, p->rm->efbHeight, &b18);
    return 0;
}

}
