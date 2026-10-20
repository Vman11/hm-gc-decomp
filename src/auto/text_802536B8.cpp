// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_802536B8 { u8 pad[0xD0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual s32 m(); };
void fn_80118280(void *, s32);

s32 fn_802536B8(u8 *p) {
    if (*(s32 *)(p + 20) != 0) {
        return (*(V_802536B8 **)(p + 8))->m();
    }
    fn_80118280(*(u8 **)(p + 8) + 216, 255);
    return 0;
}

} /* extern "C" */
