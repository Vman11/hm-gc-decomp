// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_80359F9C;
extern volatile f32 lbl_80359F98;
extern volatile f64 lbl_8035BE90;
extern u8 lbl_80301D50[];
double fn_800EFDA4(double);
void fn_80100CF4(void);
void __construct_array(void *, void *, void *, u32, u32);

void fn_80034A94(void) {
    lbl_80359F9C = lbl_803596E0[0];
    lbl_80359F98 = fn_800EFDA4(lbl_8035BE90);
    __construct_array(lbl_80301D50, (void *)fn_80100CF4, 0, 16, 140);
}

__declspec(section ".ctors") static void (*const ctor_80034A94)(void) = fn_80034A94;

} /* extern "C" */
