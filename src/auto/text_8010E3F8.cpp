// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802E2960[];
void __ct__9C800F92E8Fv(void);
struct VCall_fn_8010E3F8_0 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };

extern "C" {
void m(void);
}
struct C800F92E8 { char pad[0x4]; C800F92E8(void); ~C800F92E8(); };
struct C8010E3F8 : C800F92E8 {  C8010E3F8(void); };

C8010E3F8::C8010E3F8() : C800F92E8() {
    *(u8 **)((char *)this + 0x10) = lbl_802E2960;
    ((VCall_fn_8010E3F8_0 *)(this))->m();
}
}
