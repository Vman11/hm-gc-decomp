// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E9E38[];
void __ct__9C80064474Fv(void);

} /* extern "C" */

extern "C" {
void fn_801A2620(int);
}
struct C80064474 { char pad[0x4]; C80064474(void); ~C80064474(); };
struct C80064430 : C80064474 {  C80064430(void); };

C80064430::C80064430() : C80064474() {
    *(u8 **)((char *)this + 0x2a0) = lbl_802E9E38;
    fn_801A2620((int)((char *)this + 0x32b4));
}
