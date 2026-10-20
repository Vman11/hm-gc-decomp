// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B2FC;
extern volatile f32 lbl_8035B2F8;
extern volatile f64 lbl_80365C90;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80356F44[];
extern u8 lbl_802A8498[];
extern u32 lbl_80365C98;
void fn_80227F9C(void);
void fn_800375E4(void);
extern u8 lbl_80356F38[];

void fn_802280D4(void) {
    lbl_8035B2FC = lbl_803596E0[0];
    lbl_8035B2F8 = fn_800EFDA4(lbl_80365C90);
    __register_global_object(fn_8023DC5C(lbl_80356F44, lbl_802A8498, &lbl_80365C98, (void *)fn_80227F9C, 596), (void *)fn_800375E4, lbl_80356F38);
}

__declspec(section ".ctors") static void (*const ctor_802280D4)(void) = fn_802280D4;

} /* extern "C" */
