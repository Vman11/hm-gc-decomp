#include "common.h"
// NonMatching: prologue param-copy scheduling + cmplwi placement before loop2 init (DIFF 10)
extern "C" {
struct V { f32 x, y, z; };
struct Q { f32 x, y, z, w; };
struct E { u8 pad[10]; u16 f10; };
struct C { u8 pad[24]; void *f24; E *f28; E *f32; E *f36; };
struct A { C *f0; u8 pad4[28]; u16 f32; u16 f34; u16 f36; u16 f38; u16 f40; u16 f42; u8 pad44[10]; u16 f54; };
void fn_8021BE0C(void *, E *, u16, Q *, f32);
void fn_8021BD48(void *, E *, u16, V *, f32);
void fn_8021BC84(void *, E *, u16, V *, f32);
void fn_80102D70(void *, u16, Q *, void *, f32);
void fn_80102CD0(void *, u16, V *, void *, f32);
void fn_80102C30(void *, u16, V *, void *, f32);
static inline void b1(A *a, u32 i, void *clip, Q *q, f32 t, void *out, void *w, f32 wt) {
    E *e = &a->f0->f28[i];
    fn_8021BE0C(clip, e, a->f54, q, t);
    fn_80102D70(out, e->f10, q, w, wt);
}
static inline void b2(A *a, u32 i, void *clip, V *v, f32 t, void *out, void *w, f32 wt) {
    E *e = &a->f0->f32[i];
    fn_8021BD48(clip, e, a->f54, v, t);
    fn_80102CD0(out, e->f10, v, w, wt);
}
static inline void b3(A *a, u32 i, void *clip, V *v, f32 t, void *out, void *w, f32 wt, V *sc) {
    E *e = &a->f0->f32[i];
    fn_8021BD48(clip, e, a->f54, v, t);
    v->x = v->x * sc->x;
    v->y = v->y * sc->y;
    v->z = v->z * sc->z;
    fn_80102CD0(out, e->f10, v, w, wt);
}
static inline void b4(A *a, u32 i, void *clip, V *v, f32 t, void *out, void *w, f32 wt) {
    E *e = &a->f0->f36[i];
    fn_8021BC84(clip, e, a->f54, v, t);
    fn_80102C30(out, e->f10, v, w, wt);
}
static inline void L3(A *a, u32 j, u32 n, void *clip, V *v, f32 t, void *out, void *w, f32 wt, V *sc) {
    for (; j < n; j++) b3(a, j, clip, v, t, out, w, wt, sc);
}
void fn_80101C20(A *a, void *out, void *w, V *sc, f32 t, f32 wt) {
    Q q;
    V v;
    V v3;

    void *clip;
    u32 i;
    u32 end;

    clip = a->f0->f24;
    for (i = a->f32, end = a->f32 + a->f34; i < end; i++) {
        b1(a, i, clip, &q, t, out, w, wt);
    }
    end = a->f36;
    i = end + a->f38;
    if (!sc) {
        for (; end < i; end++) {
            E *e = &a->f0->f32[end];
            fn_8021BD48(clip, e, a->f54, &v, t);
            fn_80102CD0(out, e->f10, &v, w, wt);
        }
    } else {
        L3(a, end, i, clip, &v, t, out, w, wt, sc);
    }
    for (end = a->f40, i = a->f40 + a->f42; end < i; end++) b4(a, end, clip, &v3, t, out, w, wt);
}
}
