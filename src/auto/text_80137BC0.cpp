// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct V3 { u8 d[16]; };
struct P { u8 c[3]; u8 pad3[4]; u8 a; u32 flags; u16 f2; u8 e; u8 f; u8 g; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void set(V3 *); };
extern "C" { void fn_800FAEF8(R *); u8 fn_800FB33C(R *); f32 fn_800FB2E0(R *); void fn_80101124(V3 *, R *); extern u16 lbl_80364188, lbl_80364194, lbl_80364196, lbl_80364198; extern f32 lbl_8036419C, lbl_80364190, lbl_803641A0; }

#define MODE(v) p->flags &= ~0x1C00; p->flags |= (v)

extern "C" void fn_80137BC0(P *p, R *r) {
    V3 v;
    u32 k;
    f32 x;
    fn_800FAEF8(r);
    p->flags = 0;
    p->f2 = 0;
    p->f = 1;
    p->g = 1;
    p->e = 0;
    while ((k = r->next()) != 6) {
        switch (k) {
        case 64: MODE(0x800); break;
        case 65: p->flags &= ~0x1C00; break;
        case 66: MODE(0x400); break;
        case 75: MODE(0xC00); break;
        case 76: MODE(0x1000); break;
        case 77: MODE(0x1400); break;
        case 83: MODE(0x1800); break;
        case 84: MODE(0x1C00); break;
        case 86: p->f2 |= lbl_80364196; MODE(0x1C00); break;
        case 67:
            {
                u8 n = fn_800FB33C(r);
                p->f = n;
                p->g = n;
            }
            if (p->f < 1) {
                p->f = 1;
                p->g = 1;
            }
            break;
        case 68: p->f2 |= lbl_80364194; break;
        case 85: p->flags |= 0x200; break;
        case 69: p->flags |= 1; break;
        case 70: p->flags |= 2; break;
        case 71: p->flags |= 0x20; break;
        case 72: p->flags |= 0x40; break;
        case 73: p->flags |= 0x80; break;
        case 74: p->e = fn_800FB33C(r); break;
        case 78: p->flags |= 0x10; break;
        case 79:
            fn_80101124(&v, r);
            p->set(&v);
            break;
        case 80:
            p->c[0] = fn_800FB33C(r);
            p->c[1] = fn_800FB33C(r);
            p->c[2] = fn_800FB33C(r);
            p->f2 |= lbl_80364188;
            break;
        case 81:
            x = fn_800FB2E0(r);
            if (x < lbl_8036419C) {
                x = lbl_8036419C;
            }
            if (x > lbl_80364190) {
                x = lbl_80364190;
            }
            p->a = lbl_803641A0 * x;
            break;
        case 82: p->f2 |= lbl_80364198; break;
        default:
            r->err(30);
            break;
        }
    }
}

} /* extern "C" */
