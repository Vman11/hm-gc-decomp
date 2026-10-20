// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8017E98C { u8 pad[0x10]; virtual void p0(); virtual void m(); };
extern "C" { void __dla__FPv(void *); void __dl__FPv(void *); void __dt__9C800F92E8Fv(void *, s32); }

void *__dt__9C8017E98CFv(u8 *p, s16 f) {
    if (p != 0) {
        ((V_8017E98C *)(p + 48))->m();
        if (*(u8 **)(p + 16) != 0) {
            if (*(u8 **)(p + 16) != 0) {
                __dla__FPv(*(u8 **)(p + 16) - 16);
            }
        }
        ((V_8017E98C *)(p + 28))->m();
        if (*(u8 **)(p + 8) != 0) {
            if (*(u8 **)(p + 8) != 0) {
                __dla__FPv(*(u8 **)(p + 8) - 16);
            }
        }
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 68) = 0;
        __dt__9C800F92E8Fv(p + 48, -1);
        __dt__9C800F92E8Fv(p + 28, -1);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
