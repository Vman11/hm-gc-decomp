// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct RCD0 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct ECD0 { u32 f0; u32 f4; u32 f8; u32 fc; u32 f10; u32 f14; u32 f18; };
struct VCD0 { f32 a, b, c, d; };
struct PCD0 {
    u32 f0;
    ECD0 *e;
    u32 n;
    VCD0 *v0;
    VCD0 *v1;
    u32 *u14;
    u32 *u18;
    u32 *u1c;
    u32 pad20[2];
    u32 f28;
    u32 pad2c;
    u32 f30;
    virtual void p0();
    virtual void p1();
    virtual void alloc(u32);
};
u32 fn_800FADA8(RCD0 *);
void fn_800FB064(RCD0 *, void *);
void fn_800FAEA0(RCD0 *);
void fn_800FAEF8(RCD0 *);
u32 fn_800FB33C(RCD0 *);
f32 fn_800FB2E0(RCD0 *);
u32 fn_801AAA08(u32, int, void *, void *);
u32 fn_801CCF18(PCD0 *, u32);

void fn_801CD014(PCD0 *p, u32 ctx, RCD0 *r) {
    char b[8];
    char a[8];
    u32 k;
    u32 i;
    u32 t;

    fn_800FAEF8(r);
    while ((k = r->next()) != 6) {
        switch ((s32)k) {
        case 0x3c:
            p->f0 = 1;
            break;
        case 0x3b:
            p->alloc(fn_800FADA8(r));
            for (i = 0; i < p->n; i++) {
                t = r->next();
                fn_800FB064(r, a);
                fn_800FB064(r, b);
                switch ((s32)t) {
                case 0x50: p->e[i].f0 = fn_801AAA08(ctx, 0, a, b); break;
                case 0x51: p->e[i].f0 = fn_801AAA08(ctx, 3, a, b); break;
                case 0x52: p->e[i].f0 = fn_801AAA08(ctx, 1, a, b); break;
                case 0x53: p->e[i].f0 = fn_801AAA08(ctx, 2, a, b); break;
                case 0x54: p->e[i].f0 = fn_801AAA08(ctx, 4, a, b); break;
                case 0x55: p->e[i].f0 = fn_801AAA08(ctx, 5, a, b); break;
                case 0x56: p->e[i].f0 = fn_801AAA08(ctx, 6, a, b); break;
                case 0x57: p->e[i].f0 = fn_801AAA08(ctx, 7, a, b); break;
                case 0x58: p->e[i].f0 = fn_801AAA08(ctx, 8, a, b); break;
                case 0x59: p->e[i].f0 = fn_801AAA08(ctx, 9, a, b); break;
                case 0x5a: p->e[i].f0 = fn_801AAA08(ctx, 10, a, b); break;
                case 0x5b: p->e[i].f0 = fn_801AAA08(ctx, 11, a, b); break;
                case 0x84: p->f28 = 1; break;
                default: r->err(0x1e); break;
                }
                fn_800FAEF8(r);
                while ((t = r->next()) != 6) {
                    switch ((s32)t) {
                    case 0x5d:
                        p->v0[i].a = fn_800FB2E0(r);
                        p->v0[i].b = fn_800FB2E0(r);
                        p->v0[i].c = fn_800FB2E0(r);
                        p->v0[i].d = fn_800FB2E0(r);
                        break;
                    case 0x5e:
                        p->u14[i] = 1;
                        p->v1[i].a = fn_800FB2E0(r);
                        p->v1[i].b = fn_800FB2E0(r);
                        p->v1[i].c = fn_800FB2E0(r);
                        p->v1[i].d = fn_800FB2E0(r);
                        break;
                    case 0x4d:
                        p->u18[i] = (fn_800FB33C(r) << 16) | (p->u18[i] & 0xffff);
                        break;
                    case 0x85:
                        switch ((s32)r->next()) {
                        case 0x86: p->e[i].fc = 1; break;
                        case 0x87: p->e[i].f10 = 1; break;
                        case 0x88: p->e[i].f14 = 1; break;
                        case 0x89: p->e[i].f18 = 1; break;
                        default: r->err(0x1e); break;
                        }
                        break;
                    case 0x5f: case 0x60: case 0x61: case 0x62: case 0x63: case 0x64: case 0x65: case 0x66: case 0x67: case 0x68: case 0x69: case 0x6a: case 0x6b: case 0x6c: case 0x6e: case 0x6f: case 0x70: case 0x71: case 0x72: case 0x73: case 0x74: case 0x75: case 0x76: case 0x77: case 0x78: case 0x79:
                        if ((p->u18[i] & 0xffff) == 0x4000) {
                            p->u18[i] &= 0xffff0000;
                        }
                        p->u18[i] |= fn_801CCF18(p, t);
                        break;
                    case 0x7a: p->u1c[i] |= 1; break;
                    case 0x7b: p->u1c[i] |= 2; break;
                    case 0x7c: p->u1c[i] |= 4; break;
                    case 0x7d: p->u1c[i] |= 8; break;
                    case 0x7e: p->u1c[i] |= 0x10; break;
                    case 0x7f: p->u1c[i] |= 0x20; break;
                    case 0x80: p->u1c[i] |= 0x40; break;
                    case 0x81: p->u1c[i] |= 0x80; break;
                    case 0x82: p->u1c[i] |= 0x100; break;
                    case 0x46:
                        switch ((s32)r->next()) {
                        case 0x48: p->e[i].f4 = 2; break;
                        case 0x47: p->e[i].f8 = 2; break;
                        case 0x49: p->e[i].f8 = 0; break;
                        case 0x4a: p->e[i].f8 = 1; break;
                        case 0x4b: p->e[i].f4 = 0; break;
                        case 0x4c: p->e[i].f4 = 1; break;
                        default: r->err(0x1e); break;
                        }
                        break;
                    default: r->err(0x21); break;
                    case 0x6d:
                        break;
                    }
                }
            }
            fn_800FAEA0(r);
            break;
        }
    }
    p->f30 = 1;
}

} /* extern "C" */
