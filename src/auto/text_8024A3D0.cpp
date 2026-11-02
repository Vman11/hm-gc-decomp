// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V { f32 x, y, z; };
struct Pr { s32 a, b; };
struct Prs { Pr p[3]; };
struct S { V p[3]; V v[3]; f32 rest[3]; f32 ground; s32 hit[3]; s32 active; };
extern const Prs lbl_802A9250;
extern f32 lbl_80366330, lbl_80366334, lbl_80366338, lbl_8036633C;
f32 fn_80101590(V *, V *);
void fn_80101820(V *);
void fn_8024A3D0(S *s, f32 dt) {
    Prs pr = lbl_802A9250;
    if (s->active == 0) return;
    f32 g = lbl_80366330 * dt;
    int i; V *a; V *b; u32 j; V d; f32 dist; f32 k;
    for (i = 0; i < 3; i++) {
        V *p = &s->p[i];
        p->x += dt * p[3].x;
        p->y += dt * p[3].y;
        p->z += dt * p[3].z;
        p[3].z -= g;
        if (p->z < s->ground) {
            p[3].x = lbl_80366334;
            p[3].y = lbl_80366334;
            p[3].z = lbl_80366334;
            p->z = lbl_80366338 + s->ground;
            s->hit[i] = 1;
        }
    }
    s->active = 0;
    for (i = 0; i < 3; i++) {
        if (s->hit[i] == 0) { s->active = 1; break; }
    }
    for (j = 0; j < 3; j++) {
        a = &s->p[pr.p[j].a];
        b = &s->p[pr.p[j].b];
        dist = fn_80101590(a, b);
        d.x = b->x - a->x;
        d.y = b->y - a->y;
        d.z = b->z - a->z;
        fn_80101820(&d);
        f32 t = dist - s->rest[j];
        k = t * lbl_8036633C;
        a->x += k * d.x;
        a->y += k * d.y;
        a->z += k * d.z;
        b->x -= k * d.x;
        b->y -= k * d.y;
        b->z -= k * d.z;
    }
}

} /* extern "C" */
