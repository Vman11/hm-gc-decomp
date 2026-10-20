// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B364;
extern volatile f32 lbl_8035B360;
extern volatile f64 lbl_80365E70;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80357004[];
extern u8 lbl_802A8798[];
extern u32 lbl_80365E78;
void fn_8023320C(void);
void fn_800375E4(void);
extern u8 lbl_80356FF8[];

void fn_802333F0(void) {
    lbl_8035B364 = lbl_803596E0[0];
    lbl_8035B360 = fn_800EFDA4(lbl_80365E70);
    __register_global_object(fn_8023DC5C(lbl_80357004, lbl_802A8798, &lbl_80365E78, (void *)fn_8023320C, 720), (void *)fn_800375E4, lbl_80356FF8);
}

__declspec(section ".ctors") static void (*const ctor_802333F0)(void) = fn_802333F0;

} /* extern "C" */
