// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern f32 lbl_8035AF48;
extern u32 lbl_80364EDC;
extern u32 lbl_803306A8[];
void fn_800F6FBC(void *, void *);
void fn_801AF15C(void);
void fn_801DDE58(void *);

void fn_801AF218(void) {
    lbl_8035AF48 = lbl_803596E0[0];
    fn_800F6FBC(&lbl_80364EDC, &lbl_803306A8[1]);
    lbl_803306A8[0] = (u32)fn_801AF15C;
    lbl_803306A8[4] = 0;
    lbl_803306A8[5] = 0;
    fn_801DDE58(lbl_803306A8);
}

__declspec(section ".ctors") static void (*const ctor_801AF218)(void) = fn_801AF218;

} /* extern "C" */
