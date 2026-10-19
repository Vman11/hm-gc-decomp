// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {}
extern "C" f32 lbl_803596E0[];
f32 lbl_8035AB68;
extern "C" void __sinit_text_801201A4_cpp(void) { lbl_8035AB68 = lbl_803596E0[0]; }
__declspec(section ".ctors") void (*const __ctor_801201A4)(void) = __sinit_text_801201A4_cpp;
