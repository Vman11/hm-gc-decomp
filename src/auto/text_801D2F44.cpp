/* Functions from 0x801D2F44 to 0x801D3020, found by decomp-toolkit. */
#include "common.h"

extern "C" {

s32 fn_801D2F44(void *arg0, void **arg1) {
    if (arg1[3] == NULL && arg1[0] == NULL) {
        if (arg1[2] == NULL) {
            if (arg1[1] == NULL) {
                return 13;
            }
            return (s32)arg1[6] != 0 ? 11 : 12;
        }
        if (arg1[1] == NULL) {
            return 7;
        }
        return (s32)arg1[6] != 0 ? 5 : 6;
    }
    if (arg1[1] == NULL) {
        if (arg1[2] != NULL) {
            return 10;
        }
        return 4;
    }
    if ((s32)arg1[6] != 0) {
        if (arg1[2] != NULL) {
            return 8;
        }
        return 2;
    }
    if (arg1[2] != NULL) {
        return 9;
    }
    return 3;
}

} /* extern "C" */
