// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EFA90[];
void __ct__9C8020E5C0Fv(int);
void __ct__9C802116C4Fv(void);

extern "C" {
}
struct C802116C4 { char pad[0x4]; C802116C4(void); ~C802116C4(); };
struct C8020BC10 : C802116C4 {  C8020BC10(void); };

C8020BC10::C8020BC10() : C802116C4() {
    *(u8 **)((char *)this + 0x60) = lbl_802EFA90;
    __ct__9C8020E5C0Fv((int)((char *)this + 0x64));
    *(u32 *)((char *)this + 0x91c) = 0;
    *(u32 *)((char *)this + 0x920) = 0;
}

} /* extern "C" */
