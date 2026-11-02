// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VB_800AA0B0 { u8 pad[0x68]; };
struct O_800AA0B0 : VB_800AA0B0 {
    virtual void v0(); virtual void v1(); virtual void upd();
};
extern "C" {
typedef struct { f32 x, y, z; } V3_800AA0B0;
typedef struct { u32 flags; u8 pad4[0x14]; V3_800AA0B0 pos; u8 pad24[0x54]; void *f78; } OH_800AA0B0;
typedef struct { u8 pad[0x78]; void *f78; u8 pad7c[0x20]; O_800AA0B0 *f9c; } N_800AA0B0;
typedef struct { u8 pad[0x28]; V3_800AA0B0 s; } SA8_800AA0B0;
typedef struct { u8 pad[0x28]; SA8_800AA0B0 *f28; } A8_800AA0B0;
typedef struct { u8 pad[4]; f32 f4; } B10_800AA0B0;
typedef struct { u8 pad[8]; f32 f8; u8 padc[4]; B10_800AA0B0 *f10; u8 pad14[0x10]; f32 f24; } B0_800AA0B0;
typedef struct { u8 pad[0xa8]; A8_800AA0B0 *fa8; u8 padac[4]; B0_800AA0B0 *fb0; } Q_800AA0B0;
typedef struct {
    u8 pad[0xe0];
    N_800AA0B0 *fe0;
    u8 pade4[0x34];
    f32 *f124;
    f32 *f128;
    f32 *f12c;
    f32 *f130;
    Q_800AA0B0 *f134;
} P_800AA0B0;
typedef struct { u8 pad[0x48]; N_800AA0B0 *f48; } G_800AA0B0;
extern G_800AA0B0 *lbl_8035B308;
extern volatile f32 lbl_803621E0;
extern f32 lbl_803621E4;
f32 fn_80101590(V3_800AA0B0 *, V3_800AA0B0 *);
void fn_80107F3C(void *, V3_800AA0B0 *);

#define OH(o) ((OH_800AA0B0 *)(o))

static inline void Set_800AA0B0(B0_800AA0B0 *q, f32 s) {
    q->f8 = s;
    if (q->f10 != 0) {
        q->f24 = q->f8 / q->f10->f4;
    }
}
static inline void GetPos_800AA0B0(O_800AA0B0 *o, V3_800AA0B0 *d) {
    if (OH(o)->flags & 4) {
        o->upd();
    }
    *(volatile f32 *)&d->x = OH(o)->pos.x;
    *(volatile f32 *)&d->y = OH(o)->pos.y;
    *(volatile f32 *)&d->z = OH(o)->pos.z;
}
void fn_800AA0B0(P_800AA0B0 *p) {
    O_800AA0B0 *o;
    V3_800AA0B0 a;
    V3_800AA0B0 b;
    V3_800AA0B0 c;
    f32 d;
    f32 mx;
    f32 s;
    f32 k;
    f32 x;
    f32 y;
    f32 z;
    f32 t;
    B0_800AA0B0 *q;
    void *o2;
    o = lbl_8035B308->f48->f9c;
    GetPos_800AA0B0(o, &a);
    a.z = lbl_803621E0;
    o = p->fe0->f9c;
    if (o == 0) {
        return;
    }
    GetPos_800AA0B0(o, &b);
    b.z = lbl_803621E0;
    d = fn_80101590(&b, &a);
    mx = *p->f128;
    if (d > mx) {
        d = mx;
    } else if (d < *p->f124) {
        d = *p->f124;
    }
    t = (mx - d) / (mx - *p->f124);
    k = lbl_803621E4;
    {
        V3_800AA0B0 *v = &p->f134->fa8->f28->s;
        x = v->x;
        y = v->y;
        z = v->z;
        c.x = t * (x - k) + k;
        c.y = t * (y - k) + k;
        c.z = t * (z - k) + k;
    }
    s = t * (*p->f130 - *p->f12c) + *p->f12c;
    o2 = OH(p->fe0->f9c)->f78;
    if (o2 != 0) {
        fn_80107F3C(o2, &c);
    }
    Set_800AA0B0(p->f134->fb0, s);
}
}

} /* extern "C" */
