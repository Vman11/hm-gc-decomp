// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_8014E788 { u8 pad[0xC]; virtual void m(); };
void *memset(void *, s32, u32);
s32 fn_8011FA44(void *);

s32 fn_8014E788(u8 *p) {
    u8 *q;
    u32 i;
    if (*(s32 *)(p + 0x20) == 0) {
        return 0;
    }
    for (i = 0, q = p; i < 4; i++, q += 764) {
        ((S_8014E788 *)(q + 0x60))->m();
    }
    memset(p + 0x30, 0, 0x30);
    *(s32 *)(p + 0xC50) = 0;
    return fn_8011FA44(p);
}

} /* extern "C" */
