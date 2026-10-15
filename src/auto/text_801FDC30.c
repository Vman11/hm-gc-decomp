/* Functions from 0x801FDC30 to 0x801FDD1C, found by decomp-toolkit. */
#include "common.h"

void fn_801FDD0C(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x9C) = (void *) M2C_FIELD(arg0, void **, 0x104);
    M2C_FIELD(arg0, void **, 0x104) = arg1;
}
