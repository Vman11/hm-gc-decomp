// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E9E20[];
void fn_8014EB30(int);
void __ct__9C801A2A40Fv(void);

extern "C" {
}
struct C801A2A40 { char pad[0x4]; C801A2A40(void); ~C801A2A40(); };
struct C801A2188 : C801A2A40 {  C801A2188(void); };

C801A2188::C801A2188() : C801A2A40() {
    *(u8 **)((char *)this + 0x8c) = lbl_802E9E20;
    fn_8014EB30((int)((char *)this + 0x90));
}

} /* extern "C" */
