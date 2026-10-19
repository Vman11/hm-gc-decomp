// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_8013E24C { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
void __dla__FPv(void *);
void fn_800E1E88(void *, void *);
void __dt__9C8013E224Fv(void *, s32);
void fn_800F8DD0(void *);

void fn_8013E24C(u8 *p) {
    ((S_8013E24C *)(p + 0x14))->m();
    if (*(void **)(p + 0x30) != NULL) {
        __dla__FPv(*(void **)(p + 0x30));
    }
    if (*(void **)(p + 0x38) != NULL) {
        fn_800E1E88(*(void **)(p + 0x38), (void *)__dt__9C8013E224Fv);
    }
    fn_800F8DD0(p);
    *(s32 *)(p + 0x2C) = 0;
    *(s32 *)(p + 0x30) = 0;
    *(s32 *)(p + 0x34) = 0;
    *(s32 *)(p + 0x38) = 0;
}

} /* extern "C" */
