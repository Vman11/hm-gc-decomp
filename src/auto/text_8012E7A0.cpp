// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct P { u8 pad[8]; u32 f8; u32 fC; u8 pad10[4]; u32 *max; u16 idx; u16 pad1A; u8 sub[0x18]; u8 r, g, b; };
extern "C" { s32 fn_800FB33C(R *); void fn_80121CE8(void *, R *); extern u32 lbl_80363EE8, lbl_80363F0C, lbl_80363F10, lbl_80363F14, lbl_80363F18, lbl_80363F1C; }

extern "C" void fn_8012E7A0(P *p, void *x, R *r, u32 k) {
    switch (k) {
    case 59:
        p->idx = fn_800FB33C(r);
        if (p->idx >= *p->max) {
            r->err(35);
        }
        break;
    case 60:
        p->r = fn_800FB33C(r);
        p->g = fn_800FB33C(r);
        p->b = fn_800FB33C(r);
        p->f8 |= lbl_80363EE8;
        break;
    case 61:
        p->f8 |= lbl_80363F0C;
        fn_80121CE8(p->sub, r);
        break;
    case 62: p->fC &= ~0x1C00; p->fC |= 0x800; break;
    case 63: p->fC &= ~0x1C00; break;
    case 64: p->fC &= ~0x1C00; p->fC |= 0x400; break;
    case 65: p->fC &= ~0x1C00; p->fC |= 0xC00; break;
    case 66: p->fC &= ~0x1C00; p->fC |= 0x1000; break;
    case 67: p->fC &= ~0x1C00; p->fC |= 0x1400; break;
    case 69: p->fC &= ~0x1C00; p->fC |= 0x1800; break;
    case 70: p->fC &= ~0x1C00; p->fC |= 0x1C00; break;
    case 72: p->f8 |= lbl_80363F10; p->fC &= ~0x1C00; p->fC |= 0x1C00; break;
    case 68: p->f8 |= lbl_80363F14; break;
    case 71: p->fC |= 0x200; break;
    case 73: p->f8 |= lbl_80363F18; break;
    case 74: p->f8 |= lbl_80363F1C; break;
    default:
        r->err(30);
        break;
    }
}

} /* extern "C" */
