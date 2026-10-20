// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A3FC;
extern volatile f32 lbl_8035A3F8;
extern volatile f64 lbl_80361660;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306F44[];
extern u8 lbl_8029A324[];
extern u32 lbl_80361668;
void fn_8009C44C(void);
void fn_800375E4(void);
extern u8 lbl_80306F38[];

void fn_8009C4F4(void) {
    lbl_8035A3FC = lbl_803596E0[0];
    lbl_8035A3F8 = fn_800EFDA4(lbl_80361660);
    __register_global_object(fn_8023DC5C(lbl_80306F44, lbl_8029A324, &lbl_80361668, (void *)fn_8009C44C, 784), (void *)fn_800375E4, lbl_80306F38);
}

__declspec(section ".ctors") static void (*const ctor_8009C4F4)(void) = fn_8009C4F4;

} /* extern "C" */
