// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
extern void *lbl_8035B530;
extern u8 lbl_802C4BB0[];
extern u8 lbl_80359310[8];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C80084450 : C8024262C {
    u8 pad[300];
    C80084450(u8 *b) {
        *(u8 **)this = b + 1160;
        *(u32 *)(pad + 0x54) = 18;
        *(u32 *)(pad + 0x2c) = 6;
        *(u32 *)(pad + 0x68) = 1;
        *(u32 *)(pad + 0x5c) = 0;
        *(u32 *)(pad + 0x80) = 0;
        *(u32 *)(pad + 0x7c) = 0;
        *(u32 *)(pad + 0x84) = 0;
        *(u32 *)(pad + 0x88) = 15;
        *(u32 *)(pad + 0x8c) = 0;
        *(u32 *)(pad + 0x94) = 0;
        *(u8 **)(pad + 0x58) = b + 728;
        *(u8 **)(pad + 0x28) = b + 800;
        *(u8 **)(pad + 0x30) = b + 872;
        *(u8 **)(pad + 0x6c) = lbl_80359310;
        *(u32 *)(pad + 0x78) = 0;
        *(u32 *)(pad + 0xc4) = 0;
        *(u32 *)(pad + 0xc8) = 0;
        *(u32 *)(pad + 0xcc) = 0;
        *(u8 **)(pad + 0xf4) = b + 540;
        *(u32 *)(pad + 0xfc) = 0;
        *(u32 *)(pad + 0x10c) = 0;
        *(u32 *)(pad + 0x118) = 0;
        *(u32 *)(pad + 0x11c) = 2;
        *(u32 *)(pad + 0x120) = 11;
        *(u32 *)(pad + 0x124) = 0;
        *(u32 *)(pad + 0x128) = 1;
    }
};

void *fn_80084450(void) {
    u8 *b = lbl_802C4BB0;
    C80084450 *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C80084450(b);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
#pragma opt_propagation reset

} /* extern "C" */
