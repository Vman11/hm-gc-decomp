#include "common.h"
extern "C" {
}
struct Fl_B064 { u8 pad[8]; u32 f8; };
struct Ops_B064 {
    u8 pad[0x1c];
    Fl_B064 *f1c;
    void (*f20)(void *, void *, void *);
    void (*f24)(void *, void *, u32, int, u32, void *, int, int, void *);
};
extern "C" {
extern u32 lbl_802A0C60[];
extern u8 lbl_803286D0[];
extern u8 lbl_8032F718[];
void fn_8014CA08(void *);
void fn_800D9E98(u32);
void __ct__9C80152B64Fv(void *);
void fn_800D9DF8(void *, u32);
u32 fn_80155F9C(void *);
u32 fn_80155F60(void *);
void *fn_8021820C(void *, u32, u32);
void *fn_802181F8(void *);
void DCFlushRange(void *, u32);
u32 fn_80157DD4(void *, void *, int, int, void *);
void fn_80217224(u8 *, u32, u8);
void fn_8021709C(u8 *, u32, u8, u32);
void fn_800D65A8(void *);

void fn_8016B064(u8 *p, Ops_B064 *o, void *a, void *b, u32 n, int e, int f, int g, u8 *h, int k) {
    u8 buf[0x1c];
    u32 res; u32 s; u32 sz; u32 r; void *m; void *x;

    fn_8014CA08(buf);
    if (!(o->f1c->f8 & 1)) {
        void *v; u32 i; u32 id; u32 *ids;
        if (*(u32 *)(p + 0x275c) != 3) {
            *(u32 *)(p + 0x275c) = 3;
            fn_800D9E98(*(u32 *)(p + 0x275c));
        }
        ids = lbl_802A0C60;
        for (i = 0; i < n; i++) {
            u8 t[0x40];
            id = ids[i];
            v = *(void **)(p + 0x2a78);
            __ct__9C80152B64Fv(t);
            (*(void (**)(void *, void *))(lbl_803286D0 + 0x174))(t, v);
            fn_800D9DF8(t, id);
            *(void **)(p + 0x1fb0 + id * 4) = v;
        }
    }
    o->f20(a, b, buf);
    s = fn_80155F9C(buf);
    r = fn_80155F60(buf);
    sz = g * s;
    m = fn_8021820C(p + 0x27a0c, sz, s);
    o->f24(a, b, n, e, *(u32 *)(p + 0x2aa0), lbl_8032F718, f, g, m);
    x = fn_802181F8(p + 0x27a0c);
    DCFlushRange(m, sz);
    res = fn_80157DD4(p + 0x1f44, buf, f, k, p + 0x27a0c);
    if (r == h[1]) fn_80217224(h, *(u32 *)(p + 0x279f4), (u8)res);
    else fn_8021709C(h, *(u32 *)(p + 0x279f4), (u8)res, r);
    fn_800D65A8(x);
}
}
extern "C" {
}
