// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B53C;
extern volatile f32 lbl_8035B538;
extern volatile f64 lbl_80366318;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8035765C[];
extern u8 lbl_802A922C[];
extern u32 lbl_80366320;
void fn_8024A16C(void);
void fn_800375E4(void);
extern u8 lbl_80357650[];

void fn_8024A27C(void) {
    lbl_8035B53C = lbl_803596E0[0];
    lbl_8035B538 = fn_800EFDA4(lbl_80366318);
    __register_global_object(fn_8023DC5C(lbl_8035765C, lbl_802A922C, &lbl_80366320, (void *)fn_8024A16C, 280), (void *)fn_800375E4, lbl_80357650);
}

__declspec(section ".ctors") static void (*const ctor_8024A27C)(void) = fn_8024A27C;

} /* extern "C" */
