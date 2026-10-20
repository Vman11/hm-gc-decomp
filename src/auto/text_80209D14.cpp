// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_80209D14 { u8 pad[0x4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void a(); virtual s32 b(); };
void __dla__FPv(void *);
void fn_8020866C(void *);
void fn_8021144C(void *, void *);

s32 fn_80209D14(u8 *p) {
    if (*(void **)(p + 0xC) != NULL) {
        __dla__FPv(*(void **)(p + 0xC));
        *(s32 *)(p + 0xC) = 0;
    }
    if (*(void **)(p + 0x1C) != NULL) {
        if (((S_80209D14 *)(p + 0x1C))->b() == 7) {
            ((S_80209D14 *)(p + 0x1C))->a();
        }
        if (*(void **)(p + 0x1C) != NULL) {
            ((S_80209D14 *)(p + 0x1C))->a();
            fn_8020866C(*(void **)(p + 0x1C));
        }
        fn_8021144C(p, *(void **)(p + 0x1C));
    }
    if (*(void **)(p + 0x68) != NULL) {
        if (((S_80209D14 *)(p + 0x68))->b() == 7) {
            ((S_80209D14 *)(p + 0x68))->a();
        }
        if (*(void **)(p + 0x68) != NULL) {
            ((S_80209D14 *)(p + 0x68))->a();
            fn_8020866C(*(void **)(p + 0x68));
        }
        fn_8021144C(p, *(void **)(p + 0x68));
    }
    *(s32 *)(p + 8) = 0;
    return 0;
}

} /* extern "C" */
