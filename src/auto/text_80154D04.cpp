// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80128EF4[];
extern u8 lbl_802E6900[];
void *__ct__9C801611A4Fv(void *p);
void fn_80134A04(void *p);
struct Fmt { u16 f0; u8 pad[0x12]; };
struct VT { void *a, *b; void (*f1)(void *); void *c[7]; void (*f9)(void *, u8 **, u32 *, u32); };
struct A80155460 { u16 f0; u16 f2; u8 pad4[0x14]; u16 f18; u16 f1a; u16 f1c; u16 f1e; VT *vt; A80155460() { fn_80134A04(this); } ~A80155460(); };
struct C80128EF4 : A80155460 { C80128EF4() { vt = (VT *)__vt__9C80128EF4; } ~C80128EF4(); };
struct T : C80128EF4 { u8 m[0x1c]; void *f40; u8 *data; T *sub; s32 f4c; T() { vt = (VT *)lbl_802E6900; __ct__9C801611A4Fv(m); f40 = 0; data = 0; sub = 0; f4c = 0; } };
struct PV { u8 pad[0x20]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void get(u8 **, u32 *, u32); };
struct G { u8 pad[0x18]; u32 f18; u32 f1c; };
extern const u16 lbl_80364580, lbl_80364582, lbl_80364584, lbl_80364586;
extern void *lbl_8035A9F4;
extern G *lbl_8035ACC0;
void fn_80148310(void *);
void fn_80148288(Fmt *, int, u32, u32, u32, u32, int);
void fn_801482DC(void *, void *);
void fn_80160F40(void *, void *, s32);
void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void);
void *memcpy(void *, const void *, u32);

static inline int need(T *t) {
    if (t->f4c) return 0;
    if (t->f40) return 1;
    if (t->f0 & 0x3e0) return 1;
    if ((t->f0 & 0x800) && !(t->f18 & 1)) return 1;
    return 0;
}

void fn_80154D04(T *t, u8 **out, u32 *outsz, u32 flags) {
    t->f1a |= lbl_80364580;
    if (flags & 1) t->f1a |= lbl_80364582;
    else if (flags & 2) t->f1a |= lbl_80364584;
    else t->f1a |= 0x18;
    if (need(t)) {
        Fmt fmt;
        T *s;
        u32 f18;
        u16 w, h;
        fn_80148310(&fmt);
        if (t->f0 & 0x3e0) {
            fn_80148288(&fmt, 0x20, 0xff0000, 0xff00, 0xff, 0xff000000, 0);
        } else {
            fn_801482DC(&fmt, t);
            fmt.f0 &= ~0x800;
        }
        if (!lbl_8035A9F4) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035A9F4);
        t->sub = new T;
        fn_800F7E98();
        if (!t->sub) fn_800604C4(-4, 0, 0, 0);
        s = t->sub;
        f18 = t->f18 & ~0x80;
        h = t->f1e;
        w = t->f1c;
        if (s->f1a & 1) ((PV *)s)->v1();
        fn_801482DC(s, &fmt);
        s->f18 = f18 | 0x2000;
        s->f1a = 1;
        s->f1c = w;
        s->f1e = h;
        if (lbl_8035ACC0->f18 >= 5) lbl_8035ACC0->f1c = lbl_8035ACC0->f18;
        else lbl_8035ACC0->f1c = 5;
        if (!lbl_8035ACC0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035ACC0);
        s->data = new u8[s->f1e * ((u32)(s->f1c * s->f2 + 7) >> 3)];
        fn_800F7E98();
        if (!s->data) fn_800604C4(-4, 0, 0, 0);
        lbl_8035ACC0->f1c = lbl_8035ACC0->f18;
        if (s->f0 & 4) fn_80160F40(s->m, s, 0x20);
        if ((t->f1a & 8) && (t->f0 & 0x3e0)) memcpy(t->sub->data, t->data, (t->f1c * t->f1e) / 2);
        ((PV *)t->sub)->get(out, outsz, flags);
        t->f1a |= lbl_80364586;
    } else {
        *out = t->data;
        *outsz = (u32)(t->f1c * t->f2 + 7) >> 3;
    }
}

} /* extern "C" */
