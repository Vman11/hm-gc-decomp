// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct T28 { u8 a[20]; s32 f20; u8 b[4]; };
struct T32 { u8 b[32]; };
struct V_80111134 { u8 pad[8]; virtual void p0(); virtual void m(void *); };
extern "C" { extern void *lbl_8035AADC; void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void *__nw__FUl(u32); void fn_8011131C(void *); V_80111134 *fn_80111BC0(void *, u32); void fn_8010CB34(void *, void *, void *, s32); u8 *fn_80111134(u32 *, void *); }

static inline void init_80111134(u32 *p) {
    p[0] = 0;
    p[1] = 4;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
}

u8 *fn_80111134(u32 *p, void *a) {
    u32 idx;
    V_80111134 *r;
    if (p[0] == 0) {
        u32 t = p[2];
        init_80111134(p);
        p[0] = 4;
        p[1] = 4;
        p[2] = t;
    }
    if (p[4] == 0) {
        fn_8011131C(p);
    }
    for (idx = 0; idx < p[0]; idx++) {
        if (((T28 *)p[6])[idx].f20 == 0) {
            p[3]++;
            r = fn_80111BC0(p, idx);
            fn_8010CB34(&((T28 *)p[6])[idx], 0, r, 0);
            r->m(&((T32 *)p[5])[idx]);
            return (u8 *)&((T28 *)p[6])[idx];
        }
    }
    if (p[7] == 0) {
        u32 *q;
        u32 c;
        u32 t;
        if (lbl_8035AADC == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035AADC);
        p[7] = (u32)__nw__FUl(32);
        fn_800F7E98();
        if (p[7] == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        t = p[2];
        c = p[1];
        q = (u32 *)p[7];
        init_80111134(q);
        q[0] = c;
        q[1] = c;
        q[2] = t;
    }
    return fn_80111134((u32 *)p[7], a);
}

} /* extern "C" */
