// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u32 f0; u32 f4; u8 pad_[284]; virtual void s0(); virtual void s1(); virtual void s2(void *, int, int); virtual void s3(); virtual void v4(int); virtual u32 v5(); };
struct A;
struct E44 { u32 f0, f4; E44 *f8; u8 pad[32]; };
struct S8 { E44 *f0; S8 *f4; };
struct E24 { char f0[12]; u32 f12; u32 f16; u8 f20[4]; };
struct Base { u8 pad[116]; void *f116; u8 pad2[8]; };
struct T : Base {
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29(); virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35(); virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41(); virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47(); virtual void d48(); virtual void d49(); virtual void d50(); virtual void d51(); virtual void d52(); virtual void d53(); virtual void d54(); virtual void d55(); virtual void d56(); virtual void d57(); virtual void d58(); virtual void d59(); virtual void d60(); virtual void d61(); virtual void d62(); virtual void d63(); virtual void d64(); virtual void d65(); virtual void d66(); virtual void d67(); virtual void d68(); virtual void d69(); virtual void d70(); virtual void d71(); virtual void d72(); virtual void d73(); virtual void d74(); virtual void d75(); virtual void d76(); virtual void d77(); virtual void v78(s32, struct R *, int);
    u8 p132[228];
    S8 *f360;
    E44 *f364;
    u32 f368;
    u32 f372;
    u8 p376[356];
    u8 f732[4];
    u8 f736[4];
    f32 f740;
    f32 f744;
    u8 p748[16];
    u32 f764;
    u32 f768;
    u32 f772;
    u8 p776[20];
    E24 *f796;
    u32 f800;
    u8 p804[4];
    u32 f808;
    u32 f812;
    u8 f816;
    u8 p817[3];
    f32 f820;
    f32 f824;
    u8 p828[16];
    f32 f844;
    f32 f848;
    u8 p852[4];
    u32 f856;
    u32 f860;
    u32 f864;
};
extern void *lbl_8035AFCC;
u32 fn_800FADA8(R *);
u32 fn_800FB33C(R *);
f32 fn_800FB2E0(R *);
void fn_800FAEA0(R *);
void fn_800FAEF8(R *);
void fn_800FB064(R *, void *);
void fn_801C068C(T *, A *, void *, void *);
u32 fn_801AA9B4(void *, void *, void *);
void fn_801DCA84(T *, s32, A *, R *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
#define ALLOC(H, dst, expr) \
    if (!H) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(H); \
    dst = expr; \
    fn_800F7E98(); \
    if (!dst) fn_800604C4(-4, 0, 0, 0);
static inline u32 lnk(S8 *o, u32 n) {
    u32 i;
    for (i = 0; i < n - 1; i++) o->f0[i].f8 = &o->f0[i + 1];
    return i;
}
static inline void ld88(T *t, A *a, R *r, u8 *id) {
        s32 n = fn_800FADA8(r);
        s32 i;
        for (i = 0; i < n; i++) {
            u32 k = r->v5();
            fn_800FB064(r, id);
            switch (k) {
            case 63:
                fn_801C068C(t, a, t->f732, id);
                t->f816 |= 1;
                if (r->v5() == 186) t->f744 = fn_800FB2E0(r);
                else r->f4 = 1;
                break;
            case 64:
                fn_801C068C(t, a, t->f732, id);
                t->f816 |= 2;
                if (r->v5() == 186) t->f744 = fn_800FB2E0(r);
                else r->f4 = 1;
                break;
            case 65:
                fn_801C068C(t, a, t->f736, id);
                t->f816 |= 4;
                if (r->v5() == 186) t->f740 = fn_800FB2E0(r);
                else r->f4 = 1;
                break;
            case 66:
                fn_801C068C(t, a, t->f736, id);
                t->f816 |= 8;
                if (r->v5() == 186) t->f740 = fn_800FB2E0(r);
                else r->f4 = 1;
                break;
            }
        }
        r->v5();
}
void fn_801D60F4(T *t, s32 tok, A *a, R *r) {
    u32 i;
    u32 k;
    u8 id[8];
    u8 nm[8];
    void *x = t->f116;
    switch (tok) {
    case 88:
        ld88(t, a, r, id);
        break;
    case 86: t->f808 = 1; break;
    case 118: t->f812 = 1; break;
    case 174: t->v78(tok, r, 0); break;
    case 175: t->v78(tok, r, 0); break;
    case 176: t->f820 = fn_800FB2E0(r); break;
    case 177: t->f824 = fn_800FB2E0(r); break;
    case 172: {
        u32 n;
        u32 i;
        S8 *o;
        t->f368 = fn_800FB33C(r);
        n = t->f368;
        ALLOC(lbl_8035AFCC, o, new S8)
        o->f4 = t->f360;
        ALLOC(lbl_8035AFCC, o->f0, new E44[n])
        t->f360 = o;
        lnk(o, n);
        o->f0[n - 1].f8 = t->f364;
        t->f364 = o->f0;
        break;
    }
    case 173: t->f372 = fn_800FB33C(r); break;
    case 185: t->f800 = 1; break;
    case 179:
        fn_800FB064(r, id);
        fn_800FB064(r, nm);
        t->f768 = fn_801AA9B4(x, id, nm);
        break;
    case 180:
        fn_800FB064(r, id);
        fn_800FB064(r, nm);
        t->f772 = fn_801AA9B4(x, id, nm);
        t->f856 = fn_800FB33C(r);
        t->f860 = fn_800FB33C(r);
        t->f844 = fn_800FB2E0(r);
        t->f848 = fn_800FB2E0(r);
        break;
    case 178:
        fn_800FB064(r, id);
        fn_800FB064(r, nm);
        t->f764 = fn_801AA9B4(x, id, nm);
        break;
    case 181: {
        t->f864 = fn_800FADA8(r);
        ALLOC(lbl_8035AFCC, t->f796, new E24[t->f864])
        for (i = 0; i < t->f864; i++) {
            t->f796[i].f0[0] = 0;
            t->f796[i].f12 = 0;
            t->f796[i].f16 = 0;
            *(u32 *)t->f796[i].f20 = 0;
            if (r->v5() != 181) r->v4(0);
            fn_800FB064(r, t->f796[i].f0);
            fn_800FAEF8(r);
            k = r->v5();
            while (k != 6) {
                switch (k) {
                case 182: t->f796[i].f12 |= 1; break;
                case 183: t->f796[i].f12 |= 2; break;
                case 110:
                    fn_800FB064(r, id);
                    fn_801C068C(t, a, t->f796[i].f20, id);
                    break;
                case 184: t->f796[i].f16 = fn_800FB33C(r); break;
                default: r->v4(33); break;
                }
                k = r->v5();
            }
        }

        fn_800FAEA0(r);
        break;
    }
    case 87:
    default:
        fn_801DCA84(t, tok, a, r);
        break;
    }
}

} /* extern "C" */
