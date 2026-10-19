// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EFEE8[];
void __ct__9C8021157CFv(void);
void fn_802124FC(int);

extern "C" {
}
struct C8021157C { char pad[0x4]; C8021157C(void); ~C8021157C(); };
struct C802120C0 : C8021157C {  C802120C0(void); };

C802120C0::C802120C0() : C8021157C() {
    *(u8 **)((char *)this + 0x6b8) = lbl_802EFEE8;
    fn_802124FC((int)((char *)this + 0x6bc));
    *(u32 *)((char *)this + 0x6e0) = 0;
    *(u32 *)((char *)this + 0x6e4) = 0;
    *(u32 *)((char *)this + 0x6e8) = 0;
}

} /* extern "C" */
