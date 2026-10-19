// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8021BD48 { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void a(u32, u16, void *, u32 *, u32 *, f32 *); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void b(u32, void *); };
void fn_80101624(void *, void *, void *, f32);

void fn_8021BD48(V_8021BD48 *p, u32 *k, void *a, void *o) {
    f32 b1[3];
    f32 b2[3];
    u32 x;
    u32 y;
    f32 f;
    p->a(k[0], *(u16 *)(k + 2), a, &x, &y, &f);
    p->b(x + k[1], b1);
    p->b(y + k[1], b2);
    fn_80101624(o, b1, b2, f);
}

} /* extern "C" */
