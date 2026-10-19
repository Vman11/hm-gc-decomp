// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E47E8[];
void __ct__9C800F92E8Fv(void);

} /* extern "C" */

extern "C" {
void __ct__9C8013ECE4Fv(int);
}
struct C800F92E8 { char pad[0x4]; C800F92E8(void); ~C800F92E8(); };
struct C8012F46C : C800F92E8 {  C8012F46C(void); };

C8012F46C::C8012F46C() : C800F92E8() {
    *(u8 **)((char *)this + 0x10) = lbl_802E47E8;
    __ct__9C8013ECE4Fv((int)((char *)this + 0x14));
    *(u32 *)((char *)this + 0x1c) = 0;
    *(u32 *)((char *)this + 0x20) = 0;
    *(u32 *)((char *)this + 0x24) = 0;
}
