#include "common.h"

extern "C" {

struct C8002FAE0 { f32 x, y, z; C8002FAE0(); };
struct T {
    u32 f0;
    u16 flags;
    f32 f8;
    u32 n;
    u32 f16;
    u32 f20;
    C8002FAE0 *f24;
    C8002FAE0 *f28;
    C8002FAE0 *g32;
    f32 *f36;
    f32 *f40;
    f32 *f44;
    u32 *f48;
    u8 *f52;
    u8 pad56[0x5c - 0x38];
    f32 f92;
};
extern f32 lbl_80366250;
extern f32 lbl_80366258;
extern f32 lbl_80366260;
extern void *lbl_8035B4F8;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_80246A30(T *, int);

void *memcpy(void *, const void *, u32);
void fn_802455E0(T *t, u32 m, int c) {
    C8002FAE0 *b = 0;
    C8002FAE0 *cc = 0;
    f32 *d = 0;
    f32 *e = 0;
    bool upd = (u8)(c == 0 && m != 0);
    C8002FAE0 *a;
    f32 *f;
    u32 *g;
    u8 *h;
    if (!lbl_8035B4F8) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B4F8);
    a = new C8002FAE0[t->n + m];
    fn_800F7E98();
    if (!a) fn_800604C4(-4, 0, 0, 0);
    if (!lbl_8035B4F8) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B4F8);
    f = new f32[t->n + m];
    fn_800F7E98();
    if (!f) fn_800604C4(-4, 0, 0, 0);
    if (!lbl_8035B4F8) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B4F8);
    g = new u32[t->n + m];
    fn_800F7E98();
    if (!g) fn_800604C4(-4, 0, 0, 0);
    if (!lbl_8035B4F8) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B4F8);
    h = new u8[t->n + m];
    fn_800F7E98();
    if (!h) fn_800604C4(-4, 0, 0, 0);
    if (t->flags & 4) {
        if (!lbl_8035B4F8) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B4F8);
        b = new C8002FAE0[t->n + m];
        fn_800F7E98();
        if (!b) fn_800604C4(-4, 0, 0, 0);
    }
    if (t->flags & 8) {
        if (!lbl_8035B4F8) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B4F8);
        cc = new C8002FAE0[t->n + m];
        fn_800F7E98();
        if (!cc) fn_800604C4(-4, 0, 0, 0);
    }
    if (t->flags & 16) {
        if (!lbl_8035B4F8) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B4F8);
        d = new f32[t->n + m];
        fn_800F7E98();
        if (!d) fn_800604C4(-4, 0, 0, 0);
    }
    if (t->flags & 32) {
        if (!lbl_8035B4F8) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B4F8);
        e = new f32[t->n + m];
        fn_800F7E98();
        if (!e) fn_800604C4(-4, 0, 0, 0);
    }
    if (t->n) {
        memcpy(a, t->f24, t->n * 12);
        memcpy(f, t->f44, t->n * 4);
        memcpy(g, t->f48, t->n * 4);
        memcpy(h, t->f52, t->n);
        if (t->flags & 4) memcpy(b, t->f28, t->n * 12);
        if (t->flags & 8) memcpy(cc, t->g32, t->n * 12);
        if (t->flags & 16) memcpy(d, t->f36, t->n * 4);
        if (t->flags & 32) memcpy(e, t->f40, t->n * 4);
        while (m--) {
            memcpy(&a[t->n], &a[t->n - 1], 12);
            f[t->n] = lbl_80366250;
            g[t->n] = 0;
            if (t->flags & 4) memcpy(&b[t->n], &b[t->n - 1], 12);
            if (t->flags & 8) memcpy(&cc[t->n], &cc[t->n - 1], 12);
            if (t->flags & 16) memcpy(&d[t->n], &d[t->n - 1], 4);
            if (t->flags & 32) memcpy(&e[t->n], &e[t->n - 1], 4);
            t->n++;
        }
        delete[] t->f24;
        delete[] t->f44;
        delete[] t->f48;
        delete[] t->f52;
        if (t->flags & 4) delete[] t->f28;
        if (t->flags & 8) delete[] t->g32;
        if (t->flags & 16) delete[] t->f36;
        if (t->flags & 32) delete[] t->f40;
    } else {
        t->n = m;
        while (m--) {
            a[m].x = lbl_80366250;
            a[m].y = lbl_80366250;
            a[m].z = lbl_80366250;
            if (t->flags & 4) {
                b[m].x = lbl_80366250;
                b[m].y = lbl_80366250;
                b[m].z = lbl_80366258;
            }
            if (t->flags & 8) {
                cc[m].x = lbl_80366258;
                cc[m].y = lbl_80366250;
                cc[m].z = lbl_80366250;
            }
            if (t->flags & 16) d[m] = lbl_80366250;
            if (t->flags & 32) e[m] = lbl_80366250;
            f[m] = lbl_80366250;
            g[m] = 0;
            h[m] = 0;
        }
        if (lbl_80366250 == t->f92 && !(t->flags & 16)) t->f92 = lbl_80366260;
    }
    t->f24 = a;
    t->f28 = b;
    t->g32 = cc;
    t->f36 = d;
    t->f40 = e;
    t->f44 = f;
    t->f48 = g;
    t->f52 = h;
    fn_80246A30(t, upd);
}

} /* extern "C" */
