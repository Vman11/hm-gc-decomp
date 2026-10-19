// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801C22B0 { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual u32 m(void *, f32, f32); };
s32 fn_801C22B0(u8 *p, void *a, f32 x, f32 y) {
    if (*(void **)(p + 0x20) != NULL) {
        *(void **)(p + 0x18) = *(void **)(p + 0x20);
        *(f32 *)(p + 0x30) = x;
        *(f32 *)(p + 0x34) = y;
        for (*(void **)(p + 0x18) = *(void **)(p + 0x20); *(void **)(p + 0x18) != NULL; *(void **)(p + 0x18) = *(void **)(*(u8 **)(p + 0x18) + 0x11C)) {
            if ((*(V_801C22B0 **)(p + 0x18))->m(a, x, y) == 1) {
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
