// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R2E9 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct Sub2E9 {
    u8 pad_Sub2E9[0x10];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual u32 a30(u32);
    virtual u32 a34(u32);
};
struct Src2E9 {
    u32 f0;
    u32 f4;
    u8 pad8[0xc];
    virtual void v0();
    virtual void v1();
    virtual u32 b10(u32);
    virtual u32 b14(u32);
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual u32 b40(u32);
    Sub2E9 *sub;
};

struct P2E9 {
    u32 v[4];
    u32 f10;
    u32 f14;
    u32 f18;
    u32 f1c;
    u16 n20;
    u16 f22;
    u16 flags;
    u16 f26;
    u16 f28;
    u16 n2a;
    union { u8 b[4]; u8 *ptr; } u;
    virtual void p0();
    virtual void done(u32);
    u32 f34;
    u8 g38;
    u8 g39;
    u8 g3a;
    u8 g3b;
};
u32 fn_800FADA8(R2E9 *);
void fn_800FAEA0(R2E9 *);
void fn_800FAEF8(R2E9 *);
u32 fn_800FB33C(R2E9 *);
f32 fn_800FB2E0(R2E9 *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
extern void *lbl_8035AC10;
extern u16 lbl_80364058, lbl_8036405A, lbl_8036405C, lbl_8036405E, lbl_80364060, lbl_80364062, lbl_80364064, lbl_80364066;
extern u8 lbl_80364050, lbl_80364051;
extern f32 lbl_80364054;
void *__nwa__FUl(u32);

inline u8 *Alloc2E9(P2E9 *p) {
    if (!lbl_8035AC10) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AC10);
    p->u.ptr = (u8 *)__nwa__FUl(p->n2a);
    fn_800F7E98();
    if (!p->u.ptr) fn_800604C4(-4, 0, 0, 0);
    return p->u.ptr;
}

void fn_80132E98(P2E9 *p, u32 ctx, Src2E9 *src, R2E9 *r) {
    u32 k;
    u32 a;
    u32 b;
    u32 i;
    u8 *dst;

    p->flags |= lbl_80364058;
    fn_800FAEF8(r);
    while ((k = r->next()) != 6) {
        switch ((s32)k) {
        case 0x3b:
            p->f26 = fn_800FB33C(r);
            break;
        case 0x5e:
            a = fn_800FB33C(r);
            b = fn_800FB33C(r);
            if (b >= 4) {
                r->err(0x23);
            }
            if (b >= p->n2a) {
                p->n2a = b + 1;
            }
            p->u.b[b] = a;
            break;
        case 0x5f:
            p->flags |= lbl_8036405A;
            p->n2a = fn_800FADA8(r);
            dst = (p->n2a <= 4) ? p->u.b : Alloc2E9(p);
            for (i = 0; i < p->n2a; i++, dst++) {
                *dst = fn_800FB33C(r);
            }
            fn_800FAEA0(r);
            break;
        case 0x60:
            a = fn_800FB33C(r);
            if (src->f0 != 0) {
                p->v[p->n20] = src->b10(a);
            } else {
                p->v[p->n20] = src->sub->a30(a);
            }
            p->f14 = fn_800FB33C(r);
            p->f22 = fn_800FB33C(r);
            p->n20++;
            break;
        case 0x61:
            p->flags &= ~0xfc;
            p->flags |= lbl_8036405C;
            break;
        case 0x62:
            p->flags &= ~0xfc;
            p->flags |= lbl_8036405E;
            break;
        case 0x63:
            p->flags &= ~0xfc;
            p->flags |= lbl_80364060;
            a = fn_800FB33C(r);
            if (src->f4 != 0) {
                p->f10 = src->b14(a);
            } else {
                p->f10 = src->sub->a34(a);
            }
            p->f18 = fn_800FB33C(r);
            p->f1c = fn_800FB33C(r);
            break;
        case 0x64:
            p->flags &= ~0xfc;
            p->flags |= lbl_80364062;
            a = fn_800FB33C(r);
            if (src->f4 != 0) {
                p->f10 = src->b14(a);
            } else {
                p->f10 = src->sub->a34(a);
            }
            p->f18 = fn_800FB33C(r);
            p->f1c = fn_800FB33C(r);
            break;
        case 0x75:
            p->flags &= ~0xfc;
            p->flags |= lbl_80364064;
            p->f34 = src->b40(fn_800FB33C(r));
            p->f14 = fn_800FB33C(r);
            p->f22 = fn_800FB33C(r);
            break;
        case 0x65:
            p->flags &= ~0xfc;
            p->flags |= lbl_80364066;
            a = fn_800FB33C(r);
            if (src->f4 != 0) {
                p->f10 = src->b14(a);
            } else {
                p->f10 = src->sub->a34(a);
            }
            p->f18 = fn_800FB33C(r);
            p->f1c = fn_800FB33C(r);
            break;
        case 0x79:
            fn_800FAEF8(r);
            while ((k = r->next()) != 6) {
                switch ((s32)k) {
                case 0x78:
                    p->g38 |= lbl_80364050;
                    p->g3b = fn_800FB33C(r);
                    p->g3a = lbl_80364054 * fn_800FB2E0(r);
                    p->g39 = fn_800FB33C(r);
                    if ((u8)fn_800FB33C(r)) {
                        p->g38 |= lbl_80364051;
                    }
                    break;
                default:
                    r->err(0x1e);
                    break;
                }
            }
            break;
        default:
            r->err(0x1e);
            break;
        }
    }
    if (p->flags & 4) {
        p->f28 = p->f22 / 3;
    } else if (p->flags & 8) {
        p->f28 = p->f22 - 2;
    } else if (p->flags & 0x50) {
        p->f28 = p->f1c / 3;
    } else if (p->flags & 0x20) {
        p->f28 = p->f1c - 2;
    } else {
        p->f28 = p->f22;
    }
    p->done(ctx);
}

} /* extern "C" */
