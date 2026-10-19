// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802AF9BC[];
void __dt__9C8003EFF4Fv(int, int);
void __dl__FPv(int);
void __dt__9C80255A20Fv(int, int);
void fn_8008E3DC(int, int);
struct VCall_fn_800301E4_0 { char vptr_pad[0xc0]; virtual void p0(); virtual void p1(); virtual void m(); };

s32 fn_800301E4(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0xc0) = lbl_802AF9BC;
        ((VCall_fn_800301E4_0 *)(param_1))->m();
        fn_8008E3DC((int)(param_1 + 0x1c8), (int)(0xffffffff));
        __dt__9C8003EFF4Fv((int)(param_1 + 0xc4), (int)(0xffffffff));
        __dt__9C80255A20Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
