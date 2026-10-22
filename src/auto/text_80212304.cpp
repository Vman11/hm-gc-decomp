// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A72C0[];
extern char lbl_80365858[0x5];
extern char lbl_80365860[0x5];
extern char lbl_80365868[0x5];
extern char lbl_80365870[0x5];
void fn_80060568(void *, s32, s32, s32);
s32 strncmp(u8 *, void *, s32);
void *memcpy(void *, const void *, unsigned long);
void *memset(void *, int, unsigned long);

void fn_80212304(u32 *param_1, u8 *param_2) {
    if (*param_1 != 0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        memset(param_1 + 5, 0, 0x10);
    }
    if (strncmp(param_2, lbl_80365858, 4) == 0) {
        *param_1 = 1;
    } else if (strncmp(param_2, lbl_80365860, 4) == 0) {
        *param_1 = 2;
    } else if (strncmp(param_2, lbl_80365868, 4) == 0) {
        *param_1 = 3;
    } else if (strncmp(param_2, lbl_80365870, 4) == 0) {
        *param_1 = 4;
    } else {
        fn_80060568(lbl_802A72C0, 0, 0, 0);
    }
    param_1[1] = (u32)param_2[4] + ((u32)param_2[5] << 8) + ((u32)param_2[6] << 16) + ((u32)param_2[7] << 24);
    param_1[2] = (u32)param_2[8] + ((u32)param_2[9] << 8) + ((u32)param_2[10] << 16) + ((u32)param_2[11] << 24);
    memcpy(param_1 + 5, param_2 + 0xc, 0xf);
    param_1[3] = (u32)param_2[0x1c] + ((u32)param_2[0x1d] << 8);
    param_1[4] = (u32)param_2[0x1e];
}

} /* extern "C" */
