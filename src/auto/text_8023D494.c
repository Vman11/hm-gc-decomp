/* Functions from 0x8023D494 to 0x8023D5C4, found by decomp-toolkit. */
#include "common.h"

f32 fn_8023D494(void *arg0, f32 farg0, f32 farg1) {
    extern f32 lbl_803660DC;
    f32 vel;
    f32 dv;
        f32 force;
    M2C_FIELD(arg0, f32 *, 4) = farg1;
    M2C_FIELD(arg0, f32 *, 0x14) = M2C_FIELD(arg0, f32 *, 0x10) * (farg1 - M2C_FIELD(arg0, f32 *, 8));
    M2C_FIELD(arg0, f32 *, 0x1C) = M2C_FIELD(arg0, f32 *, 0xC) * M2C_FIELD(arg0, f32 *, 0x18);
    force = M2C_FIELD(arg0, f32 *, 0x14) + M2C_FIELD(arg0, f32 *, 0x1C);
    M2C_FIELD(arg0, f32 *, 0x20) = force * M2C_FIELD(arg0, f32 *, 0x24);
    dv = M2C_FIELD(arg0, f32 *, 0x20) * farg0;
    vel = M2C_FIELD(arg0, f32 *, 0xC);
    force = lbl_803660DC * dv + vel;
    M2C_FIELD(arg0, f32 *, 0xC) = vel + dv;
    M2C_FIELD(arg0, f32 *, 8) = force * farg0 + M2C_FIELD(arg0, f32 *, 8);
    return M2C_FIELD(arg0, f32 *, 8);
}

s32 fn_8023D504(void *arg0) {
    extern f32 lbl_803660D8;
    extern f32 lbl_803660E0;
    extern f32 lbl_803660E4;

    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, f32 *, 0x10) = lbl_803660D8;
        M2C_FIELD(arg0, f32 *, 8) = lbl_803660E0;
        M2C_FIELD(arg0, f32 *, 4) = lbl_803660E0;
        M2C_FIELD(arg0, f32 *, 0xC) = lbl_803660E0;
        M2C_FIELD(arg0, f32 *, 0x14) = lbl_803660E0;
        M2C_FIELD(arg0, f32 *, 0x18) = lbl_803660E4;
        M2C_FIELD(arg0, f32 *, 0x1C) = lbl_803660D8;
        M2C_FIELD(arg0, f32 *, 0x20) = lbl_803660E0;
        M2C_FIELD(arg0, f32 *, 0x24) = lbl_803660D8;
    }
    M2C_FIELD(arg0, s32 *, 0) = 1;
    return 0;
}

void fn_8023D570(void *arg0) {
    extern f32 lbl_803660D8;
    extern f32 lbl_803660E0;
    extern f32 lbl_803660E4;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_803660D8;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_803660E0;
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_803660E0;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_803660E0;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_803660E0;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_803660E4;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_803660D8;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_803660E0;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_803660D8;
}
