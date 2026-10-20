// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A374;
extern volatile f32 lbl_8035A370;
extern volatile f64 lbl_803601D8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306C74[];
extern u8 lbl_802991E0[];
extern u8 lbl_802991EC[];
void fn_8008C2A4(void);
void fn_800375E4(void);
extern u8 lbl_80306C68[];

void fn_8008C344(void) {
    lbl_8035A374 = lbl_803596E0[0];
    lbl_8035A370 = fn_800EFDA4(lbl_803601D8);
    __register_global_object(fn_8023DC5C(lbl_80306C74, lbl_802991E0, lbl_802991EC, (void *)fn_8008C2A4, 320), (void *)fn_800375E4, lbl_80306C68);
}

__declspec(section ".ctors") static void (*const ctor_8008C344)(void) = fn_8008C344;

} /* extern "C" */
