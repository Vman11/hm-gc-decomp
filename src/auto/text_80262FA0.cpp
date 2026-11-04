/* Functions from 0x80262FA0 to 0x8026300C, found by decomp-toolkit. */
#include "common.h"

extern "C" {

static inline void clear_row(f32 *p) {
    extern f32 lbl_80366AE8;
    p[0] = lbl_80366AE8;
    p[1] = lbl_80366AE8;
    p[2] = lbl_80366AE8;
}

/* QV=2.0p1 */
extern void *lbl_8035B754;
extern volatile f32 lbl_80366AE8;
extern volatile f32 lbl_80366AEC;
} /* extern "C" */
struct Vec_C {
    f32 x, y, z;
    void Set(f32 a, f32 b, f32 c) { x = a; y = b; z = c; }
    void VSet(f32 a, f32 b, f32 c) volatile { x = a; y = b; z = c; }
};
extern "C" {
Vec_C lbl_80357E78, lbl_80357E84, lbl_80357E90;
void __ct__9C80262FA0Fv(u8 *p) {
    Vec_C *a = &lbl_80357E78, *b = &lbl_80357E84, *c = &lbl_80357E90;
    f32 one, zero;
    lbl_8035B754 = p;
    *(s32 *)(p + 0xC) = 0;
    *(s32 *)(p + 0x8) = 0;
    *(s32 *)(p + 0x4) = 0;
    *(s32 *)(p + 0x10) = 0;
    *(s32 *)(p + 0x14) = 0;
    zero = lbl_80366AE8;
    ((volatile Vec_C *)a)->VSet(zero, zero, zero);
    one = lbl_80366AEC;
    a->x = one;
    b->Set(zero, zero, zero);
    b->y = one;
    c->Set(zero, zero, zero);
    c->z = one;
}

} /* extern "C" */
