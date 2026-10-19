// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_8018A9B8 { u8 pad[0x8C]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
extern f32 lbl_80364A38;
void fn_801A15D8(void *);

void fn_8018A9B8(u8 *p) {
    ((S_8018A9B8 *)(p + 0x98))->m();
    fn_801A15D8(p);
    *(s32 *)(p + 0x130) = 0;
    *(s32 *)(p + 0x90) = 0;
    *(s32 *)(p + 0x94) = 0;
    *(f32 *)(p + 0x14) = lbl_80364A38;
    *(f32 *)(p + 0x24) = lbl_80364A38;
}

} /* extern "C" */
