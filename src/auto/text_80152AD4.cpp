// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
extern u32 lbl_8032C110[];
void fn_801525F8(void *);
void fn_8014F198(void);
void fn_8014F0D8(void);
void fn_80152BA4(void);
void fn_8014EF58(void);
void fn_8014EE48(void);
void fn_8014EC90(void);
void fn_8014EB54(void);

void fn_80152AD4(void) {
    fn_801525F8(lbl_803286D0);
    fn_801525F8(lbl_8032C110);
    lbl_8032C110[104] = (u32)fn_8014F198;
    lbl_8032C110[105] = (u32)fn_8014F0D8;
    lbl_8032C110[106] = (u32)fn_80152BA4;
    lbl_8032C110[107] = (u32)fn_8014EF58;
    lbl_8032C110[108] = (u32)fn_8014EE48;
    lbl_8032C110[109] = (u32)fn_8014EC90;
    lbl_8032C110[110] = (u32)fn_8014EB54;
}

} /* extern "C" */
