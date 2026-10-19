// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern s32 lbl_8035B460;
void __dt__9C8013ECE4Fv(int, int);
void fn_80095188(int);
void fn_8013E8C0(int);
void fn_80242210(int);
struct VCall_fn_80094C04_0 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };
struct VCall_fn_80094C04_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };

void fn_80094C04(s32 param_1) {
    s32 *piVar1;

    if (*(u32 *)(param_1 + 0x130) != 0) {
        fn_8013E8C0((int)(*(u32 *)(param_1 + 0x130)));
        __dt__9C8013ECE4Fv((int)(*(u32 *)(param_1 + 0x130)), (int)(1));
    }
    if (*(u32 *)(param_1 + 0x134) != 0) {
        ((VCall_fn_80094C04_0 *)(*(u32 *)(param_1 + 0x134)))->m();
        piVar1 = *(s32 **)(*(u32 *)(lbl_8035B460 + 0xc) + 0x2c44);
        ((VCall_fn_80094C04_1 *)(piVar1))->m((s32)(*(u32 *)(param_1 + 0x134)));
    }
    fn_80242210((int)(param_1));
    fn_80095188((int)(param_1));
}
}
