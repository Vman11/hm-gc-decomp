// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A464;
extern volatile f32 lbl_8035A460;
extern volatile f64 lbl_80361C78;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803070B4[];
extern u8 lbl_8029AAF8[];
extern u32 lbl_80361C80;
void fn_800A34D8(void);
void fn_800375E4(void);
extern u8 lbl_803070A8[];

void fn_800A3618(void) {
    lbl_8035A464 = lbl_803596E0[0];
    lbl_8035A460 = fn_800EFDA4(lbl_80361C78);
    __register_global_object(fn_8023DC5C(lbl_803070B4, lbl_8029AAF8, &lbl_80361C80, (void *)fn_800A34D8, 888), (void *)fn_800375E4, lbl_803070A8);
}

__declspec(section ".ctors") static void (*const ctor_800A3618)(void) = fn_800A3618;

} /* extern "C" */
