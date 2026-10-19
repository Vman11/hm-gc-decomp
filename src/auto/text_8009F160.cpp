// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern f32 lbl_8035B018;
extern s32 lbl_8035B65C;
extern s32 lbl_8035B684;
extern const f32 lbl_80361978;
void fn_801BB258(int, int, int);
void __ct__9C80253F24Fiiii(int, int, int, int, int);
struct VCall_fn_8009F160_0 { char vptr_pad[0xc0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m(int); };

void fn_8009F160(s32 param_1, u32 param_2, u32 param_3) {
    if (*(s8 *)(param_1 + 0x174) != '\0') {
        ((VCall_fn_8009F160_0 *)(lbl_8035B684))->m((s32)(param_1 + 0x174));
    }
    if (*(s8 *)(param_1 + 0x17c) != '\0') {
        __ct__9C80253F24Fiiii((int)(lbl_8035B65C), (int)(param_1 + 0x17c), (int)(0), (int)(0), (int)(0));
    }
    fn_801BB258((int)(param_1), (int)(param_2), (int)(param_3));
    lbl_8035B018 = lbl_80361978;
}
}
