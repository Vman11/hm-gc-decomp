// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
extern void *lbl_8035B530;
extern u8 lbl_802B3850[];
extern char lbl_80359220[8];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C80044BE8 : C8024262C {
    u8 pad[288];
    C80044BE8(u8 *b) {
        *(u8 **)this = b + 700;
        *(u32 *)(pad + 84) = 5;
        *(u32 *)(pad + 44) = 5;
        *(u32 *)(pad + 104) = 1;
        *(u32 *)(pad + 92) = 0;
        *(u32 *)(pad + 128) = 0;
        *(u32 *)(pad + 124) = 0;
        *(u32 *)(pad + 132) = 0;
        *(u32 *)(pad + 136) = 0;
        *(u32 *)(pad + 140) = 0;
        *(u32 *)(pad + 148) = 0;
        *(u8 **)(pad + 88) = b + 540;
        *(u8 **)(pad + 40) = b + 560;
        *(u8 **)(pad + 48) = b + 620;
        *(char **)(pad + 108) = lbl_80359220;
        *(u32 *)(pad + 120) = 0;
        *(u32 *)(pad + 196) = 0;
        *(u32 *)(pad + 200) = 0;
        *(u32 *)(pad + 204) = 0;
        *(u32 *)(pad + 244) = 0;
        *(u32 *)(pad + 252) = 0;
        *(u32 *)(pad + 268) = 0;
        *(u32 *)(pad + 280) = 0;
        *(u32 *)(pad + 284) = 0;
    }
};

void *fn_80044BE8(void) {
    u8 *b = lbl_802B3850;
    C80044BE8 *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C80044BE8(b);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
#pragma opt_propagation reset

} /* extern "C" */
