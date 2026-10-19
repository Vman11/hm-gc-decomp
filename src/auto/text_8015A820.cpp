// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E6EB8[];
extern u32 lbl_8035ACD8;
u32 __nw__FUl(int);
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
void fn_80131C34(void);

extern "C" {
}


extern "C" u32 * fn_8015A820(void) {
    u32 *puVar1;

    if (lbl_8035ACD8 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035ACD8));
    puVar1 = (u32 *)__nw__FUl((int)(8));
    if (puVar1 != (u32 *)0x0) {
        fn_80131C34();
        *puVar1 = (u32)lbl_802E6EB8;
    }
    fn_800F7E98();
    if (puVar1 == (u32 *)0x0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    return puVar1;
}

} /* extern "C" */
