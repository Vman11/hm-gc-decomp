// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_80330CD8[];
extern u8 lbl_80330CE4[];
void __ct__9C802030D8Fv(void *);
void fn_80200878(void *, s32);
void fn_80203040(void *, s32);
void __register_global_object(void *, void *, void *);
void __construct_array(void *, void *, void *, u32, u32);

void fn_80200820(void) {
    __construct_array(lbl_80330CE4, (void *)__ct__9C802030D8Fv, (void *)fn_80203040, 0x1dc, 0x100);
    __register_global_object(0, (void *)fn_80200878, lbl_80330CD8);
}

__declspec(section ".ctors") static void (*const ctor_80200820)(void) = fn_80200820;

} /* extern "C" */
