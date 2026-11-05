#include "common.h"
extern "C" {
struct V800712B0 { f32 x, y, z; };
extern f32 lbl_8035F340;
extern volatile f32 lbl_8035F344;
struct O800712B0 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(s32 a, V800712B0 *b, V800712B0 *c, s32 d, s32 e); u8 pad[0x138]; V800712B0 pos; };
struct S800712B0 { u8 pad[0xe0]; O800712B0 *b; O800712B0 *a; };
void fn_80100F24(V800712B0 *a, V800712B0 *b);
void fn_80101820(V800712B0 *a);
void fn_800712B0(S800712B0 *p) {
    V800712B0 a;
    V800712B0 b;
    if (p->a == 0) return;
    p->a->v13(0, &a, 0, 0, 0);
    p->b->v13(0, 0, &b, 0, 0);
    fn_80100F24(&a, &b);
    fn_80101820(&a);
    *(volatile f32 *)&a.x = a.x * lbl_8035F340;
    *(volatile f32 *)&a.y = a.y * lbl_8035F340;
    *(volatile f32 *)&a.z = a.z * lbl_8035F340;
    f32 k = lbl_8035F344;
    a.x = k * b.x + a.x;
    a.y = k * b.y + a.y;
    a.z = k * b.z + a.z;
    p->b->pos = a;
}
}
