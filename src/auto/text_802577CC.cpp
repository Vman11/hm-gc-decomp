// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B6AC;
extern volatile f32 lbl_8035B6A8;
extern volatile f64 lbl_80366700;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8035799C[];
extern u32 lbl_80366708;
extern u32 lbl_803666F4;
void fn_80256DFC(void);
void fn_800375E4(void);
extern u8 lbl_80357990[];

void fn_802577CC(void) {
    lbl_8035B6AC = lbl_803596E0[0];
    lbl_8035B6A8 = fn_800EFDA4(lbl_80366700);
    __register_global_object(fn_8023DC5C(lbl_8035799C, &lbl_80366708, &lbl_803666F4, (void *)fn_80256DFC, 192), (void *)fn_800375E4, lbl_80357990);
}

__declspec(section ".ctors") static void (*const ctor_802577CC)(void) = fn_802577CC;

} /* extern "C" */
