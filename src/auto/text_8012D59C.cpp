// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035ABC8;
extern u8 lbl_80328C90[];
void fn_8012C740(void);
void __construct_array(void *, void *, void *, u32, u32);

void fn_8012D59C(void) {
    lbl_8035ABC8 = lbl_803596E0[0];
    __construct_array(lbl_80328C90, (void *)fn_8012C740, 0, 24, 256);
}

__declspec(section ".ctors") static void (*const ctor_8012D59C)(void) = fn_8012D59C;

} /* extern "C" */
