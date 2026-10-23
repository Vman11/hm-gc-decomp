// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802C3FE0[];
extern u8 lbl_803592FC[4];
extern u8 lbl_803592F0[8];
extern u8 lbl_803592F8[4];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

} /* extern "C" */

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C8008007C : C8024262C {
    u8 pad[288];
    C8008007C(u8 *base) {
        *(void **)this = base + 832;
        *(s32 *)(pad + 0x2c) = *(s32 *)(pad + 0x54) = 6;
        *(s32 *)(pad + 0x68) = 2;
        *(s32 *)(pad + 0x5c) = 1;
        *(s32 *)(pad + 0x80) = 2;
        *(s32 *)(pad + 0x7c) = 3;
        *(s32 *)(pad + 0x84) = 0;
        *(s32 *)(pad + 0x88) = 0;
        *(s32 *)(pad + 0x8c) = 1;
        *(s32 *)(pad + 0x94) = 0;
        *(void **)(pad + 0x58) = base + 592;
        *(void **)(pad + 0x28) = base + 616;
        *(void **)(pad + 0x30) = base + 688;
        *(void **)(pad + 0x6c) = lbl_803592FC;
        *(void **)(pad + 0x78) = base + 576;
        *(void **)(pad + 0xc4) = lbl_803592F0;
        *(void **)(pad + 0xc8) = base + 540;
        *(s32 *)(pad + 0xcc) = 0;
        *(s32 *)(pad + 0xf4) = 0;
        *(void **)(pad + 0xfc) = lbl_803592F8;
        *(s32 *)(pad + 0x10c) = 0;
        *(s32 *)(pad + 0x118) = 0;
        *(s32 *)(pad + 0x11c) = 0;
    }
};

extern "C" {

void *fn_8008007C(void) {
    u8 *base = lbl_802C3FE0;
    void *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C8008007C(base);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
