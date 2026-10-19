// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V1_800AA274 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void m(); };
struct V2_800AA274 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void n(f32); };
s32 fn_8022C558(void *);
void fn_800AA0B0(void *);
void fn_8023FE08(void *, f32);

void fn_800AA274(u8 *p, f32 f) {
    if (*(s32 *)(p + 0x60) == 0 && fn_8022C558(*(void **)(p + 0xE0)) != 0) {
        (*(V1_800AA274 **)(p + 0xE0))->m();
    }
    if (*(s32 *)(p + 0x60) == 1) {
        fn_800AA0B0(p);
        (*(V2_800AA274 **)(p + 0x128))->n(f);
    }
    fn_8023FE08(p, f);
}

} /* extern "C" */
