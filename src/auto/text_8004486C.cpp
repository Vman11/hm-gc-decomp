// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A0F4;
extern volatile f32 lbl_8035A0F0;
extern volatile f64 lbl_8035CA88;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8030271C[];
extern u8 lbl_80295650[];
extern u32 lbl_8035CA90;
void fn_800446D8(void);
void fn_800375E4(void);
extern u8 lbl_80302710[];

void fn_8004486C(void) {
    lbl_8035A0F4 = lbl_803596E0[0];
    lbl_8035A0F0 = fn_800EFDA4(lbl_8035CA88);
    __register_global_object(fn_8023DC5C(lbl_8030271C, lbl_80295650, &lbl_8035CA90, (void *)fn_800446D8, 352), (void *)fn_800375E4, lbl_80302710);
}

__declspec(section ".ctors") static void (*const ctor_8004486C)(void) = fn_8004486C;

} /* extern "C" */
