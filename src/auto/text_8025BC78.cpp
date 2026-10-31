// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Vec3 { f32 x, y, z; };
struct Fr { Vec3 pos, a, b, c; };
struct Pad { u8 pad[4]; s32 on; };
struct Cam {
    u8 pad[20];
    Fr src;    /* 20 */
    u8 pad1[12];
    Fr cur;    /* 80 */
    u8 pad2[64];
    f32 *rot;  /* 192 */
    f32 *turn; /* 196 */
    f32 *fast; /* 200 */
};
extern void *lbl_8035B5E4;
extern f32 lbl_803668C8, lbl_803668CC, lbl_803668D8, lbl_803668DC, lbl_803668E0, lbl_803668E4;
extern char lbl_803668D0[8];
void fn_802610A0(Cam *);
Pad *fn_800F8274(void *, char *);
s32 fn_80253664(Pad *, int);
f32 fn_80253610(Pad *, int);
void fn_80101414(Vec3 *, Vec3 *, f32);
void fn_8026102C(Cam *);
void fn_80264E0C(Vec3 *, Vec3 *, Vec3 *, Vec3 *, f32 *, f32 *, f32 *, f32 *, f32 *, f32 *, int, int, f32 *, int, int);
void fn_80256F8C(Cam *, f32);

void fn_8025BC78(Cam *p, f32 dt)
{
    Vec3 up;
    Vec3 eye;
    Vec3 at;
    Vec3 o84;
    Vec3 o72;
    f32 o64[2];
    f32 o60;
    f32 o56;
    f32 o52;
    f32 o48;
    f32 o44;
    f32 o40;
    Pad *pad;
    int on;
    f32 spd;
    fn_802610A0(p);
    up.x = lbl_803668C8;
    ((f32 *)&eye)[4] = lbl_803668C8;
    spd = lbl_803668CC;
    ((f32 *)&eye)[5] = spd;
    on = 0;
    pad = fn_800F8274(lbl_8035B5E4, lbl_803668D0);
    if (pad && pad->on) {
        on = 1;
        if (!((f32)fn_80253664(pad, 63) >= lbl_803668D8 && (f32)fn_80253664(pad, 63) <= lbl_803668DC))
            spd = *p->fast;
    }
    p->cur.pos = p->src.pos;
    p->cur.a = p->src.a;
    p->cur.b = p->src.b;
    p->cur.c = p->src.c;
    if (on) {
        f32 v;
        v = fn_80253610(pad, 59);
        if (!(v >= lbl_803668D8 && v <= lbl_803668DC)) {
            f32 k = spd * (*p->rot * (dt * v));
            p->cur.pos.x -= k * p->src.b.x;
            p->cur.pos.y -= k * p->src.b.y;
            p->cur.pos.z -= k * p->src.b.z;
        }
        v = fn_80253610(pad, 58);
        if (!(v >= lbl_803668D8 && v <= lbl_803668DC)) {
            f32 k = spd * (*p->rot * (dt * v));
            p->cur.pos.x -= k * p->src.a.x;
            p->cur.pos.y -= k * p->src.a.y;
            p->cur.pos.z -= k * p->src.a.z;
        }
        v = fn_80253610(pad, 57);
        if (!(v >= lbl_803668D8 && v <= lbl_803668DC)) {
            f32 m = lbl_803668E0 * dt;
            f32 k = spd * (*p->rot * (m * v));
            p->cur.pos.x -= k * p->src.c.x;
            p->cur.pos.y -= k * p->src.c.y;
            p->cur.pos.z -= k * p->src.c.z;
        }
        v = fn_80253610(pad, 60);
        if (!(v >= lbl_803668D8 && v <= lbl_803668DC)) {
            f32 t = dt * v;
            fn_80101414(&p->cur.a, &up, spd * (*p->turn * t));
            fn_80101414(&p->cur.c, &up, spd * (*p->turn * t));
            fn_80101414(&p->cur.b, &up, spd * (*p->turn * t));
        }
        v = fn_80253610(pad, 61);
        if (!(v >= lbl_803668D8 && v <= lbl_803668DC)) {
            f32 t = dt * v;
            fn_80101414(&p->cur.a, &p->cur.c, spd * (*p->turn * t));
            fn_80101414(&p->cur.b, &p->cur.c, spd * (*p->turn * t));
        }
    }
    fn_8026102C(p);
    {
        f32 x, y, z;
        eye = p->cur.pos;
        x = eye.x;
        y = eye.y;
        z = eye.z;
        at.x = x;
        at.y = y;
        ((f32 *)&o84)[5] = z;
        at.x = *(f32 *)&lbl_803668E4 * p->cur.a.x + x;
        at.y = lbl_803668E4 * p->cur.a.y + y;
        at.z = lbl_803668E4 * p->cur.a.z + z;
    }
    fn_80264E0C(&eye, &at, &o84, &o72, &o60, &o56, &o52, &o48, o64, &o44, 0, 0, &o40, 0, 1);
    fn_80256F8C(p, dt);
}

} /* extern "C" */
