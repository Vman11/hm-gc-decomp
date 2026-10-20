// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801E68A8 { u8 pad[0x4]; virtual void p0(); virtual void m(void *); };
extern "C" { extern u32 lbl_80365320; s32 fn_801EB764(void *); }

BOOL fn_801E68A8(u8 *p) {
    if (fn_801EB764(p) == 0) {
        return FALSE;
    }
    *(u32 *)(p + 52) |= lbl_80365320;
    if (*(V_801E68A8 **)(p + 64) != NULL) {
        (*(V_801E68A8 **)(p + 64))->m(p + 52);
    }
    return TRUE;
}

} /* extern "C" */
