// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_80108990Fv { u8 pad[0x10]; virtual void p0(); virtual void m(); };
extern u8 lbl_802E2508[];
void fn_800F9638(void *);
void __dt__9C800F9B64Fv(void *, s32);
void __dl__FPv(void *);

void *__dt__9C80108990Fv(u8 *p, s16 f) {
    if (p != NULL) {
        *(void **)(p + 0x7C) = lbl_802E2508;
        fn_800F9638(p + 4);
        fn_800F9638(p + 0x40);
        ((S_80108990Fv *)(p + 0x1C))->m();
        ((S_80108990Fv *)(p + 0x58))->m();
        __dt__9C800F9B64Fv(p + 0x58, -1);
        __dt__9C800F9B64Fv(p + 0x1C, -1);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
