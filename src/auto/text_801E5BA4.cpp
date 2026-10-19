// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C801E5BA4[];
void fn_801E5CA0(int);
void __ct__9C801EB864Fv(void);

extern "C" {
}
struct C801EB864 { char pad[0x14]; C801EB864(void); ~C801EB864(); };
struct C801E5BA4 : C801EB864 {  C801E5BA4(void); virtual void vfx(); };

C801E5BA4::C801E5BA4() : C801EB864() {
    fn_801E5CA0((int)((char *)this + 0x20));
    (*(u32 *)((char *)this + 0x1c)) = 0;
    (*(u32 *)((char *)this + 0x18)) = 0;
    (*(u32 *)this) = 4;
}

} /* extern "C" */
