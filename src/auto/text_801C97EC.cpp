// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern f32 lbl_80365010;
void fn_801BD8A0(void *, s32, s32, void *, f32);

void fn_801C97EC(u8 *p) {
    if (M2C_FIELD(p, void **, 368) != 0) {
        if (M2C_FIELD(p, u8 *, 564) & 1) {
            fn_801BD8A0(M2C_FIELD(p, void **, 368), 0, 8, p, lbl_80365010);
        } else {
            fn_801BD8A0(M2C_FIELD(p, void **, 368), 0, 4, p, lbl_80365010);
        }
        fn_801BD8A0(M2C_FIELD(p, void **, 368), 1, 64, p, lbl_80365010);
        fn_801BD8A0(M2C_FIELD(p, void **, 368), 2, 2048, p, lbl_80365010);
    }
    if (M2C_FIELD(p, void **, 372) != 0) {
        if (M2C_FIELD(p, u8 *, 564) & 8) {
            fn_801BD8A0(M2C_FIELD(p, void **, 372), 0, 256, p, lbl_80365010);
        } else {
            fn_801BD8A0(M2C_FIELD(p, void **, 372), 0, 512, p, lbl_80365010);
        }
        fn_801BD8A0(M2C_FIELD(p, void **, 372), 1, 1, p, lbl_80365010);
        fn_801BD8A0(M2C_FIELD(p, void **, 372), 2, 32, p, lbl_80365010);
    }
}

} /* extern "C" */
