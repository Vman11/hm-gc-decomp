// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct Vec80240054 {
    f32 x, y, z;
} Vec80240054;
} /* extern "C" */
struct V80240054 {
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
    virtual void v13(s32, Vec80240054 *, Vec80240054 *, void *, void *);
};
extern "C" {
typedef struct Q80240054 {
    u8 pad[316];
    f32 f316, f320, f324;
    u8 pad2[116];
    f32 *f444;
} Q80240054;
typedef struct S80240054 {
    u8 pad[224];
    Q80240054 *f224;
    V80240054 *f228;
} S80240054;
extern f32 lbl_80366150;
extern f32 lbl_8036613C;
extern f32 lbl_80366154;
void fn_80100F24(Vec80240054 *, Vec80240054 *);
void fn_80101820(Vec80240054 *);

void fn_80240054(S80240054 *p) {
    Vec80240054 a;
    Vec80240054 b;
    f32 s;
    Q80240054 *q;
    if (p->f228 != 0) {
        p->f228->v13(0, &a, 0, 0, 0);
        ((V80240054 *)p->f224)->v13(0, 0, &b, 0, 0);
        fn_80100F24(&a, &b);
        fn_80101820(&a);
        a.x *= lbl_80366150;
        a.y *= lbl_80366150;
        a.z *= lbl_80366150;
        s = lbl_80366154 / (p->f224->f444 ? *p->f224->f444 : lbl_8036613C);
        a.x += s * b.x;
        a.y += s * b.y;
        a.z += s * b.z;
        q = p->f224;
        q->f316 = a.x;
        q->f320 = a.y;
        q->f324 = a.z;
    }
}

} /* extern "C" */
