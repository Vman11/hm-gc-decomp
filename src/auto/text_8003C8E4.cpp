// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8003C8E4 { u8 pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual u32 *m(s32); };
extern u8 *lbl_8035A1DC;
extern u8 lbl_80294E10[];
V_8003C8E4 *fn_80207198(void *, void *, s32);

u32 fn_8003C8E4(void) {
    return *fn_80207198(lbl_8035A1DC + 0x3E0, lbl_80294E10, 0)->m(0);
}

} /* extern "C" */
