// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct S8019D5CC { f32 x, y, z, r; } S8019D5CC;
} /* extern "C" */
struct B08019D5CC {
    u32 f0;
    u8 pad4[20];
    virtual void v0();
    virtual s32 v1(void *a);
};
struct B8019D5CC : B08019D5CC {
    f32 x, y, z, r;
};
extern "C" {
extern f32 lbl_80330228[9];
extern f32 lbl_8033024C[3];
extern void *lbl_8035AD88;
extern s32 lbl_8035AD80;
extern s32 lbl_8035AD84;
void fn_80100CF4(S8019D5CC *s);
void fn_8017BCCC(B8019D5CC *a, B8019D5CC *b);
f32 fn_8010155C(S8019D5CC *s, f32 *p);
void fn_8017B938(void *o, B8019D5CC *a, B8019D5CC *b, s32 c, s32 d);

s32 fn_8019D5CC(B8019D5CC *a, B8019D5CC *b) {
    if (b->f0 == 1) {
        S8019D5CC s;
        f32 rr;
        S8019D5CC d;
        S8019D5CC m;
        fn_80100CF4(&s);
        fn_8017BCCC(a, b);
        d.x = lbl_8033024C[0] - a->x; d.y = lbl_8033024C[1] - a->y; d.z = lbl_8033024C[2] - a->z;
        m.x = b->x * lbl_80330228[0]; m.y = b->x * lbl_80330228[1]; m.z = b->x * lbl_80330228[2];
        m.x += b->y * lbl_80330228[3]; m.y += b->y * lbl_80330228[4]; m.z += b->y * lbl_80330228[5];
        m.x += b->z * lbl_80330228[6]; m.y += b->z * lbl_80330228[7]; m.z += b->z * lbl_80330228[8];
        s.x = d.x + m.x;
        s.y = d.y + m.y;
        s.z = d.z + m.z;
        s.r = b->r;
        rr = a->r + b->r;
        rr = rr * rr;
        if (fn_8010155C(&s, &a->x) <= rr) {
            if (lbl_8035AD88) fn_8017B938(lbl_8035AD88, a, b, lbl_8035AD80, lbl_8035AD84);
            return 1;
        }
        return 0;
    }
    if (b->f0 == 0) return b->v1(a);
    return b->f0 == 4 ? 1 : 0;
}

} /* extern "C" */
