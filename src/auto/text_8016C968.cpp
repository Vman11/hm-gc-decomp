// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035ACE8;
void fn_800D6668(void); void fn_8011B250(void); void fn_800D6700(void); void fn_8015B0D8(void *);
typedef struct O { u8 p[0x344]; u32 st; u8 b[4]; } O;
void fn_8016C968(O *o, int f) {
    if (o->st == 1) {
        if (lbl_8035ACE8 == 0) lbl_8035ACE8 = 1; fn_800D6668();
    } else if (f) {
        fn_8011B250(); fn_800D6700(); fn_8015B0D8(o->b);
    } else {
        *(s32 *)((u8 *)o + 0x279D4) = 1;
    }
}

} /* extern "C" */
