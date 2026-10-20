// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801E8D0C { u8 pad[0x4]; virtual void p0(); virtual void m(void *); };
extern "C" { extern u32 lbl_80365350; extern u32 lbl_80365354; extern u32 lbl_80365358; u8 *fn_8019556C(void *); void fn_8014094C(void *, void *); }

void fn_801E8D0C(u8 *p) {
    if (*(u32 *)(p + 36) & 2) {
        u32 *e = (u32 *)(*(u8 **)(fn_8019556C(*(void **)(p + 44) ? *(void **)(p + 44) : *(void **)(p + 40)) + 160) + *(s32 *)(p + 48) * 32);
        fn_8014094C(e, *(void **)(p + 52));
        e[0] |= lbl_80365350;
        if (e[3] != 0) {
            ((V_801E8D0C *)e[3])->m(e);
        }
        e[5] |= lbl_80365354;
        if (*(s32 *)(p + 56) != 0) {
            e[0] |= lbl_80365358;
        } else {
            e[0] &= ~4;
        }
    }
}

} /* extern "C" */
