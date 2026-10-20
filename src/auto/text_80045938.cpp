// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A10C;
extern volatile f32 lbl_8035A108;
extern volatile f64 lbl_8035CC50;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803027AC[];
extern u8 lbl_802957B8[];
extern u32 lbl_8035CC58;
void fn_80045808(void);
void fn_800375E4(void);
extern u8 lbl_803027A0[];

void fn_80045938(void) {
    lbl_8035A10C = lbl_803596E0[0];
    lbl_8035A108 = fn_800EFDA4(lbl_8035CC50);
    __register_global_object(fn_8023DC5C(lbl_803027AC, lbl_802957B8, &lbl_8035CC58, (void *)fn_80045808, 292), (void *)fn_800375E4, lbl_803027A0);
}

__declspec(section ".ctors") static void (*const ctor_80045938)(void) = fn_80045938;

} /* extern "C" */
