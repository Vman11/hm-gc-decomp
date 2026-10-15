/* Functions from 0x801EFA90 to 0x801EFB30, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    s32 a, b, c;
} Vec3i_801EFA90;

extern u8 lbl_802E2558[];
extern u8 lbl_802EE7A8[];
extern Vec3i_801EFA90 lbl_8029BF10;
extern u32 lbl_80365438;

extern s32 lbl_8035B0C0;
void fn_801EFA90(void **arg0) {
    arg0[0] = lbl_802E2558;
    arg0[0] = lbl_802EE7A8;
    arg0[3] = 0;
    arg0[2] = 0;
    arg0[7] = 0;
    *(Vec3i_801EFA90 *)&arg0[4] = lbl_8029BF10;
    arg0[8] = 0;
    arg0[9] = 0;
}

void fn_801EFAE4(s32 arg0) {
    lbl_8035B0C0 = arg0;
}

void fn_801EFAEC(void *arg0) {
    void *temp_r3;
    if (*(u32 *)((char *)arg0 + 0x24) & 2) {
        temp_r3 = *(void **)((char *)arg0 + 0x28);
        *(u32 *)((char *)temp_r3 + 0x24) &= ~2U;
    }
}

