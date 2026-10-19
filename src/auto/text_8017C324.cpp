// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern s32 lbl_8035AD80;
extern s32 lbl_8035AD84;
extern s32 lbl_8035AD88;
extern s32 lbl_8035AD8C;
extern s32 lbl_8035AD90;
void fn_8017C090(int, int);
struct VCall_fn_8017C324_0 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual int m(); };
struct VCall_fn_8017C324_1 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual int m(); };

void fn_8017C324(u32 param_1, s32 param_2, u32 param_3, s32 param_4, u32 param_5) {
    lbl_8035AD80 = param_2;
    lbl_8035AD8C = ((VCall_fn_8017C324_0 *)(param_2))->m();
    lbl_8035AD84 = param_4;
    lbl_8035AD90 = ((VCall_fn_8017C324_1 *)(param_4))->m();
    lbl_8035AD88 = param_5;
    fn_8017C090((int)(param_1), (int)(param_3));
}
}
