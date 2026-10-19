// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F218C[];
extern s32 lbl_8035B5E4;
void __ct__9C800F92E8Fv(void);
void fn_801188F8(int);

extern "C" {
}
struct C800F92E8 { char pad[0x4]; C800F92E8(void); ~C800F92E8(); };
struct C80252244 : C800F92E8 {  C80252244(void); };

C80252244::C80252244() : C800F92E8() {
    *(u8 **)((char *)this + 0x10) = lbl_802F218C;
    fn_801188F8((int)((char *)this + 0x38));
    lbl_8035B5E4 = (int)this;
    *(u32 *)((char *)this + 0x78) = 0;
    *(u32 *)((char *)this + 0x14) = 0;
    *(u32 *)((char *)this + 0x18) = 0;
    *(u32 *)((char *)this + 0x1c) = 0;
    *(u32 *)((char *)this + 0x20) = 0;
    *(u32 *)((char *)this + 0x24) = 0;
    *(u32 *)((char *)this + 0x60) = 0;
    *(u32 *)((char *)this + 0x64) = 0;
    *(u32 *)((char *)this + 0x68) = 0;
    *(u32 *)((char *)this + 0x30) = 0;
    *(u32 *)((char *)this + 0x34) = 0;
    *(u32 *)((char *)this + 0x28) = 0;
    *(u32 *)((char *)this + 0x2c) = 0;
    *(u32 *)((char *)this + 0x70) = 0;
    *(u32 *)((char *)this + 0x74) = 0;
    *(u32 *)((char *)this + 0x7c) = 0;
    *(u32 *)((char *)this + 0x8c) = 0;
}

} /* extern "C" */
