// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C8016E11C[];
void fn_801487AC(int);
void __ct__9C80148AE4Fv(void);

extern "C" {
}
struct C80148AE4 { char pad[0x4]; C80148AE4(void); ~C80148AE4(); };
struct C80207028 : C80148AE4 {  C80207028(void); };

C80207028::C80207028() : C80148AE4() {
    *(u8 **)((char *)this + 0x53c) = __vt__9C8016E11C;
    *(u32 *)((char *)this + 0x10) = 0;
    *(u32 *)((char *)this + 0x14) = 0;
    *(u32 *)((char *)this + 0x540) = 0;
    *(u32 *)((char *)this + 0x548) = 0;
    *(u32 *)((char *)this + 0x544) = 0;
    *(u32 *)((char *)this + 0x54c) = 0;
    *(u32 *)((char *)this + 0x550) = 0;
    fn_801487AC((int)this);
}

} /* extern "C" */
