// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
void fn_80207E5C(void);
struct VCall_fn_80211994_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(int); };

void fn_80211994(s32 param_1) {
    fn_80207E5C();
    ((VCall_fn_80211994_0 *)(*(s32 **)(param_1 + 0x6e0)))->m((s32)(param_1 + 0x80));
}
}
