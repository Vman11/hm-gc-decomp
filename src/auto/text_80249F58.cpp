// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80249F58[];
void __ct__9C800F92E8Fv(int);
void __ct__9C80109410Fv(int);
void __ct__9C8023D2ACFv(void);

extern "C" {
}
struct C8023D2AC { C8023D2AC(void); ~C8023D2AC(); virtual void vf(); };
struct C800F92E8 { char pad[4]; C800F92E8(); ~C800F92E8(); };
struct C80249F58 : C8023D2AC { char pad0[0x10]; C800F92E8 m1; C80249F58(void); virtual void vfx(); };

C80249F58::C80249F58() : C8023D2AC() {
    __ct__9C80109410Fv((int)((char *)this + 0x34));
    (*(u32 *)((char *)this + 0x6c)) = 0;
    (*(u32 *)((char *)this + 0x60)) = 0xffffffff;
    (*(u32 *)((char *)this + 0x64)) = 0;
    (*(u32 *)((char *)this + 0x70)) = 0;
    (*(u32 *)((char *)this + 0x74)) = 0;
    (*(u32 *)((char *)this + 0x78)) = 0;
    (*(u32 *)((char *)this + 0x5c)) = 0;
    (*(u32 *)((char *)this + 0x2c)) = 0;
    (*(u32 *)((char *)this + 0x28)) = 0;
    (*(u32 *)((char *)this + 0x30)) = 0;
}

} /* extern "C" */
