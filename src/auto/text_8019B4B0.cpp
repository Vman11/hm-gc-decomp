// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct QQ { u8 pad[64]; u8 *x; };
struct Q_8019B4B0 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void m(); };
struct R_8019B4B0 { u8 pad[8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m(void *, void *, f32); };
extern "C" { extern f32 lbl_80364CC4; }

static inline void unlink_8019B4B0(u8 *p, u32 *q) {
    u8 *n = ((u8 **)(p + 80))[*(s32 *)(p + 76)];
    u8 **pp = (u8 **)((u32 *)p + *(s32 *)(p + 76) + 20);
    while (n != NULL) {
        if (*(u32 **)(*(u8 **)(n + 24) + 12) == q) {
            *pp = *(u8 **)(n + 28);
            *q &= ~(32 << *(s32 *)(p + 76));
            break;
        }
        pp = (u8 **)(n + 28);
        n = *(u8 **)(n + 28);
    }
}

static inline u8 *pop8_8019B4B0(u8 *p) {
    u8 *n = *(u8 **)(p + 8);
    if (n == NULL) {
        return 0;
    }
    *(u8 **)n = p;
    *(u8 **)(p + 8) = *(u8 **)(n + 20);
    return n;
}

static inline u8 *pop20_8019B4B0(u8 *p) {
    u8 *k = *(u8 **)(p + 20);
    if (k == NULL) {
        return 0;
    }
    *(u8 **)(p + 20) = *(u8 **)(k + 16);
    return k;
}

static inline void link_8019B4B0(u8 *p, u32 *q) {
    u8 *m = ((u8 **)(q + 16))[*(s32 *)(p + 76)];
    u8 *n;
    u8 *k;
    while (m != NULL) {
        if (*(u8 **)m == p) {
            return;
        }
        m = *(u8 **)(m + 20);
    }
    n = pop8_8019B4B0(p);
    if (n == NULL) {
        return;
    }
    k = pop20_8019B4B0(p);
    if (k == NULL) {
        *(u8 **)n = 0;
        *(u8 **)(n + 20) = *(u8 **)(p + 8);
        *(u8 **)(p + 8) = n;
        return;
    }
    if (*q & 4) {
        ((Q_8019B4B0 *)q)->m();
    }
    {
        f32 z;
        f32 y;
        f32 x;
        x = *(f32 *)((u8 *)q + 24);
        y = *(f32 *)((u8 *)q + 28);
        z = *(f32 *)((u8 *)q + 32);
        *(u8 **)n = p;
        *(f32 *)(n + 4) = x;
        *(f32 *)(n + 8) = y;
        *(f32 *)(n + 12) = z;
    }
    *(f32 *)(n + 16) = lbl_80364CC4;
    *(u8 **)(n + 20) = ((u8 **)(q + 16))[*(s32 *)(p + 76)];
    ((u8 **)(q + 16))[*(s32 *)(p + 76)] = n;
    *(u8 **)(n + 24) = k;
    *(u8 **)(n + 28) = 0;
    *(u32 **)(k + 12) = q;
    *(u8 **)(k + 16) = 0;
    *(u8 **)(k + 20) = 0;
    if (*q & 4) {
        ((Q_8019B4B0 *)q)->m();
    }
    (*(R_8019B4B0 **)(p + 64))->m(n, k, *(f32 *)((u8 *)q + 36));
    *(f32 *)(n + 16) = *(f32 *)(n + 16) * *(f32 *)(n + 16);
}

void fn_8019B4B0(u8 *p, u32 *q) {
    *(s32 *)(p + 76) = 1;
    unlink_8019B4B0(p, q);
    link_8019B4B0(p, q);
}

} /* extern "C" */
