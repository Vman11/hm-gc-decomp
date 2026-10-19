// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80163A80 { u8 pad[0x1930]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void m(); };
extern f32 lbl_80364674;
extern f32 lbl_80364678;
extern f32 lbl_8036467C;
extern f32 lbl_80364680;
void fn_800DA058(f32, f32);

void fn_80163A80(V_80163A80 *p, f32 f) {
    f32 g;
    f32 d;
    u8 *q;
    p->m();
    g = lbl_80364674 * f;
    q = *(u8 **)((u8 *)p + 0x1938);
    d = *(f32 *)(q + 0x4B0) - g;
    if (d >= lbl_80364678 && d <= lbl_8036467C) {
        return;
    }
    *(f32 *)(q + 0x4B0) = g;
    fn_800DA058(lbl_80364680, -*(f32 *)(q + 0x4B0));
}

} /* extern "C" */
