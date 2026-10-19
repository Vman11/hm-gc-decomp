// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void __dl__FPv();
void __dt__9C8013ECE4Fv();
void __dt__9C8018C334Fv();
void fn_800FCFA8();
void fn_8013E8C0();
void fn_80182ED8();

s32 __dt__9C80184CE0Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        fn_8013E8C0(param_1 + 4);
        fn_800FCFA8(param_1 + 0x224);
        fn_80182ED8(param_1);
        __dt__9C8018C334Fv(param_1 + 0x224,0xffffffff);
        __dt__9C8013ECE4Fv(param_1 + 4,0xffffffff);
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}
