// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct A { u32 first; u8 d[0x24]; };
struct B { u32 first; u8 d[0x30]; };
struct P { u8 pad[0x24]; A *a; B *b; void *cur; };
extern "C" { u32 fn_800FB33C(R *); void fn_800FAEF8(R *); void fn_800FAFA8(R *); void fn_800FAF50(R *); void fn_80105B88(P *, void *, u32, u32, u32); void fn_80107C10(A *, R *, P *); void fn_80107FA4(B *, R *, P *); extern u8 lbl_802E2400[]; }

extern "C" void fn_801058F4(P *p, void *x, R *r) {
    u32 na;
    u32 nb;
    u32 nc;
    u32 ia;
    u32 ib;
    u32 k;
    na = 0;
    nb = 0;
    nc = 0;
    ia = 0;
    ib = 0;
    r->setup(lbl_802E2400, 9, 0);
    while ((k = r->next()) != 0 && k != 59) {
        switch ((s32)k) {
        case 57:
            fn_800FAFA8(r);
            na = fn_800FB33C(r);
            fn_800FAF50(r);
            break;
        case 58:
            fn_800FAFA8(r);
            nb = fn_800FB33C(r);
            fn_800FAF50(r);
            break;
        case 65:
            fn_800FAFA8(r);
            nc = fn_800FB33C(r);
            fn_800FAF50(r);
            break;
        default:
            r->err(30);
            break;
        }
    }
    if (na < 1 && nb < 1) {
        r->err(30);
    }
    fn_80105B88(p, x, na, nb, nc);
    if (k == 59) {
        fn_800FAEF8(r);
        while ((k = r->next()) != 6) {
            switch ((s32)k) {
            case 57:
                if (ia >= na) {
                    r->err(39);
                }
                fn_80107C10(&p->a[ia], r, p);
                if (p->a[ia].first == 0) {
                    p->cur = &p->a[ia];
                }
                ia++;
                break;
            case 58:
                if (ib >= nb) {
                    r->err(39);
                }
                fn_80107FA4(&p->b[ib], r, p);
                if (p->b[ib].first == 0) {
                    p->cur = &p->b[ib];
                }
                ib++;
                break;
            default:
                r->err(30);
                break;
            }
        }
    }
}

} /* extern "C" */
