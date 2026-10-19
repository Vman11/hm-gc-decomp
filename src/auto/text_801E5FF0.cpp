// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801E5FF0 { u8 pad[0x14]; virtual void p0(); virtual void m(); };
void fn_801E5FF0(V_801E5FF0 *p) {
    u8 *b = (u8 *)p;
    s32 r = 0;
    u8 *q;
    for (q = (*(u8 ***)(b + 0x18))[*(s32 *)(b + 0x1C) + 5]; q != NULL; q = *(u8 **)(q + 0x18)) {
        if (*(void **)(q + 0xC) != NULL) {
            r = 1;
            break;
        }
    }
    if (r != 0 && *(s32 *)(b + 0x24) != 0) {
        if (*(u32 *)(b + 0x20) & 4) {
            p->m();
        }
    } else if (r != 0 && *(s32 *)(b + 0x24) == 0) {
        if (*(u32 *)(b + 0x20) & 1) {
            p->m();
        }
    } else if (r == 0 && *(s32 *)(b + 0x24) != 0) {
        if (*(u32 *)(b + 0x20) & 2) {
            p->m();
        }
    }
    *(s32 *)(b + 0x24) = r;
}

} /* extern "C" */
