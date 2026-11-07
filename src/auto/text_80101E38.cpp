#include "common.h"
// Matched: explicit offset IV (off decl right after data, incremented before i)
extern "C" {
struct V { f32 x, y, z; };
struct Q { f32 x, y, z, w; };
struct E { u8 pad[10]; u16 f10; };
struct C { u8 pad[24]; void *f24; E *f28; E *f32; };
struct A { C *f0; u8 pad4[28]; u16 f32; u16 f34; u16 f36; u16 f38; u8 pad40[14]; u16 f54; };
struct B { u8 pad[0x30]; Q q; u8 pad40[0x10]; };
struct T { u8 pad[40]; B *f40; };
void fn_8021BE0C(void *, E *, u16, Q *, f32);
void fn_8021BD48(void *, E *, u16, V *, f32);
void fn_80106634(T *);
void fn_80106474(T *, V *);
void fn_80101E38(A *a, T *tg, V *sc, f32 t) {
    V v;
    void *data;
    u32 off;
    u32 i;
    u32 end;
    E *e;
    end = a->f32 + a->f34;
    off = a->f32 * 12;
    data = a->f0->f24;
    for (i = a->f32; i < end; off += 12, i++) {
        e = (E *)((u8 *)a->f0->f28 + off);
        fn_8021BE0C(data, e, a->f54, &tg->f40[e->f10].q, t);
    }
    fn_80106634(tg);
    if (a->f38) {
        fn_8021BD48(data, &a->f0->f32[a->f36], a->f54, &v, t);
        if (sc) {
            v.x *= sc->x;
            v.y *= sc->y;
            v.z *= sc->z;
        }
        fn_80106474(tg, &v);
    }
}
}
