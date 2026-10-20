// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A1A4;
extern volatile f32 lbl_8035A1A0;
extern volatile f64 lbl_8035E508;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80302B3C[];
extern u8 lbl_802971CC[];
extern u32 lbl_8035E510;
void fn_8005FA14(void);
void fn_800375E4(void);
extern u8 lbl_80302B30[];

void fn_8005FBEC(void) {
    lbl_8035A1A4 = lbl_803596E0[0];
    lbl_8035A1A0 = fn_800EFDA4(lbl_8035E508);
    __register_global_object(fn_8023DC5C(lbl_80302B3C, lbl_802971CC, &lbl_8035E510, (void *)fn_8005FA14, 888), (void *)fn_800375E4, lbl_80302B30);
}

__declspec(section ".ctors") static void (*const ctor_8005FBEC)(void) = fn_8005FBEC;

} /* extern "C" */
