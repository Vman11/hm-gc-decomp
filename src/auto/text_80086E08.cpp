// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct V3_86 { f32 x, y, z; };
struct A86 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(f32); virtual void v13(int, V3_86 *, V3_86 *, V3_86 *, int);
    u8 p4[0x10]; V3_86 f20; V3_86 f32_; V3_86 f44; u8 p56[0xC]; V3_86 f68; u8 p80[0xC8]; V3_86 f280; u8 p292[0x68];
    u32 f396; u8 p400[0xE4]; f32 *f628; u8 p632[0xC]; V3_86 f644;
};
extern "C" {
extern f32 lbl_8035FE50;
extern f64 lbl_8035FE58;
extern u8 lbl_8035FE60;
extern f32 lbl_8035FE68;
extern f32 lbl_8035FE6C;
void fn_8005D9EC(A86 *, A86 *, int);
f64 fn_800EFDA4(f64);
void fn_80236F28(A86 *, void *, int, int, int, int, f32, f32);
void fn_80086E08(A86 *p, A86 *q) {
    f32 s;
    fn_8005D9EC(p, q, 0);
    q->v13(0, &p->f20, &p->f44, &p->f32_, 0);
    p->f280.x = p->f20.x;
    p->f280.y = p->f20.y;
    p->f280.z = p->f20.z;
    if (p->f628) s = *p->f628; else s = lbl_8035FE50;
    p->f280.x *= s;
    p->f280.y *= s;
    p->f280.z *= s;
    if (q->f396) p->f396 = q->f396;
    else fn_80236F28(p, &lbl_8035FE60, 0, 1, 0, 0, lbl_8035FE68, fn_800EFDA4(lbl_8035FE58));
    p->f644.x = p->f68.x;
    p->f644.y = p->f68.y;
    p->f644.z = p->f68.z;
    p->v12(lbl_8035FE6C);
}
}
extern "C" {

} /* extern "C" */
