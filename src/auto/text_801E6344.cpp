// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801E6344 { u8 pad[0x14]; virtual void p0(); virtual void m(); };
void fn_8017EDA8(void *, void *);

void fn_801E6344(V_801E6344 *p) {
    u8 *b = (u8 *)p;
    s32 a;
    *(s32 *)(b + 0x2C) = 0;
    fn_8017EDA8(*(void **)(b + 0x24), b + 0x18);
    a = *(s32 *)(b + 0x2C);
    if (a != 0 && *(s32 *)(b + 0x28) != 0) {
        if (*(u32 *)(b + 0x30) & 4) {
            p->m();
        }
    } else if (a != 0 && *(s32 *)(b + 0x28) == 0) {
        if (*(u32 *)(b + 0x30) & 1) {
            p->m();
        }
    } else if (a == 0 && *(s32 *)(b + 0x28) != 0) {
        if (*(u32 *)(b + 0x30) & 2) {
            p->m();
        }
    }
    *(s32 *)(b + 0x28) = *(s32 *)(b + 0x2C);
}

} /* extern "C" */
