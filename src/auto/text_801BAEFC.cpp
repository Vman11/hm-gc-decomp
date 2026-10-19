// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EB3A8[];
extern u32 lbl_8035AFCC;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nw__FUl(int);
void fn_801B31A4(void);

extern "C" {
}


extern "C" u32 fn_801BAEFC(void) {
    u32 iVar1;

    if (lbl_8035AFCC == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AFCC));
    iVar1 = __nw__FUl((int)(0x19c));
    if (iVar1 != 0) {
        fn_801B31A4();
        *(u8 **)(iVar1 + 0x80) = lbl_802EB3A8;
        *(u32 *)(iVar1 + 0x174) = 0;
        *(u32 *)(iVar1 + 0x198) = 0;
        *(u32 *)(iVar1 + 0x164) = 0;
        *(u32 *)(iVar1 + 0x16c) = 0;
        *(u32 *)(iVar1 + 0x168) = 0;
        *(u32 *)(iVar1 + 0x170) = 1;
        *(u32 *)(iVar1 + 0x178) = 0;
        *(u32 *)(iVar1 + 0x17c) = 0;
    }
    fn_800F7E98();
    if (iVar1 == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    return iVar1;
}

} /* extern "C" */
