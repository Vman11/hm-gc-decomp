// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EBB20[];
void fn_80121E1C(int);
void __ct__9C801A5384Fv(void);

extern "C" {
}
struct C801A5384 { char pad[0x4]; C801A5384(void); ~C801A5384(); };
struct C801BD4C8 : C801A5384 {  C801BD4C8(void); };

C801BD4C8::C801BD4C8() : C801A5384() {
    *(u8 **)((char *)this + 0x10) = lbl_802EBB20;
    fn_80121E1C((int)((char *)this + 0x14));
    *(u32 *)((char *)this + 0x4) = 0;
    *(u8 *)((char *)this + 0x14) = 0xff;
    *(u8 *)((char *)this + 0x15) = 0xff;
    *(u8 *)((char *)this + 0x16) = 0xff;
    *(u8 *)((char *)this + 0x17) = 0xff;
    *(u8 *)((char *)this + 0x18) = 0xff;
    *(u8 *)((char *)this + 0x19) = 0xff;
    *(u8 *)((char *)this + 0x1a) = 0xff;
    *(u8 *)((char *)this + 0x1b) = 0xff;
    *(u8 *)((char *)this + 0x1c) = 0xff;
    *(u8 *)((char *)this + 0x1d) = 0xff;
    *(u8 *)((char *)this + 0x1e) = 0xff;
    *(u8 *)((char *)this + 0x1f) = 0xff;
    *(u8 *)((char *)this + 0x20) = 0xff;
    *(u8 *)((char *)this + 0x21) = 0xff;
    *(u8 *)((char *)this + 0x22) = 0xff;
    *(u8 *)((char *)this + 0x23) = 0xff;
}

} /* extern "C" */
