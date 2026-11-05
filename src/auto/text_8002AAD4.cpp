// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { f32 x, y, z; } Vec3;
typedef void (*FnA)(void *, Vec3 *, Vec3 *, Vec3 *);
typedef void (*FnB)(void *, Vec3 *);
typedef struct { void *f[80]; } FT;
extern FT lbl_803286D0;
extern Vec3 lbl_80357E90;
extern f32 lbl_80359F58;
extern s8 lbl_80359F5C;
extern const f32 lbl_8035B960;
extern u32 lbl_8035B964;
struct O { u8 pad[16]; void *f10; u8 pad2[12]; u32 f20; };
void fn_801012C0(Vec3 *, Vec3 *, Vec3 *, f32);
void fn_80101820(Vec3 *);
static inline void Cr(Vec3 *o, const Vec3 *A, const Vec3 *B) { o->x = A->y * B->z - A->z * B->y; o->y = A->z * B->x - A->x * B->z; o->z = A->x * B->y - A->y * B->x; }
void fn_8002AAD4(void *self, O *o, Vec3 *t, f32 ang) {
    Vec3 a, d, b, up, f, r, e;
    if (lbl_80359F5C == 0) { *(volatile f32 *)&lbl_80359F58 = lbl_8035B960; *(volatile s8 *)&lbl_80359F5C = 1; }
    ((FnB)lbl_803286D0.f[76])(o->f10, &a);
    ((FnA)lbl_803286D0.f[77])(o->f10, &b, &up, &d);
    e = a;
    e.x = e.x - t->x; e.y = e.y - t->y; e.z = e.z - t->z;
    fn_801012C0(&r, &lbl_80357E90, &e, ang);
    fn_80101820(&r);
    r.x *= lbl_80359F58; r.y *= lbl_80359F58; r.z *= lbl_80359F58;
    r.x = r.x + t->x; r.y = r.y + t->y; r.z = r.z + t->z;
    f.x = t->x - r.x; f.y = t->y - r.y; f.z = t->z - r.z;
    fn_80101820(&f);
    up = lbl_80357E90;
    d = f;
    up.x = -up.x; up.y = -up.y; up.z = -up.z;
    Cr(&b, &up, &d);
    fn_80101820(&b);
    Cr(&up, &d, &b);
    fn_80101820(&up);
    ((FnB)lbl_803286D0.f[3])(o->f10, &r);
    o->f20 |= lbl_8035B964;
    ((FnA)lbl_803286D0.f[7])(o->f10, &b, &up, &d);
    o->f20 |= lbl_8035B964;
}

} /* extern "C" */
