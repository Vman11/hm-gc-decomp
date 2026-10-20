// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8011C388 { u8 pad[0x10]; virtual void p0(); virtual void m(); };
extern "C" { void fn_800F9638(void *); void fn_800F9654(void *, void *); void fn_800F994C(void *, void *); }

void fn_8011C388(u8 *p, s32 a, void *b, void *c) {
    char buf[4];
    if (*(s32 *)p != 0) {
        fn_800F9638(p + 4);
        fn_800F9638(p + 28);
        ((V_8011C388 *)(p + 52))->m();
        ((V_8011C388 *)(p + 88))->m();
        *(s32 *)p = 0;
    }
    buf[0] = 0;
    *(s32 *)p = a;
    fn_800F9654(p + 4, buf);
    fn_800F9654(p + 28, buf);
    fn_800F994C(p + 52, b);
    fn_800F994C(p + 88, c);
}

} /* extern "C" */
