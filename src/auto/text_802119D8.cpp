// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
struct VCall_fn_802119D8_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void m(); };

void fn_802119D8(s32 param_1) {
    ((VCall_fn_802119D8_0 *)(*(s32 **)(param_1 + 0x6e0)))->m();
}
}
