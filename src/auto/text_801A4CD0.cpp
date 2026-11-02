// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct E_801A4CD0 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m4(int); virtual s32 m5(); };
struct P_801A4CD0 { int f0; int f4; u8 pad[8]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); u8 f20[4]; };
extern "C" { void fn_800FB064(void *, void *); void fn_800F87F0(void *, void *, void *); void fn_800FAEF8(void *); void fn_80121CE8(void *, void *); }

int fn_801A4CD0(P_801A4CD0 *p, int a, E_801A4CD0 *q, void *r) {
    u8 b16[16];
    u8 b8[8];
    s32 k;
    if (p->f4) p->v6();
    p->f0 = a;
    fn_800FAEF8(q);
    while ((u32)(k = q->m5()) != 6) {
        switch (k) {
        case 57:
            fn_800FB064(q, b16);
            fn_800F87F0(r, b16, p);
            break;
        case 80:
            fn_800FB064(q, b16);
            fn_800FB064(q, b8);
            break;
        case 58:
            fn_80121CE8(p->f20, q);
            break;
        default:
            q->m4(30);
            break;
        }
    }
    p->f4 = 1;
    return 0;
}

} /* extern "C" */
