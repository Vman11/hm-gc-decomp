// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern f32 lbl_8035AF08;
extern u8 lbl_802A27F8[];
extern u32 lbl_80330688[];
void fn_800F6FBC(void *, void *);
void fn_801AA6CC(void);
void fn_801DDE58(void *);

void fn_801AA78C(void) {
    lbl_8035AF08 = lbl_803596E0[0];
    fn_800F6FBC(lbl_802A27F8, &lbl_80330688[1]);
    lbl_80330688[0] = (u32)fn_801AA6CC;
    lbl_80330688[4] = 0;
    lbl_80330688[5] = 0;
    fn_801DDE58(lbl_80330688);
}

__declspec(section ".ctors") static void (*const ctor_801AA78C)(void) = fn_801AA78C;

} /* extern "C" */
