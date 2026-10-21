// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct P { f32 *a; u32 na; f32 *b; u32 nb; };
extern "C" { u32 fn_800FADA8(R *); f32 fn_800FB2E0(R *); void fn_800FAEF8(R *); void fn_800FAEA0(R *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035AA60; }
void *__nwa__FUl(u32);

extern "C" void fn_80108174(P *p, R *r) {
    u32 k;
    u32 i;
    u8 f = 0;
    if (p->a != 0 || p->b != 0) {
        f = 1;
    }
    if (f) {
        if (p->a) delete[] p->a;
        if (p->b) delete[] p->b;
        p->a = 0;
        p->na = 0;
        p->b = 0;
        p->nb = 0;
    }
    fn_800FAEF8(r);
    while ((k = r->next()) != 6) {
        switch ((s32)k) {
        case 58:
            if (p->a != 0) {
                r->err(39);
            }
            p->na = fn_800FADA8(r);
            if (!lbl_8035AA60) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AA60);
            p->a = (f32 *)__nwa__FUl(p->na * 4);
            fn_800F7E98();
            if (!p->a) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < p->na; i++) {
                p->a[i] = fn_800FB2E0(r);
            }
            fn_800FAEA0(r);
            break;
        case 59:
            if (p->b != 0) {
                r->err(39);
            }
            p->nb = fn_800FADA8(r);
            if (!lbl_8035AA60) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AA60);
            p->b = (f32 *)__nwa__FUl(p->nb * 4);
            fn_800F7E98();
            if (!p->b) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < p->nb; i++) {
                p->b[i] = fn_800FB2E0(r);
            }
            fn_800FAEA0(r);
            break;
        default:
            r->err(7);
            break;
        }
    }
}

} /* extern "C" */
