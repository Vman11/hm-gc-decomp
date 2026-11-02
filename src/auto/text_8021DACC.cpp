// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" {

s32 fn_800FB33C(int);


#include "common.h"
struct P { u8 pad[0xc]; u32 fc; u8 q[0x28 - 0x10]; u16 *f28; };
extern "C" {
void fn_8021DACC(P *p, int a) {
    s32 off;
    u32 i;
    off = 0;
    for (i = 0; i < p->fc; i++) {
        *(u16 *)((u8 *)p->f28 + off) = fn_800FB33C(a);
        off += 2;
    }
}
}

} /* extern "C" */

} /* extern "C" */
