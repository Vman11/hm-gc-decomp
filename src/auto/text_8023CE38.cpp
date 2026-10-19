// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F19B0[];
void __ct__9C800F92E8Fv(int);
void __ct__9C8023B9E4Fv(void);

extern "C" {
}
struct C8023B9E4 { char pad[0x4]; C8023B9E4(void); ~C8023B9E4(); };
struct C8023CE38 : C8023B9E4 {  C8023CE38(void); };

C8023CE38::C8023CE38() : C8023B9E4() {
    *(u8 **)((char *)this + 0x10) = lbl_802F19B0;
    __ct__9C800F92E8Fv((int)((char *)this + 0x2c));
    *(u32 *)((char *)this + 0x44) = 0;
    *(u32 *)((char *)this + 0x40) = 0;
    *(u32 *)((char *)this + 0x28) = 0;
}

} /* extern "C" */
