// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F0438[];
void __ct__9C8011A980Fv(void);
void fn_8021CA10(int);

extern "C" {
}
struct C8011A980 { char pad[0x4]; C8011A980(void); ~C8011A980(); };
struct C8021E4C4 : C8011A980 {  C8021E4C4(void); };

C8021E4C4::C8021E4C4() : C8011A980() {
    *(u8 **)((char *)this + 0x8) = lbl_802F0438;
    fn_8021CA10((int)((char *)this + 0xc));
}

} /* extern "C" */
