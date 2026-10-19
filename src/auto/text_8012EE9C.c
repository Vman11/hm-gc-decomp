// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __ct__9C80121E80Fv[];
extern u8 __ct__9C8012E79CFv[];
extern u8 lbl_8032A510[];
extern u8 lbl_8032BD10[];
void __construct_array();

void __sinit_text_8012EE9C_cpp(void) {
    __construct_array((void *)lbl_8032A510,__ct__9C8012E79CFv,0,0x18,0x100);
    __construct_array(lbl_8032BD10,__ct__9C80121E80Fv,0,4,0x100);
}
