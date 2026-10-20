// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_8017DF50 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 n(); };
extern "C" { void fn_800FAEF8(void *); u32 fn_800FB33C(void *); }

void fn_8017DF50(u8 *p, u8 *q, S_8017DF50 *s) {
    u32 t;
    *(void **)p = q;
    fn_800FAEF8(s);
    while ((t = s->n()) != 6) {
        switch (t) {
        case 67: {
            u32 i = fn_800FB33C(s);
            *(u32 *)(p + 8) = fn_800FB33C(s);
            if (i + *(u32 *)(p + 8) > *(u32 *)(q + 4)) {
                s->err(35);
            }
            *(u8 **)(p + 4) = *(u8 **)(q + 8) + i * 52;
            break;
        }
        default:
            s->err(30);
            break;
        }
    }
}

} /* extern "C" */
