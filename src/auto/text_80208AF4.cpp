// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
void fn_8011B250(void);
struct VCall_fn_80208AF4_0 { virtual void p0(); virtual int m(); };

void fn_80208AF4(s32 *param_1) {
    s32 iVar1;

    do {
        fn_8011B250();
        iVar1 = ((VCall_fn_80208AF4_0 *)(param_1))->m();
    } while (iVar1 == 7);
}
}
