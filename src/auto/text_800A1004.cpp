// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A454;
extern volatile f32 lbl_8035A450;
extern volatile f64 lbl_80361BB8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80307084[];
extern u8 lbl_8029A8A8[];
extern u32 lbl_80361BC0;
void fn_800A0EE4(void);
void fn_800375E4(void);
extern u8 lbl_80307078[];

void fn_800A1004(void) {
    lbl_8035A454 = lbl_803596E0[0];
    lbl_8035A450 = fn_800EFDA4(lbl_80361BB8);
    __register_global_object(fn_8023DC5C(lbl_80307084, lbl_8029A8A8, &lbl_80361BC0, (void *)fn_800A0EE4, 280), (void *)fn_800375E4, lbl_80307078);
}

__declspec(section ".ctors") static void (*const ctor_800A1004)(void) = fn_800A1004;

} /* extern "C" */
