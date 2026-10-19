// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_80356DF8[];
void fn_8014CA08(int);

extern "C" {
}


extern "C" {
}
extern "C" void __sinit_text_80221414_cpp(void) {
    fn_8014CA08((int)lbl_80356DF8);
}
__declspec(section ".ctors") void (*const __ctor_80221414)(void) = __sinit_text_80221414_cpp;

} /* extern "C" */
