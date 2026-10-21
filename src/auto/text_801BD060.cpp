// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern f32 lbl_8035AFB0;
extern u8 lbl_802A28E0[];
extern u32 lbl_803307A8[];
void fn_800F6FBC(void *, void *);
void fn_801BCF94(void);
void fn_801DDE58(void *);

void fn_801BD060(void) {
    lbl_8035AFB0 = lbl_803596E0[0];
    fn_800F6FBC(lbl_802A28E0, &lbl_803307A8[1]);
    lbl_803307A8[0] = (u32)fn_801BCF94;
    lbl_803307A8[4] = 0;
    lbl_803307A8[5] = 0;
    fn_801DDE58(lbl_803307A8);
}

__declspec(section ".ctors") static void (*const ctor_801BD060)(void) = fn_801BD060;

} /* extern "C" */
