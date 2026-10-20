// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801545B0 { u8 pad[0x28]; virtual void m(); };
extern "C" { extern u8 lbl_802E68E0[]; void fn_8015444C(void *, s32); void dtor_8012C6F8(void *, s32); void __dl__FPv(void *); }

void *fn_801545B0(u8 *p, s16 f) {
    if (p != NULL) {
        *(void **)p = lbl_802E68E0;
        ((V_801545B0 *)(p + 4))->m();
        fn_8015444C(p + 4, -1);
        dtor_8012C6F8(p, 0);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
