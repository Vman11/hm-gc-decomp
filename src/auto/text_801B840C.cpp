// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

extern "C" {

struct R1B8 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct Key1B8 { u8 d[8]; };
struct Key1B8b { u8 d[0x14]; };
struct H1B8 { u8 pad[0x10]; u32 n; };
struct E1B8a { u8 d[0x14]; };
struct T1B8 { H1B8 *h; u8 pad[0xc]; E1B8a *data; };
struct E1B8 { void *a; u32 b; u32 c; };
struct S1B8 { u8 pad[8]; void *f8; };
struct P1B8 {
    u8 pad0[0x74]; S1B8 *f74;
    u8 pad78[0x164 - 0x78]; u32 f164;
    u8 pad168[0x170 - 0x168]; u32 f170; u32 pad174; u32 f178; u32 f17c;
    u8 pad180[0x188 - 0x180]; u32 f188; u32 f18c; u8 f190;
    u8 pad191[0x1ac - 0x191]; f32 f1ac; void *f1b0; void *f1b4; void **f1b8; E1B8 *f1bc; T1B8 *f1c0; void *f1c4;
    u8 pad1c8[0x1d0 - 0x1c8]; void *f1d0; void *f1d4;
};
u32 fn_800FADA8(R1B8 *);
void fn_800FB064(R1B8 *, void *);
void fn_800FB0F8(R1B8 *, char **);
f32 fn_800FB2E0(R1B8 *);
u32 fn_800FB33C(R1B8 *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *fn_80207198(void *, char *, void *);
void *fn_801AAA5C(S1B8 *, void *, void *);
void fn_801C068C(P1B8 *, void *, void *, void *);
void fn_801DCA84(P1B8 *, s32, void *, R1B8 *);
extern void *lbl_8035AFCC;

void fn_801B840C(P1B8 *p, s32 k, void *ctx, R1B8 *r) {
    char *s;
    Key1B8 key;
    Key1B8b key2;
    u32 i;
    u32 j;

    switch (k) {
    case 0x84:
        p->f17c = 1;
        p->f1ac = fn_800FB2E0(r);
        break;
    case 0x56:
        p->f178 = 1;
        break;
    case 0x77:
        p->f170 = fn_800FB33C(r);
        break;
    case 0x76:
        p->f164 = fn_800FB33C(r);
        break;
    case 0x7c:
        fn_800FB0F8(r, &s);
        fn_800FB064(r, &key);
        p->f1d4 = fn_80207198(p->f74->f8, s, &key);
        delete[] s;
        break;
    case 0x7b:
        fn_800FB0F8(r, &s);
        fn_800FB064(r, &key);
        p->f1d0 = fn_80207198(p->f74->f8, s, &key);
        delete[] s;
        break;
    case 0x78:
        fn_800FB0F8(r, &s);
        fn_800FB064(r, &key);
        p->f1c0 = (T1B8 *)fn_80207198(p->f74->f8, s, &key);
        delete[] s;
        p->f18c = p->f188 = p->f1c0->h->n;
        if (!lbl_8035AFCC) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AFCC);
        p->f1bc = new E1B8[p->f188];
        fn_800F7E98();
        if (!p->f1bc) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < p->f188; i++) {
            p->f1bc[i].a = &p->f1c0->data[i];
            p->f1bc[i].b = 0;
            p->f1bc[i].c = 0;
        }
        break;
    case 0x39:
        p->f18c = p->f188 = fn_800FADA8(r);
        if (!lbl_8035AFCC) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AFCC);
        p->f1b8 = new void *[p->f188];
        fn_800F7E98();
        if (!p->f1b8) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < p->f188; i++) {
            r->next();
            fn_800FB064(r, &key2);
            fn_801C068C(p, ctx, &p->f1b8[i], &key2);
        }
        while (r->next() != 6) {
        }
        break;
    case 0x7a:
        p->f18c = p->f188 = fn_800FADA8(r);
        if (!lbl_8035AFCC) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AFCC);
        p->f1bc = new E1B8[p->f188];
        fn_800F7E98();
        if (!p->f1bc) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < p->f188; i++) {
            r->next();
            fn_800FB064(r, &key2);
            fn_800FB064(r, &key);
            p->f1bc[i].b = 0;
            p->f1bc[i].c = 0;
            p->f1bc[i].a = fn_801AAA5C(p->f74, &key2, &key);
        }
        while (r->next() != 6) {
        }
        break;
    case 0x7d:
        fn_800FB064(r, &key2);
        fn_801C068C(p, ctx, &p->f1c4, &key2);
        break;
    case 0x58: {
        u32 n2 = fn_800FADA8(r);
        u32 i2;
        u32 t;
        for (i2 = 0; i2 < n2; i2++) {
            t = r->next();
            fn_800FB064(r, &key2);
            switch (t) {
            case 0x3f:
                fn_801C068C(p, ctx, &p->f1b0, &key2);
                p->f190 |= 1;
                break;
            case 0x40:
                fn_801C068C(p, ctx, &p->f1b0, &key2);
                p->f190 |= 2;
                break;
            case 0x41:
                fn_801C068C(p, ctx, &p->f1b4, &key2);
                p->f190 |= 4;
                break;
            case 0x42:
                fn_801C068C(p, ctx, &p->f1b4, &key2);
                p->f190 |= 8;
                break;
            }
        }
        while (r->next() != 6) {
        }
        break;
    }
    default:
        fn_801DCA84(p, k, ctx, r);
        break;
    }
}

}

} /* extern "C" */
