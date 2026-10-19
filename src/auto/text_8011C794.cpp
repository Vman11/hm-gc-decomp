// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
struct VCall_fn_8011C794_0 { virtual void p0(); virtual void m(); };

void fn_8011C794(s32 param_1) {
    if (*(s32 **)(param_1 + 0x14) != (s32 *)0x0) {
        ((VCall_fn_8011C794_0 *)(*(s32 **)(param_1 + 0x14)))->m();
    }
}
}
