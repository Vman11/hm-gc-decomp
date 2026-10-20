// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A4FC;
extern volatile f32 lbl_8035A4F8;
extern volatile f64 lbl_80362E08;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80307444[];
extern u8 lbl_8029BAC0[];
extern u32 lbl_80362E10;
void fn_800B0E64(void);
void fn_800375E4(void);
extern u8 lbl_80307438[];

void fn_800B1048(void) {
    lbl_8035A4FC = lbl_803596E0[0];
    lbl_8035A4F8 = fn_800EFDA4(lbl_80362E08);
    __register_global_object(fn_8023DC5C(lbl_80307444, lbl_8029BAC0, &lbl_80362E10, (void *)fn_800B0E64, 296), (void *)fn_800375E4, lbl_80307438);
}

__declspec(section ".ctors") static void (*const ctor_800B1048)(void) = fn_800B1048;

} /* extern "C" */
