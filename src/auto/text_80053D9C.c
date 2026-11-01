// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { float x, y, z; } Vec3;
typedef void (*FnA)(void *, Vec3 *, Vec3 *, Vec3 *);
typedef void (*FnB)(void *, Vec3 *);
typedef struct { void *f[16]; } FT;
extern FT lbl_803286D0;
extern Vec3 lbl_80357E90;
extern unsigned int lbl_8035E004;
struct O { unsigned char pad[16]; void *f10; unsigned char pad2[12]; unsigned int f20; };
struct M { unsigned char pad[48]; struct O *f30; unsigned char pad2[68]; void *f78; };
struct PB { unsigned char pad[344]; struct M *f158; void *f15c; void *f160; };
void fn_80107244(void *, Vec3 *);
float fn_80101664(Vec3 *);
void fn_80101820(Vec3 *);
void fn_80190C98(struct M *);
void fn_80107F3C(void *, Vec3 *);
static inline void Cr(Vec3 *o, const Vec3 *A, const Vec3 *B) { o->x = A->y * B->z - A->z * B->y; o->y = A->z * B->x - A->x * B->z; o->z = A->x * B->y - A->y * B->x; }
void fn_80053D9C(struct PB *p, Vec3 *t, float s) {
    if (p->f158) {
        Vec3 pos, dir, side, u, sc;
        float len;
        struct O *o;
        struct M *m;
        fn_80107244(p->f160, &pos);
        { float x, y, z; x = t->x - pos.x; y = t->y - pos.y; z = t->z - pos.z; dir.z = z; dir.y = y; dir.x = x; }
        len = fn_80101664(&dir);
        side.x = dir.y * lbl_80357E90.z - dir.z * lbl_80357E90.y;
        side.y = dir.z * lbl_80357E90.x - dir.x * lbl_80357E90.z;
        side.z = dir.x * lbl_80357E90.y - dir.y * lbl_80357E90.x;
        fn_80101820(&side);
        dir.x = -dir.x; dir.y = -dir.y; dir.z = -dir.z;
        side.x = -side.x; side.y = -side.y; side.z = -side.z;
        Cr(&u, &side, &dir);
        sc.x = s;
        sc.y = len;
        sc.z = s;
        m = p->f158;
        o = m->f30;
        if (o) {
            ((FnA)lbl_803286D0.f[7])(o->f10, &side, &dir, &u);
            o->f20 |= lbl_8035E004;
            fn_80190C98(m);
        }
        if (p->f158->f78) fn_80107F3C(p->f158->f78, &sc);
        m = p->f158;
        o = m->f30;
        if (o) {
            ((FnB)lbl_803286D0.f[3])(o->f10, &pos);
            o->f20 |= lbl_8035E004;
            fn_80190C98(m);
        }
    }
}
