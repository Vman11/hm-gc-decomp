// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern char lbl_80294E04[];
extern u8 lbl_802AFFF8[];
extern u32 lbl_8035B478;
extern u32 lbl_8035B65C;
extern u32 lbl_8035B684;
extern char lbl_8035C1B8[0x8];
void fn_8002FD3C(int);
void fn_800F6E88(int, int);
u32 fn_800F8274(int, int);
u32 fn_80110AA4(int, int);
struct VCall_fn_8003C448_0 { char vptr_pad[0x2f0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m(int); };

u32 fn_8003C448(void) {
    u32 uVar1;
    u32 iVar2;
    u8 auStack_8 [8];

    uVar1 = fn_800F8274((int)(lbl_8035B478), (int)(lbl_8035C1B8)); /* "Persist" */
    iVar2 = fn_80110AA4((int)(uVar1), (int)(lbl_80294E04)); /* "NEWLEVEL" */
    fn_800F6E88((int)(auStack_8), (int)(lbl_802AFFF8 + *(u32 *)(iVar2 + 0xc) * 8));
    fn_8002FD3C((int)(lbl_8035B684));
    ((VCall_fn_8003C448_0 *)(lbl_8035B65C))->m((u32)(auStack_8));
    return 1;
}
}
