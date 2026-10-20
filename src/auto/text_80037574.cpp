// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_80359FBC;
extern volatile f32 lbl_80359FB8;
extern volatile f64 lbl_8035BF90;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8030261C[];
extern u32 lbl_8035BF98;
extern u8 lbl_80294AD0[];
void fn_8003519C(void);
void fn_800375E4(void);
extern u8 lbl_80302610[];

void fn_80037574(void) {
    lbl_80359FBC = lbl_803596E0[0];
    lbl_80359FB8 = fn_800EFDA4(lbl_8035BF90);
    __register_global_object(fn_8023DC5C(lbl_8030261C, &lbl_8035BF98, lbl_80294AD0, (void *)fn_8003519C, 400), (void *)fn_800375E4, lbl_80302610);
}

__declspec(section ".ctors") static void (*const ctor_80037574)(void) = fn_80037574;

} /* extern "C" */
