// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8020878C { u8 pad[0x4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual s32 m(); };
extern "C" void *memcpy(void *, const void *, u32);

s32 fn_8020878C(u8 *p) {
    s32 r;
    if (*(s32 *)(p + 20) != 0) {
        return 0;
    }
    r = (*(V_8020878C **)(p + 4))->m();
    if (r != 0) {
        return r;
    }
    memcpy(*(void **)(p + 16), *(u8 **)(**(u8 ***)(p + 4) + 4) + *(s32 *)(p + 8), *(u32 *)(p + 12));
    *(s32 *)(p + 20) = 1;
    return 0;
}

} /* extern "C" */
