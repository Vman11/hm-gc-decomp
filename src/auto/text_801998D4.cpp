// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __ct__9C8002FAE0Fv[];
extern u8 lbl_803302C8[];

extern "C" {
void __construct_array(void *, int, int, int, int);
}


extern "C" {
}
extern "C" void __sinit_text_801998D4_cpp(void) {
    __construct_array((void *)lbl_803302C8, (int)__ct__9C8002FAE0Fv, (int)0, (int)0xc, (int)0x40);
}
__declspec(section ".ctors") void (*const __ctor_801998D4)(void) = __sinit_text_801998D4_cpp;

} /* extern "C" */
