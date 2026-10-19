// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F0D4C[];
void fn_8023B340(int);
void __ct__9C8023B4DCFv(void);

extern "C" {
}
struct C8023B4DC { char pad[0x4]; C8023B4DC(void); ~C8023B4DC(); };
struct C80226E64 : C8023B4DC {  C80226E64(void); };

C80226E64::C80226E64() : C8023B4DC() {
    *(u8 **)((char *)this + 0xa0) = lbl_802F0D4C;
    fn_8023B340((int)this);
    *(u32 *)((char *)this + 0xa4) = 0;
    *(u32 *)((char *)this + 0xac) = 0;
    *(u32 *)((char *)this + 0xb0) = 0;
    *(u32 *)((char *)this + 0xb4) = 0;
    *(u32 *)((char *)this + 0xb8) = 0;
    *(u32 *)((char *)this + 0xbc) = 0;
    *(u32 *)((char *)this + 0xdc) = 0;
    *(u32 *)((char *)this + 0xe0) = 0;
    *(u32 *)((char *)this + 0xc0) = 0;
    *(u32 *)((char *)this + 0xc4) = 0;
    *(u32 *)((char *)this + 0xd8) = 0;
    *(u32 *)((char *)this + 0xc8) = 0;
    *(u32 *)((char *)this + 0xcc) = 0;
    *(u32 *)((char *)this + 0xd0) = 0;
    *(u32 *)((char *)this + 0xd4) = 0;
}

} /* extern "C" */
