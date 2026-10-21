// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern f32 lbl_8035AF80;
extern u32 lbl_80364F6C;
extern u32 lbl_803306E8[];
void fn_800F6FBC(void *, void *);
void fn_801B8C00(void);
void fn_801DDE58(void *);

void fn_801B8CC4(void) {
    lbl_8035AF80 = lbl_803596E0[0];
    fn_800F6FBC(&lbl_80364F6C, &lbl_803306E8[1]);
    lbl_803306E8[0] = (u32)fn_801B8C00;
    lbl_803306E8[4] = 0;
    lbl_803306E8[5] = 0;
    fn_801DDE58(lbl_803306E8);
}

__declspec(section ".ctors") static void (*const ctor_801B8CC4)(void) = fn_801B8CC4;

} /* extern "C" */
