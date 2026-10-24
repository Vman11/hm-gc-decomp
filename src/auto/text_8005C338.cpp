// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(int, int, A *);
    u8 pad4[276];
    f32 x, y, z;
    u8 pad292[152];
    f32 *scale;
    u8 pad448[76];
    void *f524;
    u8 pad528[12];
    f32 *f540;
    u8 pad544[8];
    u32 f552;
    u8 pad556[8];
    A *f564;
    int f568;
    u8 pad572[52];
    A *f624;
};
struct B { char buf[12]; };
extern f32 lbl_8035E438;
extern f64 lbl_8035E440, lbl_8035E448;
extern char lbl_8035E450[5], lbl_8035E458[5], lbl_80297108[];
void fn_800F6E88(B *, const char *);
void fn_80241DD0(void *, const char *, A *, int, void *, int);
struct V { f32 x, y, z; };
static inline f32 sc(A *a) { return a->scale ? *a->scale : lbl_8035E438; }
static inline void gp(A *a, V *o) { f32 s; o->x = a->x; o->y = a->y; o->z = a->z; s = sc(a); o->x *= s; o->y *= s; o->z *= s; }
static inline void gq(A *a, V *o) { f32 s = sc(a); o->x = a->x * s; o->y = a->y * s; o->z = a->z * s; }
static inline f32 Sq(f32 x) {
    if (x > lbl_8035E438) {
        const f64 _half = lbl_8035E440;
        const f64 _three = lbl_8035E448;
        volatile f32 y;
        f64 g = __frsqrte((f64)x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        y = x * g;
        return y;
    }
    return x;
}
void fn_8005C338(A *a, A *b, u8 *c) {
    if (b && (b->f552 & 0x20)) return;
    if (b && (b->f552 & 0x200)) return;
    if (b && a->f624 == b) return;
    a->v37(0, 0, b);
    if (b && a->f524 && a->f564 != b) {
        V pb, pa, dv;
        gp(b, &pb);
        gq(a, &pa);
        dv.x = pb.x - pa.x; dv.y = pb.y - pa.y; dv.z = pb.z - pa.z;
        f32 d = Sq(dv.x * dv.x + dv.y * dv.y + dv.z * dv.z);
        B n;
        if (d > *a->f540) fn_800F6E88(&n, lbl_8035E450);
        else fn_800F6E88(&n, lbl_8035E458);
        fn_80241DD0(a->f524, n.buf, b, 0, 0, 0);
        fn_80241DD0(a->f524, lbl_80297108, b, 0, c + 10624, 0);
        a->f568 = 0;
    }
}

} /* extern "C" */
