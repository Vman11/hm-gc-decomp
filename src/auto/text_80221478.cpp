// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80220C38[];
extern u32 lbl_8035B290;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nw__FUl(int);
void fn_80220A20(void);

extern "C" {
}


extern "C" u32 fn_80221478(void) {
    u32 iVar1;

    if (lbl_8035B290 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B290));
    iVar1 = __nw__FUl((int)(0xc));
    if (iVar1 != 0) {
        fn_80220A20();
        *(u8 **)(iVar1 + 8) = __vt__9C80220C38;
    }
    fn_800F7E98();
    if (iVar1 == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    return iVar1;
}

} /* extern "C" */
