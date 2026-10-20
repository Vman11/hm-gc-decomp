// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80232B68 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m6(s32); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m10(); };
extern "C" { extern volatile f32 lbl_80365DF8; extern volatile f32 lbl_80365E48; void __dla__FPv(void *); void fn_80238BF4(void *); }

void fn_80232B68(u8 *p) {
    if (*(V_80232B68 **)(p + 704) != NULL) {
        (*(V_80232B68 **)(p + 704))->m10();
        if (*(V_80232B68 **)(p + 704) != NULL) {
            (*(V_80232B68 **)(p + 704))->m6(1);
        }
    }
    if (*(void **)(p + 692) != NULL) {
        __dla__FPv(*(void **)(p + 692));
    }
    *(s32 *)(p + 620) = 0;
    *(s32 *)(p + 612) = 0;
    *(f32 *)(p + 616) = lbl_80365DF8;
    *(f32 *)(p + 600) = lbl_80365DF8;
    *(s32 *)(p + 604) = 0;
    *(s32 *)(p + 608) = 0;
    *(s32 *)(p + 628) = 0;
    *(s32 *)(p + 660) = 0;
    *(s32 *)(p + 664) = 0;
    *(s32 *)(p + 668) = 0;
    *(s32 *)(p + 672) = 0;
    *(s32 *)(p + 676) = 0;
    *(f32 *)(p + 632) = lbl_80365DF8;
    *(f32 *)(p + 636) = lbl_80365DF8;
    *(f32 *)(p + 640) = lbl_80365DF8;
    *(f32 *)(p + 644) = lbl_80365DF8;
    *(f32 *)(p + 648) = lbl_80365DF8;
    *(f32 *)(p + 652) = lbl_80365DF8;
    *(s32 *)(p + 656) = 0;
    *(f32 *)(p + 68) = lbl_80365E48;
    *(f32 *)(p + 72) = lbl_80365E48;
    *(f32 *)(p + 76) = lbl_80365E48;
    *(s32 *)(p + 680) = 0;
    *(s32 *)(p + 684) = 0;
    *(s32 *)(p + 704) = 0;
    *(s32 *)(p + 708) = 0;
    *(s32 *)(p + 688) = 0;
    *(s32 *)(p + 624) = 0;
    *(s32 *)(p + 712) = 0;
    *(s32 *)(p + 696) = 0;
    *(s32 *)(p + 692) = 0;
    fn_80238BF4(p);
}

} /* extern "C" */
