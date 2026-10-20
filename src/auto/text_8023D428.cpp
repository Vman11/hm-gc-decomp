// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B444;
extern volatile f32 lbl_8035B440;
extern volatile f64 lbl_803660C8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803575AC[];
extern u32 lbl_803660D0;
void fn_8023D2D8(void);
void fn_800375E4(void);
extern u8 lbl_803575A0[];

void fn_8023D428(void) {
    lbl_8035B444 = lbl_803596E0[0];
    lbl_8035B440 = fn_800EFDA4(lbl_803660C8);
    __register_global_object(fn_8023DC5C(lbl_803575AC, &lbl_803660D0, &lbl_803660D0, (void *)fn_8023D2D8, 20), (void *)fn_800375E4, lbl_803575A0);
}

__declspec(section ".ctors") static void (*const ctor_8023D428)(void) = fn_8023D428;

} /* extern "C" */
