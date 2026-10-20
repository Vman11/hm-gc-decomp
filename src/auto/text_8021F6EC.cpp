// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8021F6EC { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual s32 m2(); virtual void m3(void *, void *); };
extern "C" { extern char lbl_803659D8[4]; extern char lbl_803659DC[8]; void __ct__9C80215F50Fv(void *); s32 fn_80215C84(void *, void *, const char *, s32, s32); void fn_80060E30(s32, const char *, ...); void fn_8021F7CC(void *, void *, void *); void fn_80215BFC(void *); void __dt__9C80215F50Fv(void *, s32); }

void fn_8021F6EC(u8 *p, void *a, void *b, s32 d) {
    if (d == 2 && ((V_8021F6EC *)p)->m2() != 0) {
        ((V_8021F6EC *)p)->m3(a, b);
    } else {
        u8 obj[48];
        s32 r;
        __ct__9C80215F50Fv(obj);
        r = fn_80215C84(obj, b, lbl_803659D8, 2, 0);
        if (r != 0) {
            fn_80060E30(r, lbl_803659DC, b, lbl_803659D8);
        }
        fn_8021F7CC(p, a, *(void **)(obj + 44));
        fn_80215BFC(obj);
        __dt__9C80215F50Fv(obj, -1);
    }
}

} /* extern "C" */
