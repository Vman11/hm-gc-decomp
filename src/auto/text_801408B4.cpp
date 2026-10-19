// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E5F98[];
void __ct__9C800F92E8Fv(void);

} /* extern "C" */

extern "C" {
void fn_8021C810(int);
}
struct C800F92E8 { char pad[0x4]; C800F92E8(void); ~C800F92E8(); };
struct C801408B4 : C800F92E8 {  C801408B4(void); };

C801408B4::C801408B4() : C800F92E8() {
    *(u8 **)((char *)this + 0x10) = lbl_802E5F98;
    fn_8021C810((int)((char *)this + 0x14));
    *(u32 *)((char *)this + 0x2c) = 0;
    *(u32 *)((char *)this + 0x30) = 0;
    *(u32 *)((char *)this + 0x34) = 0;
    *(u32 *)((char *)this + 0x38) = 0;
    *(u32 *)((char *)this + 0x3c) = 0;
    *(u32 *)((char *)this + 0x40) = 0;
    *(u32 *)((char *)this + 0x44) = 0;
    *(u32 *)((char *)this + 0x48) = 0;
}
