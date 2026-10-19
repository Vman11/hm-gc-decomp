// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern f32 lbl_803596E0[];
extern f32 lbl_8035AFF8;
extern u32 lbl_8036503C;
extern u32 lbl_80330808[];
void fn_800F6FBC(void *, void *);
void fn_801CB160(void);
void fn_801DDE58(void *);

void fn_801CB2A8(void) {
    lbl_8035AFF8 = lbl_803596E0[0];
    fn_800F6FBC(&lbl_8036503C, &lbl_80330808[1]);
    lbl_80330808[0] = (u32)fn_801CB160;
    lbl_80330808[4] = 0;
    lbl_80330808[5] = 0;
    fn_801DDE58(lbl_80330808);
}
