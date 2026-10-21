// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern f32 lbl_8035B038;
extern u8 lbl_802A2CD8[];
extern u32 lbl_80330868[];
void fn_800F6FBC(void *, void *);
void fn_801D6ADC(void);
void fn_801DDE58(void *);

void fn_801D6BA8(void) {
    lbl_8035B038 = lbl_803596E0[0];
    fn_800F6FBC(lbl_802A2CD8, &lbl_80330868[1]);
    lbl_80330868[0] = (u32)fn_801D6ADC;
    lbl_80330868[4] = 0;
    lbl_80330868[5] = 0;
    fn_801DDE58(lbl_80330868);
}

__declspec(section ".ctors") static void (*const ctor_801D6BA8)(void) = fn_801D6BA8;

} /* extern "C" */
