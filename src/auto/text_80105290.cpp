// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80129A9C[];
void __dl__FPv(void *);
void __dt__9C8010500CFv(u8 *, s16);

u8 *__dt__9C80105818Fv(u8 *param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x24) = __vt__9C80129A9C;
        __dt__9C8010500CFv(param_1, 0);
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}

} /* extern "C" */
