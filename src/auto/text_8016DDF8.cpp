// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 __dt__9C8015FE00Fv[];
extern u8 lbl_802E7CC4[];
void __dl__FPv(int);
void __dt__9C800F92E8Fv(int, int);
void __dt__9C8013644CFv(int, int);
void __dt__9C80157658Fv(int, int);
void __dt__9C80158A08Fv(int, int);
void __dt__9C801599F4Fv(int, int);
void __dt__9C8015B350Fv(int, int);
void __dt__9C8015E11CFv(int, int);
void __dt__9C8016096CFv(int, int);
void __dt__9C80165F70Fv(int, int);
void __dt__9C80171288Fv(int, int);
void __dt__9C80179B00Fv(int, int);
void __dt__9C80218720Fv(int, int);
void fn_800E1F04(int, int, int, int);
struct VCall_fn_8016DDF8_0 { char vptr_pad[0x30]; virtual void p0(); virtual void m(); };

s32 fn_8016DDF8(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x30) = lbl_802E7CC4;
        ((VCall_fn_8016DDF8_0 *)(param_1))->m();
        __dt__9C80218720Fv((int)(param_1 + 0x27a0c), (int)(0xffffffff));
        fn_800E1F04((int)(param_1 + 0x23fc8), (int)(__dt__9C8015FE00Fv), (int)(100), (int)(0x80));
        __dt__9C8015E11CFv((int)(param_1 + 0x1f7b0), (int)(0xffffffff));
        __dt__9C80179B00Fv((int)(param_1 + 0xbf20), (int)(0xffffffff));
        __dt__9C80179B00Fv((int)(param_1 + 0xbf10), (int)(0xffffffff));
        __dt__9C8015E11CFv((int)(param_1 + 14000), (int)(0xffffffff));
        __dt__9C8015E11CFv((int)(param_1 + 0x32a4), (int)(0xffffffff));
        __dt__9C800F92E8Fv((int)(param_1 + 0x2a64), (int)(0xffffffff));
        __dt__9C8016096CFv((int)(param_1 + 0x2a1c), (int)(0xffffffff));
        __dt__9C801599F4Fv((int)(param_1 + 0x29a0), (int)(0xffffffff));
        __dt__9C80171288Fv((int)(param_1 + 0x27b8), (int)(0xffffffff));
        __dt__9C80158A08Fv((int)(param_1 + 0x1f44), (int)(0xffffffff));
        __dt__9C80165F70Fv((int)(param_1 + 0x410), (int)(0xffffffff));
        __dt__9C80157658Fv((int)(param_1 + 0x3b8), (int)(0xffffffff));
        __dt__9C8015B350Fv((int)(param_1 + 0x348), (int)(0xffffffff));
        __dt__9C8013644CFv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
