// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8011DC84 { u8 pad[0xD0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual s32 m(s32); };
static inline s32 find_8011DC84(V_8011DC84 *p, s32 k) {
    u32 i;
    for (i = 0; i < *(u32 *)((u8 *)p + 0xAC); i++) {
        if (k == (*(s32 **)((u8 *)p + 0x50))[i * 2]) {
            return i;
        }
    }
    return -1;
}

s32 fn_8011DC84(V_8011DC84 *p, s32 k) {
    u32 i = find_8011DC84(p, k);
    if (i < *(u32 *)((u8 *)p + 4)) {
        return p->m(i);
    }
    return 0;
}

} /* extern "C" */
