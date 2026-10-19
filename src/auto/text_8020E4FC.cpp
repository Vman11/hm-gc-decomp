// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_8020E4FC { u8 pad[0x10]; virtual void p0(); virtual void m(); };
extern u8 lbl_802EFB38[];
void fn_802148D4(void *);
void fn_802114B4(void *);
void fn_8020CE14(void *, s32);
void __dt__9C80214C34Fv(void *, s32);
void __dt__9C8020E5C0Fv(void *, s32);
void __dl__FPv(void *);

void *fn_8020E4FC(u8 *p, s16 f) {
    if (p != NULL) {
        *(void **)(p + 0x6B8) = lbl_802EFB38;
        if (*(u32 *)(p + 0x6BC) != 0) {
            ((S_8020E4FC *)(p + 0x88C))->m();
            fn_802148D4(p + 0x6C0);
            fn_802114B4(p);
        }
        *(s32 *)(p + 0x6BC) = 0;
        *(s32 *)(p + 0x880) = -1;
        *(s32 *)(p + 0x884) = -1;
        *(s32 *)(p + 0x888) = -1;
        fn_8020CE14(p + 0x88C, -1);
        __dt__9C80214C34Fv(p + 0x6C0, -1);
        __dt__9C8020E5C0Fv(p, 0);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
