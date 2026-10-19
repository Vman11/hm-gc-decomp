// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern f32 lbl_8035AEE8;

extern "C" {
}


extern "C" {
}
extern "C" void __sinit_text_801A6A3C_cpp(void) {
    lbl_8035AEE8 = lbl_803596E0[0];
}
__declspec(section ".ctors") void (*const __ctor_801A6A3C)(void) = __sinit_text_801A6A3C_cpp;

} /* extern "C" */
