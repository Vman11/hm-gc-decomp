// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_8032F028[];
void __ct__9C8002FAE0Fv(void);
void fn_80135CB0(void);
void __construct_array(void *, void *, void *, u32, u32);

void fn_80174828(void) {
    __construct_array(lbl_8032F028 + 144, (void *)__ct__9C8002FAE0Fv, 0, 12, 32);
    __construct_array(lbl_8032F028 + 656, (void *)__ct__9C8002FAE0Fv, 0, 12, 32);
    __construct_array(lbl_8032F028 + 1040, (void *)fn_80135CB0, 0, 16, 32);
}

__declspec(section ".ctors") static void (*const ctor_80174828)(void) = fn_80174828;

} /* extern "C" */
