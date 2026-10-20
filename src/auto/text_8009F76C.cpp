// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A444;
extern volatile f32 lbl_8035A440;
extern volatile f64 lbl_803619B0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80307024[];
extern u8 lbl_8029A6E8[];
extern u32 lbl_803619B8;
void fn_8009F64C(void);
void fn_800375E4(void);
extern u8 lbl_80307018[];

void fn_8009F76C(void) {
    lbl_8035A444 = lbl_803596E0[0];
    lbl_8035A440 = fn_800EFDA4(lbl_803619B0);
    __register_global_object(fn_8023DC5C(lbl_80307024, lbl_8029A6E8, &lbl_803619B8, (void *)fn_8009F64C, 280), (void *)fn_800375E4, lbl_80307018);
}

__declspec(section ".ctors") static void (*const ctor_8009F76C)(void) = fn_8009F76C;

} /* extern "C" */
