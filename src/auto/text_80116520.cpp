#include "common.h"

extern "C" {

struct R80116520 { u8 pad[0x14]; f32 min; f32 max; const f32 &GetMin() { return min; } const f32 &GetMax() { return max; } };
struct V80116520 { R80116520 *range; u8 pad[4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(f32 *, s32, s32); };
V80116520 **fn_80110444(u32, u32, s32);

void fn_80116520(f32 v, u32 a, u32 b) {
    V80116520 **pp;
    V80116520 *p;

    pp = fn_80110444(a, b, 0);
    if (pp != 0 && (p = *pp) != 0) {
        if (v > p->range->GetMax()) {
            v = p->range->GetMax();
        }
        if (v < p->range->GetMin()) {
            v = p->range->GetMin();
        }
        p->m(&v, 0, 1);
    }
}

} /* extern "C" */
