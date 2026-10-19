// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
struct VCall_fn_8015DC08_0 {  virtual void m(int); };

void fn_8015DC08(u32 param_1, s32 *param_2) {
    if (param_2 != (s32 *)0x0) {
        ((VCall_fn_8015DC08_0 *)(param_2))->m((s32)(1));
    }
}
}
