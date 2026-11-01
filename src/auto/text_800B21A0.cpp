// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct A {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void s13(V3 *, V3 *, int, int, int);
    virtual void s14(int, V3 *, V3 *, V3 *, int);
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void s24();
    u8 pad4[336];
    f32 f340;
};
struct P {
    u8 pad0[96];
    s32 st;
    u8 pad100[124];
    A *a224;
    u8 pad228[60];
    s32 *s288;
    f32 *f292;
    u8 pad296[24];
    f32 *f320;
    s32 *s324;
    u8 pad328[12];
    f32 *f340;
    f32 *f344;
    f32 *f348;
    u8 pad352[24];
    f32 f376;
    s32 i380;
    f32 f384;
    s32 i388;
};
extern f32 lbl_80362F80, lbl_80362F88, lbl_80362FA0, lbl_80362FA4;
s32 fn_800B1D58(P *);
void fn_802490E0(P *, int, f32);
void fn_80240F24(P *, int, int);
void fn_802494A4(P *, int);
void fn_8010117C(V3 *, f32);
void fn_80101820(V3 *);
void fn_8023FE08(P *, f32);
int rand(void);

void fn_800B21A0(P *p, f32 dt) {
    s32 st = p->st;
    if (st == 1 || (st == 2 && p->f384 >= *p->f348)) {
        if (fn_800B1D58(p)) {
            p->i388 = 1;
            p->f384 = lbl_80362F88;
            f32 h = p->a224->f340;
            if (p->i380 && h > lbl_80362F88) {
                p->i380 = 0;
                {
                    s32 i = rand() % 10000u;
                    f32 r = lbl_80362F80 * (f32)i;
                    f32 d = *p->f344 - *p->f340;
                    r = d * r + *p->f340;
                    fn_802490E0(p, 0, r);
                }
                fn_80240F24(p, 0, 3);
            }
            fn_802494A4(p, 2);
            goto end;
        }
    }
    st = p->st;
    if (st == 1 && *p->s324) {
        if (p->a224->f340 > lbl_80362F88) fn_802494A4(p, 2);
    } else if (st == 2) {
        V3 w, u, v, t;
        p->a224->s13(0, &v, 0, 0, 0);
        { f32 m = lbl_80362FA0 * *p->f320; fn_8010117C(&v, p->f376 * (m * dt)); }
        {
        f32 ux, uy, vz, vy, vx, o;
        ux = *(f32 *)&lbl_80362F88;
        uy = lbl_80362F88;
        vy = v.y;
        *(volatile f32 *)&u.x = ux;
        vz = v.z;
        *(volatile f32 *)&u.y = uy;
        vx = *(volatile f32 *)&v.x;
        o = lbl_80362FA4;
        u.z = o;
        w.x = vy * o - vz * uy;
        w.y = vz * ux - vx * o;
        w.z = vx * uy - vy * ux;
        }
        fn_80101820(&w);
        u.x = w.y * v.z - w.z * v.y;
        u.y = w.z * v.x - w.x * v.z;
        u.z = w.x * v.y - w.y * v.x;
        fn_80101820(&u);
        p->a224->s14(0, &v, &u, &w, 0);
        if (*p->s288) {

            p->a224->s13(&t, 0, 0, 0, 0);
            if (t.z <= *p->f292) fn_802494A4(p, 4);
        }
    } else if (st == 5) {
        p->a224->s24();
    }
end:
    fn_8023FE08(p, dt);
}

} /* extern "C" */
