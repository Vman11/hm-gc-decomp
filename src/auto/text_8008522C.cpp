// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Vec3 { f32 x, y, z; };
struct O {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void s12(f32);
    virtual void s13(void *, Vec3 *, Vec3 *, Vec3 *, int);
    virtual void s14(void *, Vec3 *, Vec3 *, Vec3 *, int);
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void s40(int, int, int, int, int, f32, f32);
    u8 pad4[276];
    Vec3 v280;
    u8 pad292[48];
    f32 f340;
    u8 pad344[564];
    f32 *p908;
    u8 pad912[8];
    s32 i920;
    f32 f924;
    u8 b928[4];
};
extern O *lbl_8035A1A8;
extern u32 lbl_8035B374;
extern f32 lbl_8035FDB0, lbl_8035FDB4, lbl_8035FDB8, lbl_8035FDBC;
extern char lbl_80298DD8[];
void fn_8005D9EC(O *, int, int, int, int, int, f32, f32);
O *fn_80233550(u32, char *);
void fn_80101414(Vec3 *, Vec3 *, f32);
void fn_80101820(Vec3 *);
int rand(void);

void fn_8008522C(O *p, int a, int b, int c, int d, int e, f32 x, f32 y) {
    Vec3 v56, s, v32, v20, t;
    O *q;
    f32 k;
    fn_8005D9EC(p, a, b, c, d, e, x, y);
    p->s13(p->b928, &v56, &v32, &v20, 0);
    p->f924 = (rand() & 1) ? lbl_8035FDB0 : lbl_8035FDB4;
    if (p->i920 == 0) {
        q = fn_80233550(lbl_8035B374, lbl_80298DD8);
        k = lbl_8035FDB8 * *p->p908;
        if (q) {
            s = v56;
            t = v20;
            fn_80101414(&s, &v32, -k);
            fn_80101820(&s);
            fn_80101414(&t, &v32, -k);
            fn_80101820(&t);
            q->i920 = 1;
            q->s40(a, b, c, d, e, x, y);
            q->s14(0, &s, &v32, &t, 0);
            {
                f32 m = p->f340;
                f32 sx = s.x * m, sy = s.y * m, sz = s.z * m;
                q->v280.x = sx;
                q->v280.y = sy;
                q->v280.z = sz;
                q->f340 = m;
            }
        }
        q = fn_80233550(lbl_8035B374, lbl_80298DD8);
        if (q) {
            s = v56;
            t = v20;
            fn_80101414(&s, &v32, k);
            fn_80101820(&s);
            fn_80101414(&t, &v32, k);
            fn_80101820(&t);
            q->i920 = 2;
            q->s40(a, b, c, d, e, x, y);
            q->s14(0, &s, &v32, &t, 0);
            {
                f32 m = p->f340;
                f32 sx = s.x * m, sy = s.y * m, sz = s.z * m;
                q->v280.x = sx;
                q->v280.y = sy;
                q->v280.z = sz;
                q->f340 = m;
            }
        }
        lbl_8035A1A8 = p;
    }
    p->s12(lbl_8035FDBC);
}

} /* extern "C" */
