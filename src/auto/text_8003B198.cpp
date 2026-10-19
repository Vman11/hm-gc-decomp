// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V1_8003B198 { u8 pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void a(); };
struct V2_8003B198 { u8 pad[0x74]; virtual void d(s32); virtual void b(); };
struct V3_8003B198 { u8 pad[0xA4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void c(); };
struct V4_8003B198 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void x(void *); virtual void p27(); virtual void y(void *); };
extern u8 *lbl_8035A1DC;

void fn_8003B198(u8 *p) {
    if (*(V1_8003B198 **)(p + 0xC) != NULL) {
        (*(V1_8003B198 **)(p + 0xC))->a();
        (*(V4_8003B198 **)(lbl_8035A1DC + 0x2C44))->x(*(void **)(p + 0xC));
        *(s32 *)(p + 0xC) = 0;
    }
    if (*(V2_8003B198 **)(p + 0x18) != NULL) {
        (*(V2_8003B198 **)(p + 0x18))->b();
        if (*(V2_8003B198 **)(p + 0x18) != NULL) {
            (*(V2_8003B198 **)(p + 0x18))->d(1);
        }
    }
    if (*(V3_8003B198 **)(p + 0x14) != NULL) {
        (*(V3_8003B198 **)(p + 0x14))->c();
        (*(V4_8003B198 **)(lbl_8035A1DC + 0x2C44))->y(*(void **)(p + 0x14));
    }
    *(s32 *)(p + 0xC) = 0;
    *(s32 *)(p + 0x18) = 0;
    *(s32 *)(p + 0x14) = 0;
}

} /* extern "C" */
