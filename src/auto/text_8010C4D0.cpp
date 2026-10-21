// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 next(); };
union V { s32 i; f32 f; };
struct P { u8 key[8]; s32 type; u32 flags; s32 n; V lo; V hi; };
extern "C" { void *memset(void *, int, u32); void fn_800FB064(R *, void *); void fn_800F6E88(void *, void *); s32 fn_800FB33C(R *); f32 fn_800FB2E0(R *); extern f32 lbl_803596E0[4]; }

void __dt__9C8010C958Fv(void);

/* vtable */
void *lbl_802E2820[3] = {
    0, 0, (void *)__dt__9C8010C958Fv
};

extern "C" s32 fn_8010C4D0(P *p, R *r) {
    u8 key[16];
    u32 k;
    if (p->flags & 1) {
        memset(p, 0, 8);
        p->type = 13;
        p->flags = 0;
        p->n = 1;
        p->lo.i = 0x80000000;
        p->hi.i = 0x7FFFFFFF;
        p->lo.f = -lbl_803596E0[0];
        p->hi.f = lbl_803596E0[0];
    }
    if (r->next() != 58) {
        r->err(30);
    }
    while (r->next() != 5) {
    }
    while ((k = r->next()) != 6) {
        switch (k) {
        case 64:
            fn_800FB064(r, key);
            fn_800F6E88(p, key);
            break;
        case 65:
            switch (r->next()) {
            case 74: p->type = 1; break;
            case 76: p->type = 2; break;
            case 77: p->type = 3; break;
            case 78: p->type = 4; break;
            case 79: p->type = 5; break;
            case 80: p->type = 6; break;
            case 81: p->type = 7; break;
            case 82: p->type = 8; break;
            case 83: p->type = 9; break;
            case 84: p->type = 10; break;
            case 85: p->type = 11; break;
            case 86: p->type = 12; break;
            default: r->err(30); break;
            }
            break;
        case 67:
            p->n = fn_800FB33C(r);
            break;
        case 68:
            if (p->type == 3 || p->type == 9) {
                p->lo.f = fn_800FB2E0(r);
            } else {
                p->lo.i = fn_800FB33C(r);
            }
            break;
        case 69:
            if (p->type == 3 || p->type == 9) {
                p->hi.f = fn_800FB2E0(r);
            } else {
                p->hi.i = fn_800FB33C(r);
            }
            break;
        case 70:
        case 87:
        case 88:
        case 89:
            break;
        default:
            r->err(30);
            break;
        }
    }
    p->flags |= 1;
    return 0;
}

} /* extern "C" */
