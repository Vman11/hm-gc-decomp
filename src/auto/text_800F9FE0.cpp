// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_800F9FE0 { u8 pad[0x18]; virtual void p0(); virtual s32 m(); };
extern "C" { extern char lbl_8029CB08[]; void fn_80060568(const char *, s32, s32, s32); }

u8 *fn_800F9FE0(V_800F9FE0 *q, u8 c) {
    u8 *r;
    u8 *p = (u8 *)q;
    if (*(u32 *)(p + 12) >= *(u32 *)(p + 4) + *(u32 *)(p + 8)) {
        if (q->m() == 0) {
            fn_80060568(lbl_8029CB08, 0, 0, 0);
        }
        *(u32 *)(p + 12) = *(u32 *)(p + 4);
    }
    r = (*(u8 **)(p + 12))++;
    *r = c;
    return r;
}

} /* extern "C" */
