// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8011C45C { u8 pad[0x10]; virtual void p0(); virtual void m(); };
extern "C" { extern u8 lbl_802E3E40[]; void fn_800F9638(void *); void __dt__9C800F9B64Fv(void *, s32); void __dl__FPv(void *); }

void *fn_8011C45C(u8 *p, s16 f) {
    if (p != NULL) {
        *(void **)(p + 124) = lbl_802E3E40;
        if (*(s32 *)p != 0) {
            fn_800F9638(p + 4);
            fn_800F9638(p + 28);
            ((V_8011C45C *)(p + 52))->m();
            ((V_8011C45C *)(p + 88))->m();
            *(s32 *)p = 0;
        }
        __dt__9C800F9B64Fv(p + 88, -1);
        __dt__9C800F9B64Fv(p + 52, -1);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
