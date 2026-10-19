// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035B478;
extern u32 lbl_8035B5C4;
void __dt__9C801AD710Fv(int, int);
void fn_80038B90(int);
void fn_8003AB08(int, int);
void fn_801AD0A8(int);
void fn_8023DD14(int, int);
void fn_80254DB4(int);
struct VCall_fn_80031434_0 { char vptr_pad[0x2f0]; virtual void p0(); virtual void m(); };
struct VCall_fn_80031434_1 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };
struct VCall_fn_80031434_2 { virtual void p0(); virtual void m(); };
struct VCall_fn_80031434_3 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
struct VCall_fn_80031434_4 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

void fn_80031434(u32 param_1) {
    ((VCall_fn_80031434_0 *)(param_1))->m();
    ((VCall_fn_80031434_1 *)(*(u32 *)(lbl_8035B5C4 + 4)))->m();
    if (*(u32 *)(param_1 + 0x300) != 0) {
        fn_80038B90((int)(*(u32 *)(param_1 + 0x300)));
    }
    if ((lbl_8035B478 != 0) && (*(u32 *)(param_1 + 0x288) != 0)) {
        fn_8023DD14((int)(lbl_8035B478), (int)(*(u32 *)(param_1 + 0x288)));
    }
    if (*(u32 *)(param_1 + 0x288) != 0) {
        fn_801AD0A8((int)(*(u32 *)(param_1 + 0x288)));
        __dt__9C801AD710Fv((int)(*(u32 *)(param_1 + 0x288)), (int)(1));
        *(u32 *)(param_1 + 0x288) = 0;
    }
    if (*(u32 **)(param_1 + 0x32c) != (u32 *)0x0) {
        ((VCall_fn_80031434_2 *)(*(u32 **)(param_1 + 0x32c)))->m();
        fn_8003AB08((int)(*(u32 *)(param_1 + 0x32c)), (int)(1));
        *(u32 *)(param_1 + 0x32c) = 0;
    }
    if (*(u32 **)(param_1 + 0x80) != (u32 *)0x0) {
        ((VCall_fn_80031434_3 *)(*(u32 **)(param_1 + 0x80)))->m();
    }
    if (*(u32 **)(param_1 + 0x84) != (u32 *)0x0) {
        ((VCall_fn_80031434_4 *)(*(u32 **)(param_1 + 0x84)))->m();
    }
    fn_80254DB4((int)(param_1));
    *(u32 *)(param_1 + 0x31c) = 0;
    *(u32 *)(param_1 + 0x288) = 0;
    *(u32 *)(param_1 + 0x310) = 0;
    *(u32 *)(param_1 + 0x32c) = 0;
    *(u32 *)(param_1 + 0x328) = 0;
    *(u32 *)(param_1 + 800) = 0;
    *(u32 *)(param_1 + 0x324) = 0;
    *(u32 *)(param_1 + 0x318) = 0;
    *(u32 *)(param_1 + 0x330) = 0;
    *(u32 *)(param_1 + 0x300) = 0;
}
}
