/* Functions from 0x8019B990 to 0x8019BB1C, found by decomp-toolkit. */
#include "common.h"

void *fn_8019BAB8(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r4 == NULL) {
        return NULL;
    }
    M2C_FIELD(arg0, void **, 0x14) = (void *) M2C_FIELD(temp_r4, void **, 0x10);
    return temp_r4;
}

void fn_8019BADC(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0) = 0;
    M2C_FIELD(arg1, void **, 0x14) = (void *) M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg0, void **, 8) = arg1;
}
