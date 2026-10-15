/* Functions from 0x8019B990 to 0x8019BB1C, found by decomp-toolkit. */
#include "common.h"

void fn_8019BADC(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0) = 0;
    M2C_FIELD(arg1, void **, 0x14) = (void *) M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg0, void **, 8) = arg1;
}
