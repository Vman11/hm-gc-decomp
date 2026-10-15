/* Functions from 0x801F5D98 to 0x801F5DC8, found by decomp-toolkit. */
#include "common.h"

void fn_801F5D98(struct S { u32 pad; s32 value; } ****arg0, s32 arg1, s32 *arg2) {
    *arg2 = (***arg0)->value;
    (***arg0)->value += arg1;
}
