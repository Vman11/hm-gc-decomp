// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_802221C4 { u8 pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual u8 *m(); };
extern s32 lbl_80356E60[4];
void DCInvalidateRange(void *, u32);
void fn_80221D6C(void *);

void fn_802221C4(u8 *p) {
    V_802221C4 *q = *(V_802221C4 **)(p + 4);
    if (q != NULL) {
        u8 *r = q->m();
        DCInvalidateRange(((void **)(r + 0x50))[*(s32 *)(r + 0x60)], *(u16 *)(r + 0x1E) * (*(u16 *)(r + 0x1C) * 2));
    }
    fn_80221D6C(p);
    lbl_80356E60[0] = 3;
    lbl_80356E60[1] = 5;
    lbl_80356E60[2] = 10;
    lbl_80356E60[3] = 7;
}

} /* extern "C" */
