// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B5E0;
extern void *lbl_8035B1C0;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
struct C802538C0 { C802538C0(); u8 pad[24]; };
struct A { u8 pad[188]; int f188; };
struct T { u8 pad[28]; void *f28; void *f32; u8 pad36[4]; void **f40; u32 f44; C802538C0 **f48; u32 f52; u8 pad56[40]; u32 f96; u32 f100; };
void *fn_800F8274(void *, void *);
void fn_8011B718(void *, A *, void *);
void fn_8011B6F4(void *);
void *fn_8021616C(void *);
void fn_80207BF4(void *, const char *);
void fn_8025370C(C802538C0 *, void *, void *, int, int);
void fn_802079F0(void *, int);
void fn_800F87F0(T *, void *, C802538C0 *);
static inline void *look(void *m, void *k) { return fn_800F8274(m, k); }
void fn_8025180C(T *t, A *a, void *k1, void *k2, const char *s, int p6, int p7) {
    void *x;
    void *y;
    if (a && a->f188 && (x = look(t->f32, k2)) != 0) {
    y = look(t->f28, k1);
    if (fn_800F8274(t, k1) == 0 && t->f96 < t->f52) {
        x = fn_800F8274(t->f28, k1);
        if (a && a->f188 && t->f100 < t->f44) {
            t->f40[t->f100] = fn_800F8274(t->f32, k2);
            fn_8011B718(t->f40[t->f100], a, x);
            t->f100++;
        }
        if (fn_800F8274(t, k1) == 0 && t->f96 < t->f52) {
            if (lbl_8035B5E0 == 0) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035B5E0);
            t->f48[t->f96] = new C802538C0;
            fn_800F7E98();
            if (t->f48[t->f96] == 0) fn_800604C4(-4, 0, 0, 0);
            a = (A *)fn_8021616C(lbl_8035B1C0);
            fn_80207BF4(a, s);
            fn_8025370C(t->f48[t->f96], x, k1, p6, p7);
            fn_802079F0(a, 0);
            fn_800F87F0(t, k1, t->f48[t->f96]);
            t->f96++;
        }
    } else {
        fn_8011B6F4(x);
        fn_8011B718(x, a, y);
    }
    }
}

} /* extern "C" */
