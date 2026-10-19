// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EEFE8[];
void __ct__9C800F92E8Fv(void);
void fn_801F9F5C(int);

extern "C" {
}
struct C800F92E8 { char pad[0x4]; C800F92E8(void); ~C800F92E8(); };
struct C801FA0D4 : C800F92E8 {  C801FA0D4(void); };

C801FA0D4::C801FA0D4() : C800F92E8() {
    *(u8 **)((char *)this + 0x10) = lbl_802EEFE8;
    fn_801F9F5C((int)this);
}

} /* extern "C" */
