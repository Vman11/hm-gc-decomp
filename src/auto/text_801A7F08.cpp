// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern f32 lbl_8035AF00;
extern u8 lbl_802A27E8[];
extern u32 lbl_80330668[];
void fn_800F6FBC(void *, void *);
void fn_801A7E60(void);
void fn_801DDE58(void *);

void fn_801A7F08(void) {
    lbl_8035AF00 = lbl_803596E0[0];
    fn_800F6FBC(lbl_802A27E8, &lbl_80330668[1]);
    lbl_80330668[0] = (u32)fn_801A7E60;
    lbl_80330668[4] = 0;
    lbl_80330668[5] = 0;
    fn_801DDE58(lbl_80330668);
}

__declspec(section ".ctors") static void (*const ctor_801A7F08)(void) = fn_801A7F08;

} /* extern "C" */
