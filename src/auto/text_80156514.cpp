// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80156514 { u8 pad[0x74]; virtual void p0(); virtual u32 m(u16); };
void fn_80156514(u8 *p, s32 flag, u16 *s, u32 v, u32 *out) {
    u32 r;
    u32 i;
    if (flag & 1) {
        *out = 1;
        return;
    }
    r = (*(V_80156514 **)(p + 0x34))->m(s[1]);
    i = 1;
    while (v > r) {
        v >>= 1;
        i++;
    }
    if (*out > i) {
        *out = i;
    }
}

} /* extern "C" */
