/* Functions from 0x80061458 to 0x80061484, found by decomp-toolkit. */
#include "common.h"

void fn_80061458(void *arg0, s32 *arg1) {
    extern void fn_80061484(void);
    arg1[1] = 0x1000;
    arg1[2] = 0x64000;
    arg1[0] = 0x02C80000;
    arg1[3] = (s32)fn_80061484;
}
