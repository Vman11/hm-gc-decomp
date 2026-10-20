// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801F00CC { u8 pad[0x4]; virtual void p0(); virtual void m(void *); };
extern "C" { extern u32 lbl_80365440; extern u32 lbl_80365444; extern u32 lbl_80365448; u8 *fn_801955D8(void *); void fn_80103BB4(void *, void *); }

void fn_801F00CC(u8 *p) {
    if (*(u32 *)(p + 36) & 2) {
        u8 *r = *(u8 **)(fn_801955D8(*(void **)(p + 44) ? *(void **)(p + 44) : *(void **)(p + 40)) + 132);
        u32 *e;
        s32 i = *(s32 *)(p + 52);
        if (r == NULL) {
            e = 0;
        } else {
            e = (u32 *)(*(u8 **)(r + 8) + i * 60);
        }
        fn_80103BB4(e, *(void **)(p + 48));
        e[0] |= lbl_80365440;
        if (e[3] != 0) {
            ((V_801F00CC *)e[3])->m(e);
        }
        e[12] |= lbl_80365444;
        if (*(s32 *)(p + 56) != 0) {
            e[0] |= lbl_80365448;
        } else {
            e[0] &= ~4;
        }
    }
}

} /* extern "C" */
