// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_n_80207410 { u8 pad[0x10]; virtual void p0(); virtual void m(); };
extern u8 lbl_802EF910[];
void fn_800F9638(void *);
void fn_801124C0(void *);
void __dt__9C800F9B64Fv(void *, s32);
void fn_80112950(void *, s32);
void __dl__FPv(void *);

void *fn_80207410(u8 *p, s16 f) {
    if (p != NULL) {
        *(void **)(p + 0x78) = lbl_802EF910;
        fn_800F9638(p + 4);
        fn_801124C0(p + 0x40);
        ((S_n_80207410 *)(p + 0x1C))->m();
        ((S_n_80207410 *)(p + 0x54))->m();
        fn_80112950(p + 0x54, -1);
        __dt__9C800F9B64Fv(p + 0x1C, -1);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
