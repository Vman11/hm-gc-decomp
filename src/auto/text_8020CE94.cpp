// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EFB08[];
void fn_8020C0D8(int);
void __ct__9C802113F8Fv(void);

extern "C" {
}
struct C802113F8 { char pad[0x4]; C802113F8(void); ~C802113F8(); };
struct C8020CE94 : C802113F8 {  C8020CE94(void); };

C8020CE94::C8020CE94() : C802113F8() {
    *(u8 **)((char *)this + 0x10) = lbl_802EFB08;
    fn_8020C0D8((int)((char *)this + 0x18));
    *(u32 *)((char *)this + 0x14) = 0;
    *(u32 *)((char *)this + 0x28) = 0xffffffff;
}

} /* extern "C" */
