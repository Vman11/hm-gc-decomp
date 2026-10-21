// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801B3A48 { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };
struct S_801B3A48 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 n(); };
extern "C" { void fn_800FAEF8(void *); void fn_800FB064(void *, void *); void fn_800F87F0(void *, void *, void *); void fn_80121CE8(void *, void *); u32 fn_800FB33C(void *); f32 fn_800FB2E0(void *); void *fn_800F8274(void *, void *); void *fn_800F9398(void *, void *); void *fn_800F9788(void *, void *, void *); void fn_80190C98(void *); }

#pragma push
#pragma opt_loop_invariants off
void __dt__9C801B3E18Fv(void);
void fn_801B3CD4(void);
s32 fn_801B3A48(V_801B3A48 *p, u8 *q, S_801B3A48 *s, void *x);
void fn_801B36FC(void);
void fn_801A5180(void);
void fn_801A517C(void);
void fn_801B3D34(void);
void fn_801B3844(void);
void fn_801B3764(void);
void fn_801B36F4(void);
void fn_801A4F58(void);
void fn_801A4F54(void);
void fn_801B3A44(void);

/* vtable */
void *lbl_802EB040[15] = {
    0, 0, (void *)__dt__9C801B3E18Fv, (void *)fn_801B3CD4, (void *)fn_801B3A48, (void *)fn_801B36FC, (void *)fn_801A5180, (void *)fn_801A517C, (void *)fn_801B3D34, (void *)fn_801B3844, (void *)fn_801B3764, (void *)fn_801B36F4, (void *)fn_801A4F58, (void *)fn_801A4F54, (void *)fn_801B3A44
};

s32 fn_801B3A48(V_801B3A48 *p, u8 *q, S_801B3A48 *s, void *x) {
    char b8[8];
    u32 t;
    u8 *P = (u8 *)p;
    if (*(s32 *)(P + 4) != 0) {
        p->m();
    }
    *(void **)p = q;
    *(void **)(P + 8) = *(void **)(q + 16);
    fn_800FAEF8(s);
    while ((t = s->n()) != 6) {
        switch (t) {
        case 57:
            fn_800FB064(s, P + 124);
            fn_800F87F0(x, P + 124, p);
            break;
        case 58:
            fn_80121CE8(P + 20, s);
            break;
        case 83: {
            u8 *o;
            void *r;
            fn_800FB064(s, P + 56);
            fn_800FB064(s, b8);
            o = *(u8 **)(q + 12);
            if (b8 == 0 || b8[0] == 0) {
                r = fn_800F9398(o + 144, P + 56);
            } else {
                r = fn_800F9788(o + 168, b8, P + 56);
            }
            *(void **)(P + 112) = r;
            break;
        }
        case 62:
            fn_800FB064(s, P + 132);
            fn_800FB064(s, P + 140);
            *(void **)(P + 116) = fn_800F8274(fn_800F9398(*(u8 **)(P + 8) + 732, P + 132), P + 140);
            break;
        case 64:
            *(f32 *)(P + 64) = fn_800FB2E0(s);
            *(f32 *)(P + 68) = fn_800FB2E0(s);
            *(f32 *)(P + 72) = fn_800FB2E0(s);
            *(s32 *)(P + 104) = 1;
            break;
        case 65:
            *(f32 *)(P + 76) = fn_800FB2E0(s);
            *(f32 *)(P + 80) = fn_800FB2E0(s);
            *(f32 *)(P + 84) = fn_800FB2E0(s);
            *(f32 *)(P + 88) = fn_800FB2E0(s);
            *(f32 *)(P + 92) = fn_800FB2E0(s);
            *(f32 *)(P + 96) = fn_800FB2E0(s);
            *(s32 *)(P + 100) = 1;
            *(s32 *)(P + 108) = 1;
            break;
        case 66:
            *(f32 *)(P + 76) = fn_800FB2E0(s);
            *(f32 *)(P + 80) = fn_800FB2E0(s);
            *(f32 *)(P + 84) = fn_800FB2E0(s);
            *(f32 *)(P + 88) = fn_800FB2E0(s);
            *(f32 *)(P + 92) = fn_800FB2E0(s);
            *(f32 *)(P + 96) = fn_800FB2E0(s);
            *(s32 *)(P + 108) = 1;
            break;
        case 63:
            *(s32 *)(P + 120) = 1;
            break;
        default:
            s->err(30);
            break;
        }
    }
    *(s32 *)(P + 4) = 1;
    return 0;
}
#pragma pop

} /* extern "C" */
