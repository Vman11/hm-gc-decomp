// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern s32 lbl_8035A1DC;
extern char lbl_8035F460[0x7];
extern char lbl_8035F468[0x6];
s32 fn_801AA960(int, int, int);
struct VCall_fn_80072DB8_0 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void m(int); };

void fn_80072DB8(void) {
    s32 iVar1;

    iVar1 = fn_801AA960((int)(*(u32 *)(lbl_8035A1DC + 0x33b0)), (int)(lbl_8035F460), (int)(lbl_8035F468)); /* "HUBSEL" */ /* "Pause" */
    if (iVar1 != 0) {
        ((VCall_fn_80072DB8_0 *)(iVar1))->m((s32)(1));
        *(u32 *)(iVar1 + 0x6c) = *(u32 *)(iVar1 + 0x6c) | 2;
    }
}
}
