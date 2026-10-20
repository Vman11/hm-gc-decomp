// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A44C;
extern volatile f32 lbl_8035A448;
extern volatile f64 lbl_80361B90;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80307054[];
extern u8 lbl_8029A878[];
extern u8 lbl_8029A884[];
void fn_800A0B78(void);
void fn_800375E4(void);
extern u8 lbl_80307048[];

void fn_800A0C90(void) {
    lbl_8035A44C = lbl_803596E0[0];
    lbl_8035A448 = fn_800EFDA4(lbl_80361B90);
    __register_global_object(fn_8023DC5C(lbl_80307054, lbl_8029A878, lbl_8029A884, (void *)fn_800A0B78, 404), (void *)fn_800375E4, lbl_80307048);
}

__declspec(section ".ctors") static void (*const ctor_800A0C90)(void) = fn_800A0C90;

} /* extern "C" */
