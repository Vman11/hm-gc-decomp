// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_8032E780[];
extern u8 lbl_8032E794[];
void fn_80148310(int);

extern "C" {
}


extern "C" {
}
extern "C" void __sinit_text_80161210_cpp(void) {
    fn_80148310((int)lbl_8032E780);
    fn_80148310((int)lbl_8032E794);
}
__declspec(section ".ctors") void (*const __ctor_80161210)(void) = __sinit_text_80161210_cpp;

} /* extern "C" */
