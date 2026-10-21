// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 n(); };
extern "C" { u32 fn_800FB33C(void *); }

void *fn_8019C210(u8 *p, S *s) {
    u32 t = s->n();
    u32 i = fn_800FB33C(s);
    switch (t) {
    case 57:
        if (i < *(u32 *)(p + 24)) {
            return *(u8 **)(p + 28) + i * 36;
        }
        break;
    case 58:
        if (i < *(u32 *)(p + 32)) {
            return *(u8 **)(p + 36) + i * 24;
        }
        break;
    case 59:
        if (i < *(u32 *)(p + 40)) {
            return *(u8 **)(p + 44) + i * 24;
        }
        break;
    case 60:
        if (i < *(u32 *)(p + 48)) {
            return *(u8 **)(p + 52) + i * 24;
        }
        break;
    case 61:
        if (i < *(u32 *)(p + 56)) {
            return *(u8 **)(p + 60) + i * 44;
        }
        break;
    default:
        s->err(30);
        break;
    }
    s->err(35);
    return 0;
}

} /* extern "C" */
