// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __ct__9C800F9688Fv(int);
void __ct__9C800F9B64Fv(int);
void __ct__9C802084B0Fv(int);

extern "C" {
}
struct C802084B0 { char pad[4]; C802084B0(); ~C802084B0(); };
struct C8021651C { char vptr[4]; char pad1[0x4]; C802084B0 m2; C8021651C(void); };

C8021651C::C8021651C() {
    __ct__9C800F9688Fv((int)((char *)this + 0x20));
    __ct__9C800F9B64Fv((int)((char *)this + 0x38));
    (*(u32 *)this) = 0;
    (*(u32 *)((char *)this + 0x4)) = 0;
    (*(u32 *)((char *)this + 0x5c)) = 0;
    (*(u32 *)((char *)this + 0x60)) = 0;
    (*(u32 *)((char *)this + 0x64)) = 0;
}

} /* extern "C" */
