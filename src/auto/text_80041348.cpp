// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80041348 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void m(); };
extern "C" { s32 fn_8022C558(void *); void fn_8023FE08(void *, f32); }

void fn_80041348(u8 *p, f32 f) {
    if (*(s32 *)(p + 96) == 1 && fn_8022C558(*(void **)(p + 224)) != 0) {
        (*(V_80041348 **)(p + 224))->m();
    }
    fn_8023FE08(p, f);
}

} /* extern "C" */
