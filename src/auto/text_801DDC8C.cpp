// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802ED228[];
void __ct__9C801C0BB4Fv(void);
void fn_801DD938(int);

extern "C" {
}
struct C801C0BB4 { char pad[0x4]; C801C0BB4(void); ~C801C0BB4(); };
struct C801DDC8C : C801C0BB4 {  C801DDC8C(void); };

C801DDC8C::C801DDC8C() : C801C0BB4() {
    *(u8 **)((char *)this + 0x80) = lbl_802ED228;
    fn_801DD938((int)this);
}

} /* extern "C" */
