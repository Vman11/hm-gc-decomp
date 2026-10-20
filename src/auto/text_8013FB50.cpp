// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A_8013F838 { u8 pad[0x14]; virtual void p0(); virtual void m(); };
struct C_8013F838 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void m(void *); };
struct B_8013F838 { u8 pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual C_8013F838 *g(); };
extern "C" { void *memset(void *, s32, u32); void __dl__FPv(void *); }

void *__dt__9C8013FC44Fv(u8 *p, s16 f) {
    if (p != NULL) {
    if (*(void **)(p + 4) != NULL) {
        (*(A_8013F838 **)(p + 8))->m();
        (*(B_8013F838 **)p)->g()->m(*(void **)(p + 4));
    }
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    memset(p + 16, 0, 112);
    *(s32 *)(p + 128) = 0;
    *(s32 *)(p + 132) = 0;
    *(s32 *)(p + 136) = 0;
    *(s32 *)(p + 140) = 0;
    *(s32 *)(p + 144) = 0;
    *(s32 *)(p + 148) = 0;
    *(s32 *)(p + 152) = 0;
    *(s32 *)(p + 156) = 0;
    *(s32 *)(p + 160) = 0;
    *(s32 *)(p + 164) = 0;
    *(s32 *)(p + 168) = 0;
    *(s32 *)(p + 172) = 0;
    *(s32 *)(p + 176) = 0;
    *(s32 *)(p + 180) = 0;
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
