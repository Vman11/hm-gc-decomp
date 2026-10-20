// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8022F2A0 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(); };
struct T228_8022F2A0 { u8 pad[228]; };
extern "C" { void fn_800E1E88(void *, void *); void __dt__9C80197988Fv(void); void __dla__FPv(void *); void __dt__9C8023C7CCFv(void *, s32); }

void fn_8022F2A0(u32 *p) {
    if (p[4] != 0) {
        u32 i;
        for (i = 0; i < p[3]; i++) {
            if (((T228_8022F2A0 **)p[4])[i] != 0) {
                u32 j;
                for (j = 0; j < ((u32 *)p[1])[i]; j++) {
                    ((V_8022F2A0 *)&((T228_8022F2A0 **)p[4])[i][j])->m();
                }
                fn_800E1E88(((T228_8022F2A0 **)p[4])[i], (void *)__dt__9C80197988Fv);
            }
        }
        __dla__FPv((void *)p[4]);
    }
    if (p[2] != 0) {
        __dla__FPv((void *)p[2]);
    }
    if (p[1] != 0) {
        __dla__FPv((void *)p[1]);
    }
    if (p[5] != 0) {
        __dt__9C8023C7CCFv((void *)p[5], 1);
    }
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
}

} /* extern "C" */
