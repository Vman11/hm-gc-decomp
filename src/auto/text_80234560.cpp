// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80234560 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };
extern "C" void fn_80239678(void *);

void fn_80234560(u8 *p) {
    u32 z = 0;
    u8 *q;
    s32 i;
    *(u32 *)(p + 1064) = z;
    *(u32 *)(p + 1068) = **(u32 **)(p + 1016);
    for (i = 0, q = p; i < **(s32 **)(p + 996); i++) {
        if (*(void **)(q + 596) != NULL) {
            (*(s32 *)(p + 1052))--;
            (*(V_80234560 **)(q + 596))->m();
            *(u32 *)(q + 596) = z;
        }
        q += 4;
    }
    fn_80239678(p);
}

} /* extern "C" */
