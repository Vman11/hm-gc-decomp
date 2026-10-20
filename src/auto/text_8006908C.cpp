// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A204;
extern volatile f32 lbl_8035A200;
extern volatile f64 lbl_8035E800;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306774[];
extern u32 lbl_8035E808;
extern u8 lbl_802978F8[];
void fn_80066DB4(void);
void fn_800375E4(void);
extern u8 lbl_80306768[];

void fn_8006908C(void) {
    lbl_8035A204 = lbl_803596E0[0];
    lbl_8035A200 = fn_800EFDA4(lbl_8035E800);
    __register_global_object(fn_8023DC5C(lbl_80306774, &lbl_8035E808, lbl_802978F8, (void *)fn_80066DB4, 436), (void *)fn_800375E4, lbl_80306768);
}

__declspec(section ".ctors") static void (*const ctor_8006908C)(void) = fn_8006908C;

} /* extern "C" */
