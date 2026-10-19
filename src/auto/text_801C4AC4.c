// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern f32 lbl_803596E0[];
extern f32 lbl_8035AFE0;
extern u32 lbl_80364FEC;
extern u32 lbl_803307C8[];
void fn_800F6FBC(void *, void *);
void fn_801C49D4(void);
void fn_801DDE58(void *);

void fn_801C4AC4(void) {
    lbl_8035AFE0 = lbl_803596E0[0];
    fn_800F6FBC(&lbl_80364FEC, &lbl_803307C8[1]);
    lbl_803307C8[0] = (u32)fn_801C49D4;
    lbl_803307C8[4] = 0;
    lbl_803307C8[5] = 0;
    fn_801DDE58(lbl_803307C8);
}
