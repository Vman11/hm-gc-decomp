// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801E7980 { u8 pad[0x4]; virtual void p0(); virtual void m(void *); };
extern "C" { extern u32 lbl_80365330; extern u32 lbl_80365334; extern u32 lbl_80365338; u8 *fn_8019565C(void *); void fn_8013E85C(void *, void *); }

void fn_801E7980(u8 *p) {
    if (*(u32 *)(p + 36) & 2) {
        u32 *e = (u32 *)(*(u8 **)(fn_8019565C(*(void **)(p + 44) ? *(void **)(p + 44) : *(void **)(p + 40)) + 116) + *(s32 *)(p + 48) * 28);
        fn_8013E85C(e, *(void **)(p + 52));
        e[0] |= lbl_80365330;
        if (e[3] != 0) {
            ((V_801E7980 *)e[3])->m(e);
        }
        e[5] |= lbl_80365334;
        if (*(s32 *)(p + 56) != 0) {
            e[0] |= lbl_80365338;
        } else {
            e[0] &= ~4;
        }
    }
}

} /* extern "C" */
