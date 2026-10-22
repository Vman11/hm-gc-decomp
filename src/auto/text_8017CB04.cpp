// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

extern "C" {

struct R17C { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
class C8017DB90 { public: u8 d[0x34]; C8017DB90(); };
class C8019D7D4 { public: u8 d[0x2c]; C8019D7D4(); };
class C80185A10 { public: u8 d[0x1c]; C80185A10(); };
struct Key17C { u8 d[8]; };
struct P17C { u32 f0; u8 pad4[0xc]; virtual void p0(); virtual void clr(); u32 n5; u32 n6; u32 n7; C8017DB90 *a; C8019D7D4 *b; C80185A10 *c; };
u32 fn_800FADA8(R17C *);
void fn_800FB064(R17C *, void *);
void fn_800FAEA0(R17C *);
void fn_800FAFA8(R17C *);
void fn_800FAF50(R17C *);
u32 fn_800FB33C(R17C *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800F8E38(P17C *, u32);
void fn_800F87F0(P17C *, void *, void *);
void fn_8017F63C(void *, P17C *, char *);
void fn_8017C858(void *, P17C *, R17C *);
extern void *lbl_8035ADA0;
extern char lbl_802E8688[];

void fn_8017CB04(P17C *p, void *ctx, R17C *r) {
    Key17C key;
    char buf[8];
    char *name;
    u32 k;
    u32 total;
    u32 n;
    u32 i;
    u32 ia;
    u32 ib;
    u32 ic;

    if (p->f0) p->clr();
    r->setup(lbl_802E8688, 0xe, 0);
    k = r->next();
    if (k == 0x39) {
        fn_800FB064(r, buf);
        name = buf;
        k = r->next();
    } else {
        name = 0;
    }
    while (k != 0x3e) {
        switch (k) {
        case 0:
            fn_800F8E38(p, p->n5 + p->n6 + p->n7);
            fn_8017F63C(ctx, p, name);
            return;
        case 0x3a:
            if (p->n5) r->err(0x27);
            fn_800FAFA8(r);
            p->n5 = fn_800FB33C(r);
            fn_800FAF50(r);
            if (!lbl_8035ADA0) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035ADA0);
            p->a = new C8017DB90[p->n5];
            fn_800F7E98();
            if (!p->a) fn_800604C4(-4, 0, 0, 0);
            break;
        case 0x3b:
            if (p->n6) r->err(0x27);
            fn_800FAFA8(r);
            p->n6 = fn_800FB33C(r);
            fn_800FAF50(r);
            if (!lbl_8035ADA0) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035ADA0);
            p->b = new C8019D7D4[p->n6];
            fn_800F7E98();
            if (!p->b) fn_800604C4(-4, 0, 0, 0);
            break;
        case 0x46:
            if (p->n7) r->err(0x27);
            fn_800FAFA8(r);
            p->n7 = fn_800FB33C(r);
            fn_800FAF50(r);
            if (!lbl_8035ADA0) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035ADA0);
            p->c = new C80185A10[p->n7];
            fn_800F7E98();
            if (!p->c) fn_800604C4(-4, 0, 0, 0);
            break;
        default:
            r->err(0x1e);
            break;
        }
        k = r->next();
    }
    total = p->n5 + p->n6 + p->n7;
    fn_800F8E38(p, total);
    fn_8017F63C(ctx, p, name);
    ia = ib = ic = 0;
    n = fn_800FADA8(r);
    if (n > total) r->err(0x23);
    for (i = 0; i < n; i++) {
        switch (r->next()) {
        case 0x3a:
            if (ia >= p->n5) r->err(0x27);
            fn_800FB064(r, &key);
            fn_800F87F0(p, &key, &p->a[ia]);
            fn_8017C858(&p->a[ia], p, r);
            ia++;
            break;
        case 0x3b:
            if (ib >= p->n6) r->err(0x27);
            fn_800FB064(r, &key);
            fn_800F87F0(p, &key, &p->b[ib]);
            fn_8017C858(&p->b[ib], p, r);
            ib++;
            break;
        case 0x46:
            if (ic >= p->n7) r->err(0x27);
            fn_800FB064(r, &key);
            fn_800F87F0(p, &key, &p->c[ic]);
            fn_8017C858(&p->c[ic], p, r);
            ic++;
            break;
        default:
            r->err(0x1e);
            break;
        }
    }
    fn_800FAEA0(r);
}

}

} /* extern "C" */
