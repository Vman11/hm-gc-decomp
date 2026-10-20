// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_802160B8 { u8 pad[0x6B8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual s32 m(void *); };

BOOL fn_802160B8(u8 *p, void *a, void **out) {
    s32 off;
    s32 i;
    if (out != NULL) {
        *out = NULL;
    }
    if (*(u32 *)(p + 92) == 0) {
        return TRUE;
    }
    for (i = *(u32 *)(p + 92) - 1, off = i * 4; i >= 0; i--) {
        if ((*(V_802160B8 **)(*(u8 **)(p + 100) + off))->m(a) == 0) {
            if (out != NULL) {
                *out = (*(void ***)(p + 100))[i];
            }
            return FALSE;
        }
        off -= 4;
    }
    return TRUE;
}

} /* extern "C" */
