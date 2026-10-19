// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C8018F358Fv[];
void fn_800E1E88(int, int);

void fn_8018F3D4(u32 *param_1) {
    if (param_1[2] != 0) {
        fn_800E1E88((int)(param_1[2]), (int)(__dt__9C8018F358Fv));
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
}

} /* extern "C" */
