#include "common.h"
extern "C" {
typedef struct R_32C8 { f32 x, y, z, w; } R_32C8;
typedef struct T_32C8 { u8 pad[16]; u16 w; u16 h; } T_32C8;
typedef struct P_32C8 { u8 pad[20]; u8 f20[16]; T_32C8 *f36; } P_32C8;
void fn_801A5128(P_32C8 *, R_32C8 *);
void fn_8012DD1C(T_32C8 *, int, f32 *, f32 *, u8 *, R_32C8 *);
static inline void Cp_32C8(R_32C8 *r, R_32C8 *s) { f32 x = *(volatile f32*)&s->x; f32 y = *(volatile f32*)&s->y; f32 z = *(volatile f32*)&s->z; f32 w = *(volatile f32*)&s->w; r->x = x; r->y = y; r->z = z; r->w = w; }
void fn_801B32C8(P_32C8 *p, int a, R_32C8 *src, int u, R_32C8 *src2) {
    if (p->f36) {
        R_32C8 r;
        R_32C8 r2;
        f32 pos[2];
        f32 sc[2];
        T_32C8 *t;
        Cp_32C8(&r, src);
        fn_801A5128(p, &r);
        if (src2) {
            Cp_32C8(&r2, src2);
            fn_801A5128(p, &r2);
        }
        t = p->f36;
        f32 x = *(volatile f32 *)&r.x;
        s32 tw = *(volatile u16 *)&t->w; s32 th = *(volatile u16 *)&t->h;
        f32 y = *(volatile f32 *)&r.y;
        *(volatile f32 *)&pos[0] = x;
        f32 z = *(volatile f32 *)&r.z;
        *(volatile f32 *)&pos[1] = y;
        f32 ww = *(volatile f32 *)&r.w;
        sc[0] = (z - x) / (f32)tw;
        sc[1] = (ww - y) / (f32)th;
        if (src2) fn_8012DD1C(t, a, pos, sc, p->f20, &r2);
        else fn_8012DD1C(t, a, pos, sc, p->f20, &r);
    }
}
}
