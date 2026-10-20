// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A_80216738 { u8 pad[0x44]; virtual void p0(); virtual void p1(); virtual void m(); };
struct B_80216738 { u8 pad[0x10]; virtual void p0(); virtual void m(); };
struct W_80216738 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m6(void *); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m10(void *); };
struct C_80216738 { u8 pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual W_80216738 *m(); };
struct D_80216738 { u8 pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
extern "C" void __dla__FPv(void *);

void fn_80216738(u8 *p) {
    if (*(u32 *)(p + 80) & 1) {
        if (*(void **)(p + 92) != NULL) {
            (*(A_80216738 **)(p + 88))->m();
            (*(B_80216738 **)(p + 92))->m();
            (*(C_80216738 **)(p + 4))->m()->m10(*(void **)(p + 92));
        }
        if (*(void **)p != NULL) {
            (*(D_80216738 **)(p + 24))->m();
            (*(C_80216738 **)(p + 4))->m()->m6(*(void **)p);
        }
        if (*(u32 *)(p + 80) & 4) {
            __dla__FPv(*(void **)(p + 44));
            *(s32 *)(p + 44) = 0;
        }
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 80) = 0;
    *(s32 *)(p + 84) = 0;
    *(s32 *)(p + 88) = 0;
    *(s32 *)(p + 92) = 0;
    }
}

} /* extern "C" */
