// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_800AF1B0 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void m(f32); };
void fn_800AEFEC(void *);

void fn_800AF1B0(u8 *p, f32 f) {
    if (*(u32 *)(p + 0x134) != 0) {
        s32 s = *(s32 *)(p + 0x60);
        if (s == 1 || s == 4) {
            fn_800AEFEC(p);
            (*(V_800AF1B0 **)(p + 0x134))->m(f);
        }
    }
}

} /* extern "C" */
