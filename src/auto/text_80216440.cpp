// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V1_80216440 { virtual void p0(); virtual void m(void *); };
struct S_80216440 { u8 pad[0x10]; virtual void p0(); virtual void m(); };
extern s32 lbl_8035B1C0;
extern s32 lbl_8035B1D8;
extern s32 lbl_8035B1D0;
void __dla__FPv(void *);
void fn_800F9638(void *);
void fn_80208154(void *);
void __dt__9C800F9B64Fv(void *, s32);
void __dt__9C802084B0Fv(void *, s32);
void __dl__FPv(void *);

void *fn_80216440(u8 *p, s16 f) {
    if (p != NULL) {
        if (*(void **)(p + 0x64) != NULL) {
            __dla__FPv(*(void **)(p + 0x64));
        }
        if (*(void **)p != NULL) {
            (*(V1_80216440 **)(p + 4))->m(*(void **)p);
        }
        fn_800F9638(p + 0x20);
        ((S_80216440 *)(p + 0x38))->m();
        fn_80208154(p + 8);
        lbl_8035B1C0 = 0;
        lbl_8035B1D8 = 0;
        lbl_8035B1D0 = 0;
        *(s32 *)(p + 0) = 0;
        *(s32 *)(p + 4) = 0;
        *(s32 *)(p + 0x5C) = 0;
        *(s32 *)(p + 0x60) = 0;
        *(s32 *)(p + 0x64) = 0;
        __dt__9C800F9B64Fv(p + 0x38, -1);
        __dt__9C802084B0Fv(p + 8, -1);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
