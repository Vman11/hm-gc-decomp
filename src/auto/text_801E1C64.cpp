// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801E1C64 { u8 pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };

void fn_801E1C64(u8 *p, u8 *x) {
    if (*(u32 *)(p + 48) < *(u32 *)(p + 52)) {
        u8 **n = *(u8 ***)(p + 40);
        if (n != NULL) {
            if ((*(u8 ***)(p + 40) = (u8 **)n[0]) != NULL) {
                *(s32 *)(*(u8 **)(p + 40) + 4) = 0;
            } else {
                *(s32 *)(p + 44) = 0;
            }
        }
        n[2] = x;
        if ((n[1] = *(u8 **)(p + 36)) != NULL) {
            **(u8 ***)(p + 36) = (u8 *)n;
        } else {
            *(u8 ***)(p + 32) = n;
        }
        *(u8 ***)(p + 36) = n;
        n[0] = 0;
        (*(u32 *)(p + 48))++;
        if (*(s32 *)(p + 116) != 0) {
            ((V_801E1C64 *)x)->m();
        }
    }
}

} /* extern "C" */
