// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern f32 lbl_803596E0[];
extern f32 lbl_8035AF90;
extern u32 lbl_80364F94;
extern u32 lbl_80330728[];
void fn_800F6FBC(void *, void *);
void fn_801BAEFC(void);
void fn_801DDE58(void *);

void fn_801BAFC0(void) {
    lbl_8035AF90 = lbl_803596E0[0];
    fn_800F6FBC(&lbl_80364F94, &lbl_80330728[1]);
    lbl_80330728[0] = (u32)fn_801BAEFC;
    lbl_80330728[4] = 0;
    lbl_80330728[5] = 0;
    fn_801DDE58(lbl_80330728);
}
