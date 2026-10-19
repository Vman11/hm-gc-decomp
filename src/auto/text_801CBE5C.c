// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern f32 lbl_803596E0[];
extern f32 lbl_8035B008;
extern u8 lbl_802A2970[];
extern u32 lbl_80330828[];
void fn_800F6FBC(void *, void *);
void fn_801CBD8C(void);
void fn_801DDE58(void *);

void fn_801CBE5C(void) {
    lbl_8035B008 = lbl_803596E0[0];
    fn_800F6FBC(lbl_802A2970, &lbl_80330828[1]);
    lbl_80330828[0] = (u32)fn_801CBD8C;
    lbl_80330828[4] = 0;
    lbl_80330828[5] = 0;
    fn_801DDE58(lbl_80330828);
}
