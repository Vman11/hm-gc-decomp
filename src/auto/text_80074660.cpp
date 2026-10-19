/* Functions from 0x80074660 to 0x800746E8, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_80074660(unsigned char *arg0, float *arg1) {
    arg1[0] = (*(float ***)(arg0 + 0x6D4))[3][0];
    arg1[1] = (*(float ***)(arg0 + 0x6D4))[3][1];
    arg1[2] = (*(float ***)(arg0 + 0x6D4))[3][2];
    arg1[3] = (*(float ***)(arg0 + 0x6D4))[3][3];
}

void fn_800746A4(unsigned char *arg0, float *arg1) {
    (*(float ***)(arg0 + 0x6D4))[3][0] = arg1[0];
    (*(float ***)(arg0 + 0x6D4))[3][1] = arg1[1];
    (*(float ***)(arg0 + 0x6D4))[3][2] = arg1[2];
    (*(float ***)(arg0 + 0x6D4))[3][3] = arg1[3];
}

} /* extern "C" */
