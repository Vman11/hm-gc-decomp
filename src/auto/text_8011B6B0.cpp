// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E3E00[];
void __ct__9C8011A54CFv(void);

} /* extern "C" */

extern "C" {
void fn_8020B004(int);
}
struct C8011A54C { char pad[0x4]; C8011A54C(void); ~C8011A54C(); };
struct C8011B6B0 : C8011A54C {  C8011B6B0(void); };

C8011B6B0::C8011B6B0() : C8011A54C() {
    *(u8 **)((char *)this + 0x74) = lbl_802E3E00;
    fn_8020B004((int)((char *)this + 0x78));
}
