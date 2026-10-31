// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(void *, int, int); virtual void s3(); virtual void err(int); virtual u32 next(); };
struct C801632EC { u32 f0; s32 a[4]; s32 f20, f24, f28; u8 b32; s32 f36; s32 c[4]; s32 f56, f60, f64; u8 b68; s32 f72, f76, f80, f84, f88; C801632EC(); };
struct T { u8 pad[16]; s32 m[3][4]; u8 n64; C801632EC *p68; u8 n72; };
s32 fn_80162FBC(T *, R *);
extern void *lbl_8035AC20;
extern u32 lbl_80364654, lbl_80364658, lbl_8036465C, lbl_80364660;
u32 fn_800FADA8(R *);
void fn_800FAEA0(R *);
void fn_800FAEF8(R *);
void fn_800FB000(R *, s32);
s32 fn_800FB33C(R *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
#define ALLOC(H, dst, expr) \
    if (!H) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(H); \
    dst = expr; \
    fn_800F7E98(); \
    if (!dst) fn_800604C4(-4, 0, 0, 0);
static inline s32 m0(R *r) {
    s32 v;
    switch (r->next()) {
    default: r->err(30);
    case 102: v = 2; break;
    case 103: v = 4; break;
    case 104: v = 6; break;
    case 105: v = 0; break;
    case 150: v = 3; break;
    case 151: v = 5; break;
    case 152: v = 7; break;
    case 153: v = 1; break;
    case 154: v = 8; break;
    case 155: v = 9; break;
    case 156: v = 10; break;
    case 157: v = 11; break;
    case 95: v = 15; break;
    case 98: v = 13; break;
    case 99: v = 12; break;
    case 158: v = 14; break;
    }
    return v;
}
static inline s32 m1(R *r) {
    s32 v;
    switch (r->next()) {
    default: r->err(30);
    case 150: v = 1; break;
    case 151: v = 2; break;
    case 152: v = 3; break;
    case 153: v = 0; break;
    case 155: v = 4; break;
    case 157: v = 5; break;
    case 95: v = 7; break;
    case 158: v = 6; break;
    }
    return v;
}
static inline s32 m2(R *r) {
    s32 v;
    switch (r->next()) {
    default: r->err(30);
    case 85: v = 0; break;
    case 86: v = 1; break;
    case 87: v = 8; break;
    case 88: v = 9; break;
    case 89: v = 10; break;
    case 90: v = 11; break;
    case 91: v = 12; break;
    case 92: v = 13; break;
    case 93: v = 14; break;
    case 94: v = 15; break;
    }
    return v;
}
static inline s32 m3(R *r) {
    s32 v;
    switch (r->next()) {
    default: r->err(30);
    case 95: v = 0; break;
    case 96: v = 1; break;
    case 97: v = 2; break;
    }
    return v;
}
static inline s32 m4(R *r) {
    s32 v;
    switch (r->next()) {
    default: r->err(30);
    case 98: v = 3; break;
    case 99: v = 0; break;
    case 100: v = 1; break;
    case 101: v = 2; break;
    }
    return v;
}
static inline s32 m5(R *r) {
    s32 v;
    switch (r->next()) {
    default: r->err(30);
    case 102: v = 1; break;
    case 103: v = 2; break;
    case 104: v = 3; break;
    case 105: v = 0; break;
    }
    return v;
}
static inline s32 m6(R *r) {
    s32 v;
    switch (r->next()) {
    default: r->err(30);
    case 106: v = 0; break;
    case 107: v = 1; break;
    case 108: v = 2; break;
    case 109: v = 3; break;
    case 110: v = 4; break;
    case 111: v = 5; break;
    case 112: v = 6; break;
    case 113: v = 7; break;
    case 134: v = 16; break;
    case 135: v = 17; break;
    case 136: v = 18; break;
    case 137: v = 19; break;
    case 138: v = 20; break;
    case 139: v = 21; break;
    case 140: v = 22; break;
    case 141: v = 23; break;
    case 142: v = 24; break;
    case 143: v = 25; break;
    case 144: v = 26; break;
    case 145: v = 27; break;
    case 146: v = 28; break;
    case 147: v = 29; break;
    case 148: v = 30; break;
    case 149: v = 31; break;
    }
    return v;
}

static inline bool has(volatile s32 *a, s32 v) { return a[0] == v || a[1] == v || a[2] == v || a[3] == v; }
void fn_80161E64(T *t, void *u, R *r) {
    u32 i, j;
    fn_800FB000(r, 57);
    fn_800FAEF8(r);
    u32 tok;
    while ((tok = r->next()) != 6) {
        switch (tok) {
        case 159:
            {
            u32 j; T *q; T *p; u32 i;
            t->n64 = fn_800FADA8(r);
            for (p = t, i = 0; i < t->n64; p = (T *)((u8 *)p + 16), i++) {
                for (j = 0, q = p; j < 4; j++, q = (T *)((u8 *)q + 4)) {
                    switch (r->next()) {
                    case 81: q->m[0][0] = 0; break;
                    case 82: q->m[0][0] = 1; break;
                    case 83: q->m[0][0] = 2; break;
                    case 84: q->m[0][0] = 3; break;
                    default: r->err(30);
                    }
                }
            }
            fn_800FAEA0(r);
        }
            break;
        case 58:
            t->n72 = fn_800FADA8(r);
            ALLOC(lbl_8035AC20, t->p68, new C801632EC[t->n72])
            for (i = 0; i < t->n72; i++) {
                fn_800FB000(r, 58);
                fn_800FAEF8(r);
                while ((tok = r->next()) != 6) {
                    switch (tok) {
                    case 64: t->p68[i].a[0] = m0(r); break;
                    case 65: t->p68[i].a[1] = m0(r); break;
                    case 66: t->p68[i].a[2] = m0(r); break;
                    case 67: t->p68[i].a[3] = m0(r); break;
                    case 73: t->p68[i].c[0] = m1(r); break;
                    case 74: t->p68[i].c[1] = m1(r); break;
                    case 75: t->p68[i].c[2] = m1(r); break;
                    case 76: t->p68[i].c[3] = m1(r); break;
                    case 59: t->p68[i].f20 = m2(r); break;
                    case 60: t->p68[i].f24 = m3(r); break;
                    case 61: t->p68[i].f28 = m4(r); break;
                    case 62: t->p68[i].b32 = 1; break;
                    case 63: t->p68[i].f36 = m5(r); break;
                    case 68: t->p68[i].f56 = m2(r); break;
                    case 69: t->p68[i].f60 = m3(r); break;
                    case 70: t->p68[i].f64 = m4(r); break;
                    case 71: t->p68[i].b68 = 1; break;
                    case 72: t->p68[i].f72 = m5(r); break;
                    case 77: t->p68[i].f76 = fn_80162FBC(t, r); break;
                    case 78: t->p68[i].f80 = m6(r); break;
                    case 79: t->p68[i].f88 = fn_800FB33C(r); break;
                    case 80: t->p68[i].f84 = fn_800FB33C(r); break;
                    default: r->err(30);
                    }
                }
                {
                    C801632EC *e = &t->p68[i];
                    if (has(e->a, 8) || has(e->a, 9) || has(e->c, 4)) e->f0 |= lbl_80364654;
                }
                {
                    C801632EC *e = &t->p68[i];
                    if (has(e->a, 10) || has(e->a, 11) || has(e->c, 5)) e->f0 |= lbl_80364658;
                }
                {
                    C801632EC *e = &t->p68[i];
                    if (has(e->a, 14)) e->f0 |= lbl_8036465C;
                }
                {
                    C801632EC *e = &t->p68[i];
                    if (has(e->c, 6)) e->f0 |= lbl_80364660;
                }
            }
            break;
        default:
            r->err(30);
        }
    }
}

} /* extern "C" */
