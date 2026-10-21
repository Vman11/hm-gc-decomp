// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern f32 lbl_8035AF98;
extern u32 lbl_80364FA0;
extern u32 lbl_80330748[];
void fn_800F6FBC(void *, void *);
void fn_801BB148(void);
void fn_801DDE58(void *);

void fn_801BB1EC(void) {
    lbl_8035AF98 = lbl_803596E0[0];
    fn_800F6FBC(&lbl_80364FA0, &lbl_80330748[1]);
    lbl_80330748[0] = (u32)fn_801BB148;
    lbl_80330748[4] = 0;
    lbl_80330748[5] = 0;
    fn_801DDE58(lbl_80330748);
}

__declspec(section ".ctors") static void (*const ctor_801BB1EC)(void) = fn_801BB1EC;

} /* extern "C" */
