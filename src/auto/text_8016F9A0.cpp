// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_8032ED28[];
extern u8 lbl_8032ED1C[];
void __ct__9C80175748Fv(void);
void __dt__9C80175748Fv(void);
void fn_8016F9F8(void);
void __construct_array(void *, void *, void *, u32, u32);
void __register_global_object(void *, void *, void *);

void fn_8016F9A0(void) {
    __construct_array(lbl_8032ED28, (void *)__ct__9C80175748Fv, (void *)__dt__9C80175748Fv, 48, 16);
    __register_global_object(0, (void *)fn_8016F9F8, lbl_8032ED1C);
}

__declspec(section ".ctors") static void (*const ctor_8016F9A0)(void) = fn_8016F9A0;

} /* extern "C" */
