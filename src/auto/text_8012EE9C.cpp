// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __ct__9C80121E80Fv[];
extern u8 __ct__9C8012E79CFv[];
extern u8 lbl_8032A510[];
extern u8 lbl_8032BD10[];
void __construct_array(int, int, int, int, int);

void __sinit_text_8012EE9C_cpp(void) {
    __construct_array((int)(lbl_8032A510), (int)(__ct__9C8012E79CFv), (int)(0), (int)(0x18), (int)(0x100));
    __construct_array((int)(lbl_8032BD10), (int)(__ct__9C80121E80Fv), (int)(0), (int)(4), (int)(0x100));
}

__declspec(section ".ctors") static void (*const ctor___sinit_text_8012EE9C_cpp)(void) = __sinit_text_8012EE9C_cpp;

} /* extern "C" */
