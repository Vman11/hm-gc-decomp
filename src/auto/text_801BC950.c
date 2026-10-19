// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern f32 lbl_803596E0[];
extern f32 lbl_8035AFA8;
extern u8 lbl_802A28D0[];
extern u32 lbl_80330788[];
void fn_800F6FBC(void *, void *);
void fn_801BC8B4(void);
void fn_801DDE58(void *);

void fn_801BC950(void) {
    lbl_8035AFA8 = lbl_803596E0[0];
    fn_800F6FBC(lbl_802A28D0, &lbl_80330788[1]);
    lbl_80330788[0] = (u32)fn_801BC8B4;
    lbl_80330788[4] = 0;
    lbl_80330788[5] = 0;
    fn_801DDE58(lbl_80330788);
}
