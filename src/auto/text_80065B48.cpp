// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 {
    f32 x, y, z;
    void operator+=(const V3 &b) { x += b.x; y += b.y; z += b.z; }
    void operator-=(const V3 &b) { x -= b.x; y -= b.y; z -= b.z; }
    void operator*=(f32 k) { x *= k; y *= k; z *= k; }
};
struct T20C { u8 pad[0x60]; s32 type; };
struct TFC { u8 pad[0x20c]; T20C *p20c; };
struct Obj { u8 pad[0x50]; V3 pos; u8 pad5c[0xc]; V3 v68; u8 pad74[0x88]; TFC *pfc; };
struct Cfg { u8 pad[0x14]; f32 f14; };
/* .bss 0x803064F8..0x80306630 is owned by this unit (MWCC anchors these on one base) */
V3 lbl_803064F8[6];
V3 lbl_80306540[6];
V3 lbl_80306588[6];
V3 lbl_803065D0[6];
s32 lbl_80306618[6];
extern Cfg *lbl_8035B488;
extern f32 lbl_8035E708, lbl_8035E724, lbl_8035E728;
void fn_80101820(V3 *);
void fn_80101030(V3 *, V3 *);
void fn_80100F24(V3 *, V3 *);
#define AddK(o, K) o->pos.x += K * dx; o->pos.y += K * dy; o->pos.z += K * dz

void fn_80065B48(Obj *o) {
    if (lbl_80306618[1] && lbl_80306618[2]) {
        if (o->pfc->p20c->type != 0x13) {
            f32 dx = lbl_80306588[1].x, dy = lbl_80306588[1].y, dz = lbl_80306588[1].z;
            dx -= lbl_80306540[1].x; dy -= lbl_80306540[1].y; dz -= lbl_80306540[1].z;
            dx += lbl_80306588[2].x; dy += lbl_80306588[2].y; dz += lbl_80306588[2].z;
            dx -= lbl_80306540[2].x; dy -= lbl_80306540[2].y; dz -= lbl_80306540[2].z;
            AddK(o, lbl_8035E708);
        }
    } else if (lbl_80306618[1]) {
        f32 dx = lbl_80306588[1].x; dx -= lbl_80306540[1].x;
        f32 dy = lbl_80306588[1].y; dy -= lbl_80306540[1].y;
        f32 dz = lbl_80306588[1].z; dz -= lbl_80306540[1].z;
        o->pos.x += dx; o->pos.y += dy; o->pos.z += dz;
    } else if (lbl_80306618[2]) {
        if (o->pfc->p20c->type == 0x13) {
            f32 s = lbl_8035B488->f14;
            V3 v;
            v.x = lbl_80306588[2].x; v.y = lbl_80306588[2].y; v.z = lbl_80306588[2].z;
            v -= lbl_80306540[2];
            fn_80101820(&v);
            v *= lbl_8035E724 * s;
            o->pos += v;
        } else {
            f32 dx = lbl_80306588[2].x; dx -= lbl_80306540[2].x;
            f32 dy = lbl_80306588[2].y; dy -= lbl_80306540[2].y;
            f32 dz = lbl_80306588[2].z; dz -= lbl_80306540[2].z;
            o->pos.x += dx; o->pos.y += dy; o->pos.z += dz;
        }
    }
    if (lbl_80306618[3] && lbl_80306618[4]) {
        f32 dx = lbl_80306588[3].x, dy = lbl_80306588[3].y, dz = lbl_80306588[3].z;
        dx -= lbl_80306540[3].x; dy -= lbl_80306540[3].y; dz -= lbl_80306540[3].z;
        dx += lbl_80306588[4].x; dy += lbl_80306588[4].y; dz += lbl_80306588[4].z;
        dx -= lbl_80306540[4].x; dy -= lbl_80306540[4].y; dz -= lbl_80306540[4].z;
        AddK(o, lbl_8035E708);
    } else if (lbl_80306618[3]) {
        f32 dx = lbl_80306588[3].x; dx -= lbl_80306540[3].x;
        f32 dy = lbl_80306588[3].y; dy -= lbl_80306540[3].y;
        f32 dz = lbl_80306588[3].z; dz -= lbl_80306540[3].z;
        AddK(o, lbl_8035E728);
    } else if (lbl_80306618[4]) {
        f32 dx = lbl_80306588[4].x; dx -= lbl_80306540[4].x;
        f32 dy = lbl_80306588[4].y; dy -= lbl_80306540[4].y;
        f32 dz = lbl_80306588[4].z; dz -= lbl_80306540[4].z;
        AddK(o, lbl_8035E728);
    }
    if (lbl_80306618[5]) {
        if (lbl_80306618[0]) {
            V3 v;
            v.x = lbl_80306588[5].x; v.y = lbl_80306588[5].y; v.z = lbl_80306588[5].z;
            v -= lbl_80306540[5];
            fn_80101030(&v, &lbl_803065D0[5]);
            fn_80100F24(&v, &o->v68);
            o->pos += v;
        } else {
            f32 dx = lbl_80306588[5].x; dx -= lbl_80306540[5].x;
            f32 dy = lbl_80306588[5].y; dy -= lbl_80306540[5].y;
            f32 dz = lbl_80306588[5].z; dz -= lbl_80306540[5].z;
            o->pos.x += dx; o->pos.y += dy; o->pos.z += dz;
        }
    }
}

} /* extern "C" */
