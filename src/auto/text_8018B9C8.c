/* Functions from 0x8018B9C8 to 0x8018BB70, found by decomp-toolkit. */
#include "common.h"

void fn_8018BAA8(void *arg0) {
    extern s32 lbl_80364A6C;
    char *p = M2C_FIELD(arg0, char **, 0x34);
    char *end = p + M2C_FIELD(arg0, s32 *, 0x14) * 0x98;
    for (; p < end; p += 0x98) {
        if (M2C_FIELD(p, u32 *, 0) & 8) {
            float *v = M2C_FIELD(p, float **, 0x1c);
            M2C_FIELD(p, float *, 0x3c) = v[0];
            M2C_FIELD(p, float *, 0x40) = v[1];
            M2C_FIELD(p, float *, 0x44) = v[2];
            v = M2C_FIELD(p, float **, 0x20);
            M2C_FIELD(p, float *, 0x48) = v[0];
            M2C_FIELD(p, float *, 0x4c) = v[1];
            M2C_FIELD(p, float *, 0x50) = v[2];
            M2C_FIELD(p, float *, 36) = M2C_FIELD(p, float *, 4);
            M2C_FIELD(p, float *, 40) = M2C_FIELD(p, float *, 8);
            M2C_FIELD(p, float *, 44) = M2C_FIELD(p, float *, 12);
            M2C_FIELD(p, float *, 48) = M2C_FIELD(p, float *, 16);
            M2C_FIELD(p, float *, 52) = M2C_FIELD(p, float *, 20);
            M2C_FIELD(p, float *, 56) = M2C_FIELD(p, float *, 24);
            M2C_FIELD(p, u32 *, 0) &= ~8;
            M2C_FIELD(p, u32 *, 0) |= lbl_80364A6C;
        }
    }
}
