// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern f32 lbl_803596E0[];
extern f32 lbl_8035B030;
extern u8 lbl_802A2CC8[];
extern u32 lbl_80330848[];
void fn_800F6FBC(void *, void *);
void fn_801D1C2C(void);
void fn_801DDE58(void *);

void fn_801D1D78(void) {
    lbl_8035B030 = lbl_803596E0[0];
    fn_800F6FBC(lbl_802A2CC8, &lbl_80330848[1]);
    lbl_80330848[0] = (u32)fn_801D1C2C;
    lbl_80330848[4] = 0;
    lbl_80330848[5] = 0;
    fn_801DDE58(lbl_80330848);
}
