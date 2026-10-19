// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C80109410Fv[];
extern u8 __dt__9C801E5944Fv[];
extern u8 __dt__9C801E3708Fv[];
extern u8 __dt__9C801ECD58Fv[];
extern u8 __dt__9C801FA0D4Fv[];
void fn_800E1E88(int, int);

void fn_801E580C(u32 *param_1) {
    if (param_1[5] != 0) {
        fn_800E1E88((int)(param_1[5]), (int)(__dt__9C801E5944Fv));
    }
    if (param_1[1] != 0) {
        fn_800E1E88((int)(param_1[1]), (int)(__dt__9C801E3708Fv));
    }
    if (param_1[2] != 0) {
        fn_800E1E88((int)(param_1[2]), (int)(__dt__9C801ECD58Fv));
    }
    if (param_1[3] != 0) {
        fn_800E1E88((int)(param_1[3]), (int)(__dt__9C801FA0D4Fv));
    }
    if (param_1[4] != 0) {
        fn_800E1E88((int)(param_1[4]), (int)(__dt__9C80109410Fv));
    }
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    param_1[5] = 0;
    *(u16 *)((s32)param_1 + 0x1a) = 0;
    *(u16 *)(param_1 + 7) = 0;
    *(u16 *)((s32)param_1 + 0x1e) = 0;
    *(u16 *)(param_1 + 6) = 0;
    *(u16 *)(param_1 + 8) = 0;
}

} /* extern "C" */
