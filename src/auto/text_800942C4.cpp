// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_800942C4 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void m(void *, s32, s32, void *, s32); };
extern u8 *lbl_8035B308;
extern u8 lbl_80299B14[];
void fn_8023FE08(void *, f32);

void fn_800942C4(u8 *p, f32 f) {
    if (*(s32 *)(p + 0x60) == 4 && *(s32 *)(p + 0x16C) != 0 && *(s32 *)(p + 0x174) == 0 && *(s32 *)(p + 0x16C) != 0) {
        (*(V_800942C4 **)(lbl_8035B308 + 0x48))->m(lbl_80299B14, 0, 0, *(void **)(p + 0x120), 0);
        *(s32 *)(p + 0x16C) = 0;
    }
    fn_8023FE08(p, f);
}

} /* extern "C" */
