// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80159C0C[];
extern u32 lbl_8035ACD8;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nw__FUl(int);
void __ct__9C8013919CFv(void);

extern "C" {
}


extern "C" u32 fn_80159C6C(void) {
    u32 iVar1;

    if (lbl_8035ACD8 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035ACD8));
    iVar1 = __nw__FUl((int)(0xf8));
    if (iVar1 != 0) {
        __ct__9C8013919CFv();
        *(u8 **)(iVar1 + 0xf4) = __vt__9C80159C0C;
    }
    fn_800F7E98();
    if (iVar1 == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    return iVar1;
}

} /* extern "C" */
