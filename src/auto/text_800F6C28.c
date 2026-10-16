/* Functions from 0x800F6C28 to 0x800F6E40, found by decomp-toolkit. */
#include "common.h"

s32 fn_800F6C28(char *str) {
    if (str[0] == 0) {
        return 0;
    }
    if (str[1] == 0) {
        return 1;
    }
    if (str[2] == 0) {
        return 2;
    }
    if (str[3] == 0) {
        return 3;
    }
    if (str[4] == 0) {
        return 4;
    }
    if (str[5] == 0) {
        return 5;
    }
    if (str[6] == 0) {
        return 6;
    }
    if (str[7] == 0) {
        return 7;
    }
    return 8;
}

s32 fn_800F6CD0(void *arg0, void *arg1) {
    u8 temp_r6_6;
    u8 temp_r6_3;
    register u8 temp_r6_2;
    register u8 temp_r6_5;
    u8 temp_r6_4;
    register u8 temp_r6;
    u8 temp_r6_7;

    temp_r6 = M2C_FIELD(arg0, u8 *, 0);
    if ((s8) (int)temp_r6 != (s8) M2C_FIELD(arg1, u8 *, 0)) {
        return 0;
    }
    if ((s8) temp_r6 == 0) {
        return 1;
    }
    temp_r6_2 = M2C_FIELD(arg0, u8 *, 1);
    if ((s8) temp_r6_2 != (s8) M2C_FIELD(arg1, u8 *, 1)) {
        return 0;
    }
    if ((s8) (u32)temp_r6_2 == 0) {
        return 1;
    }
    temp_r6_3 = M2C_FIELD(arg0, u8 *, 2);
    if ((s8) (unsigned)temp_r6_3 != (s8) M2C_FIELD(arg1, u8 *, 2)) {
        return 0;
    }
    if ((s8) temp_r6_3 == 0) {
        return 1;
    }
    temp_r6_4 = M2C_FIELD(arg0, u8 *, 3);
    if ((s8) temp_r6_4 != (s8) M2C_FIELD(arg1, u8 *, 3)) {
        return 0;
    }
    if ((s8) (u32)temp_r6_4 == 0) {
        return 1;
    }
    temp_r6_5 = M2C_FIELD(arg0, u8 *, 4);
    if ((s8) (s32)temp_r6_5 != (s8) M2C_FIELD(arg1, u8 *, 4)) {
        return 0;
    }
    if ((s8) temp_r6_5 == 0) {
        return 1;
    }
    temp_r6_6 = M2C_FIELD(arg0, u8 *, 5);
    if ((s8) temp_r6_6 != (s8) M2C_FIELD(arg1, u8 *, 5)) {
        return 0;
    }
    if ((s8) (s32)temp_r6_6 == 0) {
        return 1;
    }
    temp_r6_7 = M2C_FIELD(arg0, u8 *, 6);
    if ((s8) temp_r6_7 != (s8) M2C_FIELD(arg1, u8 *, 6)) {
        return 0;
    }
    if ((s8) (unsigned)temp_r6_7 == 0) {
        return 1;
    }
    return (s8) M2C_FIELD(arg0, u8 *, 7) == (s8) M2C_FIELD(arg1, u8 *, 7);
}
