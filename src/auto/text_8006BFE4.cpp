// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct Vec8006BFE4 {
    f32 x, y, z;
} Vec8006BFE4;
} /* extern "C" */
struct V8006BFE4 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13(Vec8006BFE4 *, Vec8006BFE4 *, Vec8006BFE4 *, void *, void *);
};
extern "C" {
typedef struct S8006BFE4 {
    u8 pad[224];
    V8006BFE4 *f224;
    V8006BFE4 *f228;
    u8 pad2[48];
    void *f280;
    u8 pad3[88];
    f32 f372;
    u8 pad4[8];
    V8006BFE4 *f384;
    u8 pad5[148];
    f32 *f536;
} S8006BFE4;
extern f32 lbl_8035F0C0;
extern volatile f64 lbl_8035F230;
extern f32 lbl_8035F238;
extern f32 lbl_8035F23C;
extern f32 lbl_8035F240;
void fn_80072AC8(void *, Vec8006BFE4 *);
f32 fn_80101590(Vec8006BFE4 *, Vec8006BFE4 *);
f64 fn_800F045C(f64);

static inline f32 sacos(f32 x) {
    if ((f32)__fabs(x) <= lbl_8035F230) return (f32)fn_800F045C(x);
    if (x > lbl_8035F0C0) return lbl_8035F0C0;
    return lbl_8035F238;
}

void fn_8006BFE4(S8006BFE4 *p) {
    Vec8006BFE4 v32;
    Vec8006BFE4 v20;
    Vec8006BFE4 v8;
    Vec8006BFE4 d;
    f32 dist;
    f32 ang;
    fn_80072AC8(p->f280, &v32);
    p->f228->v13(&v20, 0, 0, 0, 0);
    dist = fn_80101590(&v32, &v20);
    if (dist < p->f372) {
        p->f224->v13(0, &v8, 0, 0, 0);
        d.z = lbl_8035F0C0;
        *(volatile f32 *)&v8.z = d.z;
        d.x = v20.x - v32.x;
        d.y = v20.y - v32.y;
        ang = sacos(v8.x * d.x + v8.y * d.y + d.z * d.z);
        if (ang < lbl_8035F23C * (*p->f536 * lbl_8035F240)) {
            p->f372 = dist;
            p->f384 = p->f228;
        }
    }
}

} /* extern "C" */
