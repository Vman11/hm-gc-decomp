// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

extern "C" {

struct R18A { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct V18A { f32 x; f32 y; f32 z; f32 w; };
struct E18A { u32 f0; f32 f4; f32 f8; s32 fc; };
struct S18A { u32 n; u32 f4; };
struct Q18A { u32 f0; void *f4; };
struct P18A { Q18A *f0; u32 f4; S18A f8; V18A f10; V18A f20; V18A f30; f32 f40; f32 f44; f32 f48; f32 f4c; u32 f50; E18A *f54; f32 f58; f32 f5c; };
u32 fn_800FADA8(R18A *);
void fn_800FB000(R18A *, s32);
f32 fn_800FB2E0(R18A *);
u32 fn_800FB33C(R18A *);
void fn_800FAEA0(R18A *);
void fn_800FAEF8(R18A *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8013E8C0(S18A *);
void fn_8013E904(S18A *, void *, R18A *, s32);
void fn_8013EA54(S18A *, void *, R18A *);
void fn_8014AB08(V18A *);
void fn_8014AC00(V18A *, R18A *);
void *memset(void *, s32, u32);
extern void *lbl_8035AE30;
extern f32 lbl_803649F8;
extern f32 lbl_803649FC;
extern f32 lbl_80364A00;
extern f32 lbl_80364A20;
extern f32 lbl_80364A24;
extern f32 lbl_80364A28;

static inline void Ent18A(E18A *e, R18A *r, P18A *p) {
    u32 k;
    fn_800FB000(r, 0x3e);
    fn_800FAEF8(r);
    e->fc = 0;
    while ((k = r->next()) != 6) {
        switch (k) {
        case 0x3f:
            e->f0 = fn_800FB33C(r);
            if (e->f0 >= p->f8.n) r->err(0x23);
            break;
        case 0x41:
            e->f4 = fn_800FB2E0(r);
            break;
        case 0x42:
            e->f8 = lbl_80364A00 * fn_800FB2E0(r);
            break;
        case 0x43:
            e->fc = 1;
            break;
        default:
            r->err(0x1e);
            break;
        }
    }

}

void fn_8018A0C4(P18A *p, Q18A *q, R18A *r) {
    u32 k;
    u32 i;

    if (p->f0 != 0) {
        if (p->f54) delete[] p->f54;
        fn_8013E8C0(&p->f8);
        p->f0 = 0;
        p->f4 = 0;
        fn_8014AB08(&p->f10);
        fn_8014AB08(&p->f20);
        fn_8014AB08(&p->f30);
        p->f40 = lbl_803649FC;
        p->f44 = lbl_803649FC;
        p->f48 = lbl_80364A20;
        p->f4c = lbl_80364A24;
        p->f50 = 0;
        p->f54 = 0;
        p->f58 = lbl_803649FC;
        p->f5c = lbl_803649F8;
    }
    p->f0 = q;
    p->f4 = 3;
    fn_800FAEF8(r);
    while ((k = r->next()) != 6) {
        switch (k) {
        case 0x3b:
            fn_8014AC00(&p->f10, r);
            p->f10.x *= lbl_80364A28;
            p->f10.y *= lbl_80364A28;
            p->f10.z *= lbl_80364A28;
            p->f10.w *= lbl_80364A28;
            break;
        case 0x44:
            p->f4 &= ~1;
            break;
        case 0x45:
            p->f4 &= ~2;
            break;
        case 0x3c:
            p->f40 = fn_800FB2E0(r);
            p->f48 = fn_800FB2E0(r);
            fn_8014AC00(&p->f20, r);
            p->f20.x *= lbl_80364A28;
            p->f20.y *= lbl_80364A28;
            p->f20.z *= lbl_80364A28;
            p->f20.w *= lbl_80364A28;
            break;
        case 0x3d:
            p->f44 = fn_800FB2E0(r);
            p->f4c = fn_800FB2E0(r);
            fn_8014AC00(&p->f30, r);
            p->f30.x *= lbl_80364A28;
            p->f30.y *= lbl_80364A28;
            p->f30.z *= lbl_80364A28;
            p->f30.w *= lbl_80364A28;
            break;
        case 0x3e:
            if (p->f50) r->err(0x27);
            p->f50 = fn_800FADA8(r);
            if (p->f50 < 1) r->err(0x23);
            if (!lbl_8035AE30) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AE30);
            p->f54 = new E18A[p->f50];
            fn_800F7E98();
            if (!p->f54) fn_800604C4(-4, 0, 0, 0);
            memset(p->f54, 0, p->f50 * sizeof(E18A));
            for (i = 0; i < p->f50; i++) {
                Ent18A(&p->f54[i], r, p);
            }
            fn_800FAEA0(r);
            break;
        case 0x3f:
            fn_8013E904(&p->f8, q->f4, r, 0);
            break;
        case 0x40:
            fn_8013EA54(&p->f8, q->f4, r);
            break;
        default:
            r->err(0x1e);
            break;
        }
    }
}

}

} /* extern "C" */
