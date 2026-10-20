// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8005A6A4 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m13(void *, s32, s32, s32, s32); virtual void m14(void *, s32, s32, s32, s32); };
extern "C" void fn_8023FE08(void *, f32);

void fn_8005A6A4(u8 *p, f32 f) {
    s32 *x = *(s32 **)(p + 336);
    if (x != NULL && *x == 1) {
        u8 buf[24];
        (*(V_8005A6A4 **)(p + 300))->m13(buf, 0, 0, 0, 0);
        (*(V_8005A6A4 **)(p + 224))->m14(buf, 0, 0, 0, 0);
    }
    fn_8023FE08(p, f);
}

} /* extern "C" */
