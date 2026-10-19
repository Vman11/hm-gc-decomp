// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V1_8021F5E8 { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void a(); };
struct V2_8021F5E8 { virtual void p0(); virtual void b(void *); };
void fn_800F8DD0(void *);
void __dla__FPv(void *);
void fn_800E1E88(void *, void *);
void __dt__9C80102660Fv(void *, s32);

void fn_8021F5E8(u8 *p) {
    fn_800F8DD0(p);
    if (*(V1_8021F5E8 **)(p + 0x18) != NULL) {
        (*(V1_8021F5E8 **)(p + 0x18))->a();
        (*(V2_8021F5E8 **)(p + 0x14))->b(*(void **)(p + 0x18));
    }
    if (*(void **)(p + 0x1C) != NULL) {
        __dla__FPv(*(void **)(p + 0x1C));
    }
    if (*(void **)(p + 0x20) != NULL) {
        __dla__FPv(*(void **)(p + 0x20));
    }
    if (*(void **)(p + 0x24) != NULL) {
        __dla__FPv(*(void **)(p + 0x24));
    }
    if (*(void **)(p + 0x28) != NULL) {
        __dla__FPv(*(void **)(p + 0x28));
    }
    if (*(void **)(p + 0x2C) != NULL) {
        __dla__FPv(*(void **)(p + 0x2C));
    }
    if (*(void **)(p + 0x44) != NULL) {
        fn_800E1E88(*(void **)(p + 0x44), (void *)__dt__9C80102660Fv);
    }
    *(s32 *)(p + 0x14) = 0;
    *(s32 *)(p + 0x18) = 0;
    *(s32 *)(p + 0x1C) = 0;
    *(s32 *)(p + 0x20) = 0;
    *(s32 *)(p + 0x24) = 0;
    *(s32 *)(p + 0x28) = 0;
    *(s32 *)(p + 0x2C) = 0;
    *(s32 *)(p + 0x30) = 0;
    *(s32 *)(p + 0x34) = 0;
    *(s32 *)(p + 0x38) = 0;
    *(s32 *)(p + 0x3C) = 0;
    *(s32 *)(p + 0x40) = 0;
    *(s32 *)(p + 0x44) = 0;
    *(s32 *)(p + 0x48) = 0;
}

} /* extern "C" */
