// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual s32 next(); };
struct E8 { s32 b; s32 a; };
struct P { u8 pad[0x58]; E8 *e; u32 pad5C; u32 n; u32 pad64; s32 cnt; };
extern "C" { void fn_800FB000(R *, s32); void fn_800FAEF8(R *); void fn_800FAEA0(R *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035AB48; }
void *__nwa__FUl(u32);

extern "C" void fn_8011B7D4(P *p, R *r) {
    u32 i;
    s32 b;
    s32 a;
    BOOL f;
    s32 k;
    if (p->n != 0) {
        if (!lbl_8035AB48) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AB48);
        p->e = (E8 *)__nwa__FUl(p->n * 8);
        fn_800F7E98();
        if (!p->e) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < p->n; i++) {
            fn_800FB000(r, 60);
            fn_800FAEF8(r);
            a = 0;
            b = 0;
            f = FALSE;
            while ((u32)(k = r->next()) != 6) {
                switch (k) {
                case 61:
                    b = r->next();
                    if (b < 0x10000000) {
                        r->err(30);
                    }
                    break;
                case 63:
                    a = r->next();
                    if (a < 0x10000000) {
                        r->err(30);
                    }
                    break;
                case 62:
                case 64:
                    switch (r->next()) {
                    case 0x40000001:
                        f = TRUE;
                        break;
                    case 0x40000000:
                        break;
                    default:
                        r->err(30);
                        break;
                    }
                    break;
                default:
                    r->err(30);
                    break;
                }
            }
            if (f) {
                a |= 0x10000;
            }
            p->e[p->cnt].b = b;
            p->e[p->cnt].a = a;
            p->cnt++;
        }
        fn_800FAEA0(r);
    }
}

} /* extern "C" */
