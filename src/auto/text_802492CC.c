/* Functions from 0x802492CC to 0x802492F0, found by decomp-toolkit. */
#include "common.h"
extern f32 lbl_803662E0;

f32 fn_802492CC(void *arg0, s32 arg1) {
    f32 *value = (*(f32 ***)((u8 *)arg0 + 0x70))[arg1];
    if (value == 0) {
        return lbl_803662E0;
    }
    return *value;
}
