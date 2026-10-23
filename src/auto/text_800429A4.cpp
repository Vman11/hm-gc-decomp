// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
extern void *lbl_8035B530;
extern u8 lbl_802B0E20[];
extern u8 lbl_802B2538[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C800429A4 : C8024262C {
    u8 pad[312];
    C800429A4(u8 *b) {
        *(u8 **)this = lbl_802B2538;
        *(u8 **)this = b + 5420;
        *(u32 *)(pad + 0x54) = 73;
        *(u32 *)(pad + 0x2c) = 73;
        *(u32 *)(pad + 0x68) = 29;
        *(u32 *)(pad + 0x5c) = 0;
        *(u32 *)(pad + 0x80) = 7;
        *(u32 *)(pad + 0x7c) = 0;
        *(u32 *)(pad + 0x84) = 0;
        *(u32 *)(pad + 0x88) = 26;
        *(u32 *)(pad + 0x8c) = 35;
        *(u32 *)(pad + 0x94) = 0;
        *(u8 **)(pad + 0x58) = b + 1148;
        *(u8 **)(pad + 0x28) = b + 1440;
        *(u8 **)(pad + 0x30) = b + 2316;
        *(u8 **)(pad + 0x6c) = b + 1032;
        *(u32 *)(pad + 0x78) = 0;
        *(u8 **)(pad + 0xc4) = b + 540;
        *(u32 *)(pad + 0xc8) = 0;
        *(u32 *)(pad + 0xcc) = 0;
        *(u8 **)(pad + 0xf4) = b + 568;
        *(u8 **)(pad + 0xfc) = b + 892;
        *(u32 *)(pad + 0x10c) = 0;
        *(u32 *)(pad + 0x12c) = 0;
        *(u32 *)(pad + 0x130) = 21;
        *(u32 *)(pad + 0x134) = 21;
    }
};

void *fn_800429A4(void) {
    u8 *b = lbl_802B0E20;
    C800429A4 *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C800429A4(b);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
#pragma opt_propagation reset

} /* extern "C" */
