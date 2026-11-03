// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct A80262D38 { u8 pad[492]; virtual ~A80262D38(); };
struct B80262D38 { u8 pad[16]; virtual ~B80262D38(); };
struct V80262D38 {
    f32 x, y, z;
    void Zero();
    void Set(f32 a, f32 b, f32 c) { x = a; y = b; z = c; }
};
extern "C" {
}
inline void V80262D38::Zero() { x = 0.0f; y = 0.0f; z = 0.0f; }
extern "C" {
typedef struct {
    u32 f0;
    u32 f4;
    B80262D38 *f8;
    A80262D38 *f12;
    B80262D38 *f16;
    u32 f20;
} S80262D38;
extern void *volatile lbl_8035B478;
extern void *volatile lbl_8035B754;
void __dl__FPv(void *);
void fn_8023E138(void *, A80262D38 *);
static V80262D38 s0, s1, s2;
extern f32 lbl_80366AEC;
extern f32 lbl_80366AE8;
#pragma opt_propagation off
S80262D38 *fn_80262E58(S80262D38 *p, s16 f) {
    f32 one, zero;
    if (p) {
        lbl_8035B754 = 0;
        { void *g = lbl_8035B478; if (g && p->f12) fn_8023E138(g, p->f12); }
        if (p->f12) delete p->f12;
        if (p->f8) delete p->f8;
        if (p->f16) delete p->f16;
        p->f12 = 0; p->f8 = 0; p->f4 = 0; p->f16 = 0; p->f20 = 0;
        zero = lbl_80366AE8;
        ((volatile V80262D38 *)&s0)->x = zero; ((volatile V80262D38 *)&s0)->y = zero; ((volatile V80262D38 *)&s0)->z = zero;
        one = *(volatile f32 *)&lbl_80366AEC;
        s0.x = one;
        s1.x = zero; s1.y = zero; s1.z = zero; s1.y = one;
        s2.x = zero; s2.y = zero; s2.z = zero; s2.z = one;
        if (f > 0) __dl__FPv(p);
    }
    return p;
}
#pragma opt_propagation reset

} /* extern "C" */
