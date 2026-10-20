// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct E { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m4(s32); virtual s32 m5(); };
extern "C" { extern f32 lbl_80364358; void fn_800FAEF8(void *); f32 fn_800FB2E0(void *); u32 fn_800FB33C(void *); }

void fn_8013FE24(u32 *p, u8 *a, E *q) {
    s32 k;
    if (p[0] != 0) {
        p[0] = 0;
        p[2] = 0;
        p[3] = 0;
        ((f32 *)p)[1] = lbl_80364358;
        p[4] = 0;
        p[5] = 0;
        p[6] = 0;
    }
    p[0] = (u32)a;
    fn_800FAEF8(q);
    while ((u32)(k = q->m5()) != 6) {
        switch (k) {
        case 61:
            p[2] = fn_800FB33C(q);
            p[3] = fn_800FB33C(q);
            break;
        case 63:
            ((f32 *)p)[1] = fn_800FB2E0(q);
            break;
        case 64:
            p[4] = fn_800FB33C(q);
            if (p[5] == 0) {
                p[5] = p[4] + 1;
            }
            break;
        case 65:
            p[5] = fn_800FB33C(q);
            break;
        case 66:
            p[6] = fn_800FB33C(q);
            if (p[6] >= *(u32 *)(a + 52)) {
                q->m4(35);
            }
            break;
        default:
            q->m4(30);
            break;
        }
    }
}

} /* extern "C" */
