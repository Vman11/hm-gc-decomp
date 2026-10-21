// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern f32 lbl_8035AF88;
extern u32 lbl_80364F7C;
extern u32 lbl_80330708[];
void fn_800F6FBC(void *, void *);
void fn_801BA01C(void);
void fn_801DDE58(void *);

void fn_801BA0CC(void) {
    lbl_8035AF88 = lbl_803596E0[0];
    fn_800F6FBC(&lbl_80364F7C, &lbl_80330708[1]);
    lbl_80330708[0] = (u32)fn_801BA01C;
    lbl_80330708[4] = 0;
    lbl_80330708[5] = 0;
    fn_801DDE58(lbl_80330708);
}

__declspec(section ".ctors") static void (*const ctor_801BA0CC)(void) = fn_801BA0CC;

} /* extern "C" */
