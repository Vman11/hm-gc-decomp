// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B314;
extern volatile f32 lbl_8035B310;
extern volatile f64 lbl_80365D20;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80356F74[];
extern u8 lbl_802A856C[];
extern u8 lbl_802A8590[];
void fn_80229F08(void);
void fn_800375E4(void);
extern u8 lbl_80356F68[];

void fn_8022A048(void) {
    lbl_8035B314 = lbl_803596E0[0];
    lbl_8035B310 = fn_800EFDA4(lbl_80365D20);
    __register_global_object(fn_8023DC5C(lbl_80356F74, lbl_802A856C, lbl_802A8590, (void *)fn_80229F08, 612), (void *)fn_800375E4, lbl_80356F68);
}

__declspec(section ".ctors") static void (*const ctor_8022A048)(void) = fn_8022A048;

} /* extern "C" */
