// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_8035F6FC[4];
extern f32 lbl_8035F700;

typedef struct { f32 x, y, z, w; } Q800796D8;
typedef struct { f32 x, y, z; } V800796D8;

} /* extern "C" */
struct O800796D8 {
    u32 f0;
    u8 pad4[20];
    Q800796D8 q;
    u8 pad28[64];
    virtual void v0();
    virtual void v1();
    virtual void f2();
};
struct S800796D8 {
    u8 pad0[20];
    V800796D8 f14;
    u8 pad20[124];
    O800796D8 *f9C;
    u8 padA0[452];
    f32 *f264;
    f32 f268;
    u8 pad26C[12];
    V800796D8 f278;
    u8 pad284[192];
    s32 f344;
    u8 pad348[8];
    V800796D8 f350;
};
extern "C" {

void fn_8005C7D8(S800796D8 *, s32, s32, s32, char *);
void fn_80100CF4(Q800796D8 *);

void fn_800796D8(S800796D8 *p, s32 a1, s32 a2, s32 a3, s32 a4) {
    Q800796D8 q;
    O800796D8 *o;
    V800796D8 v;
    fn_8005C7D8(p, a1, a2, a4, lbl_8035F6FC);
    p->f344 = 0;
    p->f268 = p->f264 ? *p->f264 : lbl_8035F700;
    fn_80100CF4(&q);
    o = p->f9C;
    if (o->f0 & 4) {
        o->f2();
    }
    q = o->q;
    v.x = q.x + q.w * p->f14.x;
    v.y = q.y + q.w * p->f14.y;
    v.z = q.z + q.w * p->f14.z;
    p->f278 = v;
    p->f350 = v;
}

} /* extern "C" */
