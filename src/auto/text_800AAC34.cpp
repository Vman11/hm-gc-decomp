#include "common.h"

extern "C" {
struct V { f32 x, y, z; };
struct FT { u8 pad[304]; void (*f304)(void *, V *); u8 pad308[16]; void (*f324)(void *, V *); void (*f328)(void *, V *); void (*f332)(void *, V *); };
extern FT lbl_803286D0;
struct C40 { u8 pad[16]; void *f16; };
struct G65C { u8 pad[40]; C40 *f40; };
extern G65C *lbl_8035B65C;
extern f32 lbl_80362234, lbl_80362238;
struct S224 { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void look(V *, V *, V *, V *, int); };
struct T { u8 pad[224]; S224 *f224; u8 pad228[52]; int f280; };
void fn_80101820(V *);
void fn_8023FE08(T *, f32);
void fn_800AAC34(T *t, f32 dt) {
    if (t->f280) {
        V d;
        V c;
        V nd;
        V p;
        V r;
        V u;
        V dir;
        V pos;
        lbl_803286D0.f304(lbl_8035B65C->f40->f16, &pos);
        lbl_803286D0.f332(lbl_8035B65C->f40->f16, &dir);
        lbl_803286D0.f324(lbl_8035B65C->f40->f16, &r);
        lbl_803286D0.f328(lbl_8035B65C->f40->f16, &u);
        u.x = -u.x;
        u.y = -u.y;
        u.z = -u.z;
        fn_80101820(&dir);
        {
            f32 k, uz, uy, ux, pz, py, px, dz, dy, dx;
            dx = dir.x * lbl_80362234; dy = dir.y * lbl_80362234; dz = dir.z * lbl_80362234;
            px = pos.x + dx; py = pos.y + dy; pz = pos.z + dz;
            *(volatile f32 *)&dir.x = dx; ux = *(volatile f32 *)&u.x;
            *(volatile f32 *)&dir.y = dy; uy = *(volatile f32 *)&u.y;
            *(volatile f32 *)&dir.z = dz; uz = *(volatile f32 *)&u.z;
            *(volatile f32 *)&p.x = px; *(volatile f32 *)&p.y = py; *(volatile f32 *)&p.z = pz;
            k = *(volatile f32 *)&lbl_80362238;
            *(volatile f32 *)&p.x = px + k * ux;
            *(volatile f32 *)&p.y = py + k * uy;
            *(volatile f32 *)&p.z = pz + k * uz;
            nd.x = -dx; nd.y = -dy; nd.z = -dz;
        }
        fn_80101820(&nd);
        c = u;
        fn_80101820(&c);
        d.x = -r.x;
        d.y = -r.y;
        d.z = -r.z;
        fn_80101820(&d);
        t->f224->look(&p, &nd, &c, &d, 0);
    }
    fn_8023FE08(t, dt);
}
}
