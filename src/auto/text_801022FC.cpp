// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct P { void *h; f32 a; f32 b[3]; f32 c[3]; u16 s[10]; u16 lo; u16 hi; u32 flags; f32 sub[3]; f32 scale; };
extern "C" { void fn_800FAEF8(R *); u16 fn_800FB33C(R *); f32 fn_800FB2E0(R *); void fn_80101124(void *, R *); extern f32 lbl_80363854; extern f32 lbl_803596E0[4]; extern u32 lbl_80363858; }

extern "C" void fn_801022FC(P *p, void *h, R *r) {
    u32 k;
    if (p->h != 0) {
        p->h = 0;
        p->s[0] = 0;
        p->s[1] = 0;
        p->s[2] = 0;
        p->s[3] = 0;
        p->s[4] = 0;
        p->s[5] = 0;
        p->s[6] = 0;
        p->s[7] = 0;
        p->s[8] = 0;
        p->s[9] = 0;
        p->a = lbl_80363854;
        p->b[0] = lbl_80363854;
        p->b[1] = lbl_80363854;
        p->b[2] = lbl_80363854;
        p->c[0] = lbl_80363854;
        p->c[1] = lbl_80363854;
        p->c[2] = lbl_80363854;
        p->lo = 0;
        p->hi = 0;
        p->sub[0] = lbl_80363854;
        p->sub[1] = lbl_80363854;
        p->sub[2] = lbl_80363854;
        p->scale = lbl_803596E0[0];
        p->flags = 0;
    }
    p->h = h;
    fn_800FAEF8(r);
    while ((k = r->next()) != 6) {
        switch (k) {
        case 63: p->s[0] = fn_800FB33C(r); p->s[1] = fn_800FB33C(r); break;
        case 64: p->s[2] = fn_800FB33C(r); p->s[3] = fn_800FB33C(r); break;
        case 65: p->s[4] = fn_800FB33C(r); p->s[5] = fn_800FB33C(r); break;
        case 66: p->s[6] = fn_800FB33C(r); p->s[7] = fn_800FB33C(r); break;
        case 77: p->s[8] = fn_800FB33C(r); p->s[9] = fn_800FB33C(r); break;
        case 68: p->a = fn_800FB2E0(r); break;
        case 69:
        case 72:
            p->b[0] = fn_800FB2E0(r);
            p->b[1] = fn_800FB2E0(r);
            p->b[2] = fn_800FB2E0(r);
            break;
        case 70:
            p->lo = fn_800FB33C(r);
            if (p->hi == 0) {
                p->hi = p->lo + 1;
            }
            break;
        case 73:
            p->c[0] = fn_800FB2E0(r);
            p->c[1] = fn_800FB2E0(r);
            p->c[2] = fn_800FB2E0(r);
            break;
        case 71: p->hi = fn_800FB33C(r); break;
        case 74:
            fn_80101124(p->sub, r);
            p->scale = fn_800FB2E0(r);
            p->flags |= lbl_80363858;
            break;
        default:
            r->err(30);
            break;
        }
    }
}

} /* extern "C" */
