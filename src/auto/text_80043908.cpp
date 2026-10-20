// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A0EC;
extern volatile f32 lbl_8035A0E8;
extern volatile f64 lbl_8035C890;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803026EC[];
extern u8 lbl_802954F0[];
extern u8 lbl_802954FC[];
void fn_80043820(void);
void fn_800375E4(void);
extern u8 lbl_803026E0[];

void fn_80043908(void) {
    lbl_8035A0EC = lbl_803596E0[0];
    lbl_8035A0E8 = fn_800EFDA4(lbl_8035C890);
    __register_global_object(fn_8023DC5C(lbl_803026EC, lbl_802954F0, lbl_802954FC, (void *)fn_80043820, 436), (void *)fn_800375E4, lbl_803026E0);
}

__declspec(section ".ctors") static void (*const ctor_80043908)(void) = fn_80043908;

} /* extern "C" */
