// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80298EB0[];
f32 *fn_8023D13C(u8 *p, char *name, s32 n);
void fn_80232C90(u8 *p);

#pragma opt_propagation off
s32 fn_800881B0(u8 *p) {
    char *str = lbl_80298EB0;
    *(f32 **)(p + 904) = fn_8023D13C(p, str + 36, 1);
    *(f32 **)(p + 1084) = fn_8023D13C(p, str + 48, 1);
    *(f32 **)(p + 1076) = fn_8023D13C(p, str + 64, 1);
    *(f32 **)(p + 1088) = fn_8023D13C(p, str + 76, 1);
    *(f32 **)(p + 1092) = fn_8023D13C(p, str + 88, 1);
    *(f32 **)(p + 1096) = fn_8023D13C(p, str + 100, 1);
    *(f32 **)(p + 1100) = fn_8023D13C(p, str + 116, 1);
    *(f32 *)(p + 1104) = **(f32 **)(p + 1076) / **(f32 **)(p + 1084);
    fn_80232C90(p);
    return 0;
}
#pragma opt_propagation reset

} /* extern "C" */
