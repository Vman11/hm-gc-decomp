// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dl__FPv(void *);
void __dt__9C8013ECE4Fv(u8 *, s16);
void __dt__9C8018C334Fv(u8 *, s16);
void fn_800FCFA8(u8 *);
void fn_8013E8C0(u8 *);
void fn_80182ED8(u8 *);

u8 *__dt__9C80184CE0Fv(u8 *param_1, s16 param_2) {
    if (param_1 != 0) {
        fn_8013E8C0(param_1 + 4);
        fn_800FCFA8(param_1 + 0x224);
        fn_80182ED8(param_1);
        __dt__9C8018C334Fv(param_1 + 0x224, -1);
        __dt__9C8013ECE4Fv(param_1 + 4, -1);
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}

} /* extern "C" */
