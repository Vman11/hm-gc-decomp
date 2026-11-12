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
    f32 *slow; /* 204 */
};
extern void *lbl_8035B5E4; extern f32 lbl_80366AA4;
void fn_802610A0(Cam *);
Pad *fn_800F8274(void *, const char *);
s32 fn_80253664(Pad *, int);
f32 fn_80253610(Pad *, int);
void fn_80101414(Vec3 *, Vec3 *, f32);
void fn_8026102C(Cam *);
void fn_80256F8C(Cam *, f32);

static inline void Fix(Cam *p) {
    f32 k = *p->rot;
    f32 x = p->src.a.x * k, y = p->src.a.y * k, z = p->src.a.z * k;
    p->cur.pos.x += x; p->cur.pos.y += y; p->cur.pos.z += z;
    k = *p->rot;
    x = p->cur.a.x * k; y = p->cur.a.y * k; z = p->cur.a.z * k;
    p->cur.pos.x -= x; p->cur.pos.y -= y; p->cur.pos.z -= z;
}

void fn_80261F38(Cam *p, f32 dt)
{
    Vec3 up;
    Pad *pad;
    int on;
    f32 spd;
    fn_802610A0(p);
    on = 0;
    {
    f32 z0 = 0.0f;
    *(volatile f32 *)&up.x = z0;
    *(volatile f32 *)&up.y = z0;
    }
    { f32 o1 = *(volatile f32 *)&lbl_80366AA4; *(volatile f32 *)&up.z = o1; spd = o1; }
    pad = fn_800F8274(*(void *volatile *)&lbl_8035B5E4, "camera");
    if (pad && pad->on) {
        on = 1;
        if (!((f32)fn_80253664(pad, 63) >= -5e-6f && (f32)fn_80253664(pad, 63) <= 5e-6f))
            spd = *p->slow;
    }
    if (on) {
        f32 v;
        f32 d = dt * (*p->fast * spd) * fn_80253610(pad, 58);
        *p->rot -= d;
        if (*p->rot < 0.0f) {
            d += *p->rot;
            *p->rot = 0.0f;
        }
        p->cur.pos.x = d * p->src.a.x + p->src.pos.x;
        p->cur.pos.y = d * p->src.a.y + p->src.pos.y;
        p->cur.pos.z = d * p->src.a.z + p->src.pos.z;
        p->cur.a.x = p->src.a.x; p->cur.a.y = p->src.a.y; p->cur.a.z = p->src.a.z;
        p->cur.b.x = p->src.b.x; p->cur.b.y = p->src.b.y; p->cur.b.z = p->src.b.z;
        p->cur.c.x = p->src.c.x; p->cur.c.y = p->src.c.y; p->cur.c.z = p->src.c.z;
        v = fn_80253610(pad, 60);
        if (!(v >= -5e-6f && v <= 5e-6f)) {
            f32 t = dt * v;
            fn_80101414(&p->cur.a, &up, spd * (*p->turn * t));
            fn_80101414(&p->cur.c, &up, spd * (*p->turn * t));
            fn_80101414(&p->cur.b, &up, spd * (*p->turn * t));
            Fix(p);
        }
        v = fn_80253610(pad, 61);
        if (!(v >= -5e-6f && v <= 5e-6f)) {
            f32 t = dt * v;
            fn_80101414(&p->cur.a, &p->src.c, spd * (*p->turn * t));
            fn_80101414(&p->cur.b, &p->src.c, spd * (*p->turn * t));
            Fix(p);
        }
    }
    fn_8026102C(p);
    fn_80256F8C(p, dt);
}

} /* extern "C" */
