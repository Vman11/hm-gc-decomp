// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80215F50 { u8 pad[0x124]; virtual void m(s32); };
extern "C" { void __dla__FPv(void *); void fn_80214E80(void *); void fn_80210938(void *); void __dt__9C80210CECFv(void *, s32); void dtor_80214FF0(void *, s32); void __dl__FPv(void *); }

void *__dt__9C80215F50Fv(u8 *p, s16 f) {
    if (p != NULL) {
        if (*(s32 *)(p + 52) != 0) {
            u8 *o = *(u8 **)(p + 44);
            if (o != NULL) {
                if (o != NULL) {
                    ((V_80215F50 *)o)->m(1);
                }
            }
        }
        if (*(void **)(p + 48) != NULL) {
            __dla__FPv(*(void **)(p + 48));
        }
        fn_80214E80(p);
        fn_80210938(p + 36);
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 48) = 0;
    *(s32 *)(p + 52) = 0;
        __dt__9C80210CECFv(p + 36, -1);
        dtor_80214FF0(p, -1);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
