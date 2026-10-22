// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R1D8 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
class C80140008 { public: u8 d[0x1C]; C80140008(); ~C80140008(); };
class C80140108 { public: u8 d[0x10]; C80140108(); ~C80140108(); };
struct Nm1D8 { u8 d[8]; };
struct Key1D8 { u8 d[8]; };
struct Q1D8 { u8 pad[0xf0]; u8 tf0[0x18]; u8 t108[4]; };
struct P1D8 { u8 pad[0x10]; virtual void p0(); virtual void clr(); u8 sub[0x18]; u32 nf; f32 *fl; u32 nr; void **refs; u32 n3; C80140108 *arr3; u32 n; C80140008 *arr; };
u32 fn_800FADA8(R1D8 *);
void fn_800FB064(R1D8 *, void *);
void fn_800FB000(R1D8 *, s32);
void fn_800FAEA0(R1D8 *);
f32 fn_800FB2E0(R1D8 *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800F8E38(P1D8 *, u32);
void fn_80135E18(Q1D8 *, P1D8 *, void *);
void fn_800F87F0(P1D8 *, void *, void *);
void fn_8021B9DC(void *, R1D8 *);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, char *, void *);
void fn_8013FE24(C80140008 *, P1D8 *, R1D8 *);
void fn_80140030(C80140108 *, R1D8 *);
extern void *lbl_8035AC90;
extern u8 lbl_802E5F48[];
void *__nwa__FUl(u32);

void fn_801401D8(P1D8 *p, Q1D8 *q, R1D8 *r) {
    Key1D8 key2;
    Key1D8 key;
    char grp[8];
    Nm1D8 nm;
    Nm1D8 *name;
    u32 k;
    u32 i1;
    u32 i2;
    u32 i3;
    u32 i4;
    void *v;
    if (p->arr != 0) {
        p->clr();
    }
    r->setup(lbl_802E5F48, 10, 0);
    k = r->next();
    name = 0;
    if (k == 57) {
        fn_800FB064(r, &nm);
        name = &nm;
        k = r->next();
    }
    do {
        switch ((s32)k) {
        case 58:
            fn_8021B9DC(p->sub, r);
            break;
        case 59:
            if (p->nf != 0) {
                r->err(39);
            }
            p->nf = fn_800FADA8(r);
            if (p->nf < 1) {
                r->err(35);
            }
            if (!lbl_8035AC90) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AC90);
            p->fl = (f32 *)__nwa__FUl(p->nf * 4);
            fn_800F7E98();
            if (!p->fl) fn_800604C4(-4, 0, 0, 0);
            for (i1 = 0; i1 < p->nf; i1++) {
                p->fl[i1] = fn_800FB2E0(r);
            }
            fn_800FAEA0(r);
            break;
        case 60:
            if (p->nr != 0) {
                r->err(39);
            }
            p->nr = fn_800FADA8(r);
            if (p->nr < 1) {
                r->err(35);
            }
            if (!lbl_8035AC90) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AC90);
            p->refs = (void **)__nwa__FUl(p->nr * 4);
            fn_800F7E98();
            if (!p->refs) fn_800604C4(-4, 0, 0, 0);
            for (i2 = 0; i2 < p->nr; i2++) {
                fn_800FB064(r, &key);
                fn_800FB064(r, grp);
                if ((char *)grp == 0 || grp[0] == 0) {
                    v = fn_800F9398(q->tf0, &key);
                } else {
                    v = fn_800F9788(q->t108, grp, &key);
                }
                p->refs[i2] = v;
            }
            fn_800FAEA0(r);
            break;
        case 61:
            if (p->n3 != 0) {
                r->err(39);
            }
            p->n3 = fn_800FADA8(r);
            if (p->n3 < 1) {
                r->err(35);
            }
            if (!lbl_8035AC90) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AC90);
            p->arr3 = new C80140108[p->n3];
            fn_800F7E98();
            if (!p->arr3) fn_800604C4(-4, 0, 0, 0);
            for (i3 = 0; i3 < p->n3; i3++) {
                fn_80140030(&p->arr3[i3], r);
            }
            fn_800FAEA0(r);
            break;
        case 62:
            if (p->n != 0) {
                r->err(39);
            }
            p->n = fn_800FADA8(r);
            if (p->n < 1) {
                r->err(35);
            }
            fn_800F8E38(p, p->n);
            fn_80135E18(q, p, name);
            if (!lbl_8035AC90) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AC90);
            p->arr = new C80140008[p->n];
            fn_800F7E98();
            if (!p->arr) fn_800604C4(-4, 0, 0, 0);
            for (i4 = 0; i4 < p->n; i4++) {
                fn_800FB000(r, 62);
                fn_800FB064(r, &key2);
                fn_800F87F0(p, &key2, &p->arr[i4]);
                fn_8013FE24(&p->arr[i4], p, r);
            }
            fn_800FAEA0(r);
            break;
        default:
            r->err(30);
            break;
        }
    } while ((k = r->next()) != 0);
}

} /* extern "C" */
