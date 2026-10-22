// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
extern void *lbl_8035B530;
extern u8 lbl_802B3B60[];
extern u8 lbl_802AF9E8[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C80249F58 {
    C80249F58();
    ~C80249F58();
};

struct C800451D8 : C80249F58 {
    u8 pad[128];
    C800451D8(u8 *b) {
        *(u8 **)this = lbl_802AF9E8;
        *(u8 **)this = b + 940;
        *(u32 *)(pad + 84) = 9;
        *(u32 *)(pad + 44) = 9;
        *(u32 *)(pad + 104) = 28;
        *(u32 *)(pad + 92) = 0;
        *(u8 **)(pad + 88) = b + 652;
        *(u8 **)(pad + 40) = b + 688;
        *(u8 **)(pad + 48) = b + 796;
        *(u8 **)(pad + 108) = b + 540;
        *(u32 *)(pad + 120) = 0;
        *(u32 *)(pad + 124) = 0;
    }
};

void *fn_800451D8(void) {
    u8 *b = lbl_802B3B60;
    C800451D8 *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C800451D8(b);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
#pragma opt_propagation reset

} /* extern "C" */
