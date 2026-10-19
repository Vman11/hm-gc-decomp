// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V1_8003A4FC { u8 pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void a(); };
struct V2_8003A4FC { u8 pad[0xA4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void b(); };
struct V3_8003A4FC { u8 pad[0x74]; virtual void d(s32); virtual void c(); };
struct V4_8003A4FC { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void x(void *); virtual void p27(); virtual void y(void *); };
extern u8 *lbl_8035A1DC;
extern f32 lbl_8035C0E0;

void fn_8003A4FC(u8 *p) {
    if (*(V1_8003A4FC **)(p + 4) != NULL) {
        (*(V1_8003A4FC **)(p + 4))->a();
        (*(V4_8003A4FC **)(lbl_8035A1DC + 0x2C44))->x(*(void **)(p + 4));
    }
    if (*(V2_8003A4FC **)(p + 0x18) != NULL) {
        (*(V2_8003A4FC **)(p + 0x18))->b();
    }
    if (*(V3_8003A4FC **)(p + 8) != NULL) {
        (*(V3_8003A4FC **)(p + 8))->c();
    }
    if (*(void **)(p + 0x18) != NULL) {
        (*(V4_8003A4FC **)(lbl_8035A1DC + 0x2C44))->y(*(void **)(p + 0x18));
    }
    if (*(V3_8003A4FC **)(p + 8) != NULL) {
        if (*(V3_8003A4FC **)(p + 8) != NULL) {
            (*(V3_8003A4FC **)(p + 8))->d(1);
        }
    }
    *(s32 *)(p + 0x18) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 48) = 0;
    *(s32 *)(p + 0x20) = 0;
    *(s32 *)(p + 48) = 0;
    *(f32 *)(p + 0x1C) = lbl_8035C0E0;
    *(s32 *)(p + 4) = 0;
}

} /* extern "C" */
