// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80164EE0 { u8 pad[0x1930]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void m(); };
extern "C" { extern u32 lbl_803646AC; void fn_8016B800(void *); }

void fn_80164EE0(V_80164EE0 *p, s32 a) {
    if (a != 0) {
        p->m();
    }
    *(u32 *)((u8 *)p + 12) |= lbl_803646AC;
    fn_8016B800(*(void **)((u8 *)p + 6452));
}

} /* extern "C" */
