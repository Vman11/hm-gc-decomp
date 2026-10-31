// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Y { u8 pad[448]; u16 f448; u8 pad2[6]; void *f456; };
struct T8 { u8 pad[48]; Y *f48; };
struct X { u8 pad[326]; u16 f326; u8 pad2[106]; u16 f434; u16 f436; };
struct S {
    u8 *f0; u8 *f4; T8 *f8; u8 *f12; u8 *f16; u32 f20; u32 f24; u32 f28; s32 f32; u32 f36; s32 f40;
    u8 pad44[8]; u32 f52; u8 pad56[4]; u32 f60; u8 pad64[4]; u32 f68; u8 pad72[8]; u8 f80[216]; u16 f296; u8 pad298[6]; X *f304;
};
struct ST { u16 a, b, c; };
void DCFlushRange(void *, u32);
void fn_802054F0(void);
void fn_800C6D6C(u8 *, S *, int, int, u8 *, u32, u32, void (*)(void));
void fn_800BAA78(u32, u32, u32);
void fn_80204C1C(S *, u32);
void fn_800C9A0C(void *, int);
void fn_80202B58(T8 *);
void fn_80204504(S *);
void fn_800C9E58(X *, ST *);
static inline u8 *Next(S *s) {
    u8 *q;
    if (s->f20 - s->f24 >= s->f60) {
        q = s->f12 + s->f24;
        if (q >= s->f16 - 32) q += 32;
        s->f24 += s->f60;
    } else {
        s->f24 = s->f60;
        q = s->f12;
        if (q >= s->f16 - 32) q += 32;
    }
    return q;
}
void fn_80204DB0(S *s) {
    u16 fl = s->f296;
    s32 pos;
    s32 t;
    X *v;
    if (!(fl & 1) && !(fl & 0x10)) {
        if (fl & 0x20) return;
        DCFlushRange(s->f12, s->f36);
        fn_800C6D6C(s->f80, s, 0, 1, s->f12, s->f28, s->f36, fn_802054F0);
        s->f296 |= 8;
        s->f296 |= 0x10;
        s->f52 = 0;
        s->f68 = 0;
        return;
    }
    if (!(fl & 1)) {
        if (fl & 8) return;
        fn_800BAA78(*(u32 *)(*(u8 **)(s->f4 + 36) + 8), s->f28, *(u32 *)(s->f0 + 12));
        fn_80204C1C(s, *(u32 *)(*(u8 **)(s->f4 + 36) + 8));
        s->f296 |= 1;
        s->f296 &= ~0x10;
        return;
    }
    v = s->f304;
    if (v == 0) return;
    pos = v->f436 + (v->f434 << 16);
    t = s->f32 * 2;
    if (v->f326 == 0) {
        if (s->f8->f48) {
            if (s->f8->f48->f448 & 0x80) {
                s->f296 |= 0x80;
                s->f8->f48->f448 |= 0x80;
                fn_800C9A0C(s->f304, 1);
                fn_800C9A0C(s->f8->f48->f456, 1);
                fn_80202B58(s->f8);
            } else {
                s->f296 |= 0x80;
                return;
            }
        } else {
            fn_800C9A0C(v, 1);
            fn_80202B58(s->f8);
        }
    }
    if (pos < s->f40) {
        u32 x;
        u8 *q;
        fn_80204504(s);
        x = s->f32;
        q = Next(s);
        DCFlushRange(q, s->f60);
        fn_800C6D6C(s->f80, s, 0, 1, q, x, s->f60, 0);
    }
    if (pos >= t && s->f40 < t) {
        u8 *q;
        u32 x;
        ST st;
        fn_80204504(s);
        x = s->f28;
        if (s->f20 - s->f24 >= s->f60) {
            q = s->f12 + s->f24;
            if (q >= s->f16 - 32) q += 32;
            s->f24 += s->f60;
        } else {
            s->f24 = s->f60;
            q = s->f12;
            if (q >= s->f16 - 32) q += 32;
        }
        st.a = *q;
        st.b = 0;
        st.c = 0;
        fn_800C9E58(s->f304, &st);
        DCFlushRange(q, s->f60);
        fn_800C6D6C(s->f80, s, 0, 1, q, x, s->f60, 0);
    }
    s->f40 = pos;
}

} /* extern "C" */
