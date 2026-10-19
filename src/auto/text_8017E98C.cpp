// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __ct__9C800F92E8Fv(int);

extern "C" {
}
struct C800F92E8 { char pad[4]; C800F92E8(); ~C800F92E8(); };
struct C8017E98C { char vptr[4]; char pad1[0x18]; C800F92E8 m2; C8017E98C(void); };

C8017E98C::C8017E98C() {
    __ct__9C800F92E8Fv((int)((char *)this + 0x30));
    (*(u32 *)this) = 0;
    (*(u32 *)((char *)this + 0x4)) = 0;
    (*(u32 *)((char *)this + 0x8)) = 0;
    (*(u32 *)((char *)this + 0xc)) = 0;
    (*(u32 *)((char *)this + 0x10)) = 0;
    (*(u32 *)((char *)this + 0x14)) = 0;
    (*(u32 *)((char *)this + 0x18)) = 0;
    (*(u32 *)((char *)this + 0x44)) = 0;
}

} /* extern "C" */
