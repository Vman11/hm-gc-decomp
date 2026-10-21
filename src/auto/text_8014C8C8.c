// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u32 flags; u32 pad4[2]; u32 n; u8 ch[8]; u8 a; u8 b; } S8014C8C8;
void fn_801019E4(S8014C8C8 *, u32);
extern u32 lbl_803644D8;

void fn_8014C8C8(S8014C8C8 *p, u32 f, u32 unused, u32 n) {
    u32 i;
    u8 v;
    if (n < 1) {
        f &= 0x40007FFF;
    } else {
        if (n > 8) {
            n = 8;
        }
        f |= lbl_803644D8;
    }
    fn_801019E4(p, f);
    p->n = n;
    v = 0;
    if (p->flags & 0x2000) {
        v = 30;
    }
    p->a = v;
    v = 0;
    if (p->flags & 0x4000) {
        v = 30;
    }
    p->b = v;
    for (i = 0; i < p->n; i++) {
        p->ch[i] = 31;
    }
    for (; i < 8; i++) {
        p->ch[i] = 0;
    }
}
