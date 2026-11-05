#include "common.h"
extern "C" {
typedef union { u8 u8; u16 u16; u32 u32; f32 f32; } WGPipe;
volatile WGPipe GXWGFifo : 0xCC008000;
struct Mgr { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void alloc(void *, u32, u8 **); virtual void free(u32); };
struct Y { u8 pad[1132]; u8 b1132; u8 pad2[11]; u32 f1144; u32 f1148; u32 f1152; u32 f1156; };
struct X0 { u8 pad[9136]; u8 b9136; u8 pad2[11]; s32 f9148; u32 f9152; u32 f9156; u32 f9160; };
struct A { X0 *x; u8 pad[6856]; u32 f6860; u32 f6864; };
struct B { u8 pad[296]; u32 n; };
extern Mgr *lbl_8035B270;
extern u8 lbl_80356DF8[];
extern u32 lbl_802A04DC[];
u32 fn_80220A3C(u8 *, u8 *, s32, s32);
void fn_801576A0(Y *);
void fn_800D7CA4(s32, u8, s32, u32, u32, u32, u32);
void fn_8016B254(X0 *, s32, s32, s32);
void fn_800D58D4(void);
void fn_800D5488(s32, s32);
void fn_800D5E84(s32, void *, s32);
void fn_8015D624(B *, A *, u32);
void fn_8015C95C(B *, X0 *, u32);
void fn_800D6B8C(u32, s32, u16);

static inline void vtx(u16 p, u16 c, u8 t) { GXWGFifo.u16 = p; GXWGFifo.u16 = c; GXWGFifo.u8 = t; }

void fn_80220C98(void *self, void *ap, s32 p5, s32 p6, s32 lo, s32 hi, B *b) {
    X0 *x0 = ((A *)ap)->x;
    A *a = (A *)ap;
    struct { u8 *p; u8 pad[116]; } out;
    u8 *v;
    u8 *v76;
    u8 *v12;
    u32 cnt;
    s32 fmt;
    u32 i;
    lbl_8035B270->alloc(lbl_80356DF8, (((hi - lo) / 64 + 1) << 2) + 1, &out.p);
    v = out.p;
    v[12] = 0;
    v[13] = 0;
    v[28] = 1;
    v[29] = 0;
    v[44] = 0;
    v[45] = 1;
    v[60] = 1;
    v[61] = 1;
    v76 = v + 76;
    v12 = out.p + 12;
    cnt = fn_80220A3C(v, v76, lo, hi);
    if (cnt > 1) lbl_8035B270->free(cnt << 2);
    else lbl_8035B270->free(5);
    if (cnt == 0) return;
    {
        Y *y = (Y *)((u8 *)x0 + 8004);
        if (y->b1132) {
            y->b1132 = 0;
            if (y->f1148 == 0) fn_801576A0(y);
            fn_800D7CA4(0, y->b1132, 0, y->f1144, y->f1148, y->f1152, y->f1156);
        }
    }
    fn_8016B254(x0, 0, p5, p6);
    fmt = *(s32 *)((u8 *)x0 + 0x20000 + 31220);
    fn_800D58D4();
    fn_800D5488(9, 3);
    fn_800D5E84(9, v, 16);
    fn_800D5488(11, 3);
    fn_800D5E84(11, v76, 16);
    fn_800D5488(13, 2);
    fn_800D5E84(13, v12, 16);
    if (x0->f9148 != 1) {
        x0->f9148 = 1;
        fn_800D7CA4(0, x0->b9136, 0, x0->f9148, x0->f9152, x0->f9156, x0->f9160);
    }
    i = 0;
    do {
        u32 k;
        fn_8015D624(b, a, i);
        fn_8015C95C(b, x0, i);
        u32 base = 0;
        fn_800D6B8C(lbl_802A04DC[fmt], 3, cnt * 6);
        for (k = 0; k < cnt; k++) {
            vtx(base, k, 0);
            vtx(base + 1, k, 1);
            vtx(base + 2, k, 2);
            vtx(base + 1, k, 1);
            vtx(base + 3, k, 3);
            vtx(base + 2, k, 2);
            base += 4;
        }
        a->f6860 += cnt * 2;
        a->f6864++;
        i++;
    } while (i < b->n);
}
}
