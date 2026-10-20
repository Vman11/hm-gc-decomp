// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8011C314 { u8 pad[0x10]; virtual void p0(); virtual void m(); };
extern "C" void fn_800F9638(void *);

void fn_8011C314(u8 *p) {
    if (*(s32 *)p != 0) {
        fn_800F9638(p + 4);
        fn_800F9638(p + 28);
        ((V_8011C314 *)(p + 52))->m();
        ((V_8011C314 *)(p + 88))->m();
        *(s32 *)p = 0;
    }
}

} /* extern "C" */
