// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __ct__9C801150D4Fv(int);
void __ct__9C80116200Fv(int);

extern "C" {
}
struct C801150D4 { char pad[4]; C801150D4(); ~C801150D4(); };
struct C80115044 { char vptr[4]; C801150D4 m1; C80115044(void); };

C80115044::C80115044() {
    __ct__9C80116200Fv((int)((char *)this + 0x8));
    (*(u32 *)this) = 0;
}

} /* extern "C" */
