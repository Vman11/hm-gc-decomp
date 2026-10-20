// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A134;
extern volatile f32 lbl_8035A130;
extern volatile f64 lbl_8035D398;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8030289C[];
extern u8 lbl_80295E34[];
extern u32 lbl_8035D3A0;
void fn_8004C0CC(void);
void fn_800375E4(void);
extern u8 lbl_80302890[];

void fn_8004C19C(void) {
    lbl_8035A134 = lbl_803596E0[0];
    lbl_8035A130 = fn_800EFDA4(lbl_8035D398);
    __register_global_object(fn_8023DC5C(lbl_8030289C, lbl_80295E34, &lbl_8035D3A0, (void *)fn_8004C0CC, 492), (void *)fn_800375E4, lbl_80302890);
}

__declspec(section ".ctors") static void (*const ctor_8004C19C)(void) = fn_8004C19C;

} /* extern "C" */
