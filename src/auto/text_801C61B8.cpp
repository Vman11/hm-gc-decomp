// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern f32 lbl_8035AFE8;
extern u32 lbl_80365004;
extern u32 lbl_803307E8[];
void fn_800F6FBC(void *, void *);
void fn_801C60FC(void);
void fn_801DDE58(void *);

void fn_801C61B8(void) {
    lbl_8035AFE8 = lbl_803596E0[0];
    fn_800F6FBC(&lbl_80365004, &lbl_803307E8[1]);
    lbl_803307E8[0] = (u32)fn_801C60FC;
    lbl_803307E8[4] = 0;
    lbl_803307E8[5] = 0;
    fn_801DDE58(lbl_803307E8);
}

__declspec(section ".ctors") static void (*const ctor_801C61B8)(void) = fn_801C61B8;

} /* extern "C" */
