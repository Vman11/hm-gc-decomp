// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B33C;
extern volatile f32 lbl_8035B338;
extern volatile f64 lbl_80365D70;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80356FA4[];
extern u8 lbl_802A8620[];
extern u32 lbl_80365D78;
void fn_8022E904(void);
void fn_800375E4(void);
extern u8 lbl_80356F98[];

void fn_8022EA44(void) {
    lbl_8035B33C = lbl_803596E0[0];
    lbl_8035B338 = fn_800EFDA4(lbl_80365D70);
    __register_global_object(fn_8023DC5C(lbl_80356FA4, lbl_802A8620, &lbl_80365D78, (void *)fn_8022E904, 280), (void *)fn_800375E4, lbl_80356F98);
}

__declspec(section ".ctors") static void (*const ctor_8022EA44)(void) = fn_8022EA44;

} /* extern "C" */
