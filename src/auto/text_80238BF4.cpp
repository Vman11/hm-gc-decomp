// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 *lbl_8035B65C;
void fn_8019B380(u32, u32);
void fn_802289C8(u32, u32);
void fn_8022D9AC(u8 *);
void fn_8023994C(u8 *);
void fn_80271BB8(u32, u8 *, u32);
struct VCall_fn_80238BF4_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
struct VCall_fn_80238BF4_1 {  virtual void m(s32); };
struct VCall_fn_80238BF4_2 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(); };
struct VCall_fn_80238BF4_3 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(s32); };

#pragma opt_propagation off
void fn_80238BF4(u8 *param_1) {
    u32 c;

    if (*(s32 **)(param_1 + 0x1e4) != 0 && **(s32 **)(param_1 + 0x1e4) == 1) {
        c = *(u32 *)(lbl_8035B65C + 0xc);
        fn_80271BB8(*(u32 *)(lbl_8035B65C + 0x74), param_1, c);
    }
    if (*(VCall_fn_80238BF4_0 **)(param_1 + 0x20c) != 0) {
        (*(VCall_fn_80238BF4_0 **)(param_1 + 0x20c))->m();
        if (*(VCall_fn_80238BF4_1 **)(param_1 + 0x20c) != 0) {
            (*(VCall_fn_80238BF4_1 **)(param_1 + 0x20c))->m(1);
        }
    }
    if (*(u32 *)(param_1 + 0x22c) != 0) {
        fn_8019B380(*(u32 *)(lbl_8035B65C + 0xc), *(u32 *)(param_1 + 0x22c));
        (*(VCall_fn_80238BF4_2 **)(param_1 + 0x22c))->m();
        if (*(VCall_fn_80238BF4_3 **)(param_1 + 0x22c) != 0) {
            (*(VCall_fn_80238BF4_3 **)(param_1 + 0x22c))->m(1);
        }
    }
    if (*(u32 *)(param_1 + 0x230) != 0) {
        fn_802289C8(*(u32 *)(param_1 + 0xa4), *(u32 *)(param_1 + 0x230));
    }
    fn_8023994C(param_1);
    fn_8022D9AC(param_1);
}
#pragma opt_propagation reset

} /* extern "C" */
