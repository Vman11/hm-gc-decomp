#include "common.h"
extern "C" {
struct C8018FCF0 { char pad[116]; C8018FCF0(void); };
struct C801883E0 { char pad[204]; C801883E0(void); };
struct C8018E150 { char pad[168]; C8018E150(void); };
struct VS { virtual void v0(); virtual void v1(); virtual void v2(); };
struct FT { void *a, *b, *c; void (*f12)(u32, f32 *); };
extern u8 *lbl_8035B460;
extern u32 lbl_8035B320;
extern u8 *lbl_8035B65C;
extern u8 **lbl_8035B684;
extern FT lbl_803286D0;
extern const f32 lbl_8035E438;
extern const u32 lbl_8035E468;
void fn_80233050(u8 *);
u8 *fn_800F9398(u8 *, void *);
u8 *fn_800F9788(u8 *, void *, void *);
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
void fn_8018FB34(void *, u8 *, u8 *);
void fn_8019AE40(u32, void *);
void fn_800F6E88(char *, u8 *);
u8 *fn_8019565C(u8 *);
u8 *fn_801955D8(u8 *);
void fn_80188144(void *, u8 *, u8 *, int);
void fn_8018DFAC(void *, u8 *, u8 *);
void fn_80190C98(u8 *);
void fn_80190940(u8 *, u32);
void fn_8019B7E8(u32, u8 *);
#define U32(o) (*(u32 *)(p + (o)))
void fn_8005CDE4(u8 *p) {
    u8 *r;
    FT *ft;
    u8 *base;
    u8 *q;
    s32 i;
    u32 off;
    fn_80233050(p);
    ((VS *)p)->v2();
    if (*(u8 **)(p + 772)) {
        u8 *r0 = fn_800F9398(*(u8 **)(lbl_8035B460 + 8) + 144, *(u8 **)(p + 772));
        if (lbl_8035B320 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B320);
        *(C8018FCF0 **)(p + 776) = new C8018FCF0;
        fn_800F7E98();
        if (*(u8 **)(p + 776) == 0) fn_800604C4(-4, 0, 0, 0);
        if (*(u8 **)(p + 776)) {
            fn_8018FB34(*(u8 **)(p + 776), *(u8 **)(lbl_8035B460 + 8), r0);
            fn_8019AE40(*(u32 *)(lbl_8035B65C + 12), *(u8 **)(p + 776));
            fn_8019AE40(*(u32 *)(*(u8 **)(lbl_8035B65C + 116) + 484), *(u8 **)(p + 776));
            **(u32 **)(p + 776) &= ~0x800;
        }
    }
    base = *lbl_8035B684 + 12352;
    U32(768) = *(u32 *)(**(u8 ***)(p + 660) + 16);
    ft = &lbl_803286D0;
    for (i = 0, off = 0, q = p; i < *(s32 *)(p + 768); q += 4, i++, off += 8) {
        char buf[8];
        char *s;
        fn_800F6E88(buf, *(u8 **)(*(u8 **)(p + 660) + 12) + off);
        s = *(char **)(p + 664);
        if (s == 0 || *s == 0) r = fn_800F9398(base + 144, buf);
        else r = fn_800F9788(base + 168, s, buf);
        if (r) r = fn_8019565C(r);
        if (r) {
            f32 v[3];
            u8 *o;
            u8 *t;
            *(u32 *)r &= ~0x800;
            u8 *m = fn_801955D8(r);
            if (*(u16 *)(m + 4) == 3) {
                if (lbl_8035B320 == 0) fn_800604C4(-2, 0, 0, 0);
                fn_800F7EC0(lbl_8035B320);
                *(C801883E0 **)(q + 728) = new C801883E0;
                fn_800F7E98();
                if (*(u8 **)(q + 728) == 0) fn_800604C4(-4, 0, 0, 0);
                fn_80188144(*(u8 **)(q + 728), base, m, 0);
            } else {
                if (lbl_8035B320 == 0) fn_800604C4(-2, 0, 0, 0);
                fn_800F7EC0(lbl_8035B320);
                *(C8018E150 **)(q + 728) = new C8018E150;
                fn_800F7E98();
                if (*(u8 **)(q + 728) == 0) fn_800604C4(-4, 0, 0, 0);
                fn_8018DFAC(*(u8 **)(q + 728), base, m);
            }
            v[0] = lbl_8035E438;
            v[1] = lbl_8035E438;
            v[2] = lbl_8035E438;
            o = *(u8 **)(q + 728);
            t = *(u8 **)(o + 48);
            if (t) {
                ft->f12(*(u32 *)(t + 16), v);
                *(u32 *)(t + 32) |= lbl_8035E468;
                fn_80190C98(o);
            }
            fn_80190940(*(u8 **)(q + 728), U32(156));
            fn_8019B7E8(*(u32 *)(lbl_8035B65C + 12), *(u8 **)(q + 728));
        }
    }
}
}
