// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V1_80039BE8 { u8 pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void a(); };
struct V2_80039BE8 { u8 pad[0x10]; virtual void d(s32); virtual void c(); };
struct V4_80039BE8 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void x(void *); };
extern u8 *lbl_8035A1DC;
extern f32 lbl_8035C060;

void fn_80039BE8(u8 *p) {
    if (*(V1_80039BE8 **)(p + 0x10) != NULL) {
        (*(V1_80039BE8 **)(p + 0x10))->a();
        (*(V4_80039BE8 **)(lbl_8035A1DC + 0x2C44))->x(*(void **)(p + 0x10));
    }
    if (*(V2_80039BE8 **)(p + 4) != NULL) {
        (*(V2_80039BE8 **)(p + 4))->c();
        if (*(V2_80039BE8 **)(p + 4) != NULL) {
            (*(V2_80039BE8 **)(p + 4))->d(1);
        }
    }
    if (*(V2_80039BE8 **)(p + 8) != NULL) {
        (*(V2_80039BE8 **)(p + 8))->c();
        if (*(V2_80039BE8 **)(p + 8) != NULL) {
            (*(V2_80039BE8 **)(p + 8))->d(1);
        }
    }
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 0xC) = 0;
    *(s32 *)(p + 0x10) = 0;
    *(f32 *)(p + 0x14) = lbl_8035C060;
    *(s32 *)(p + 0x1C) = 1;
}

} /* extern "C" */
