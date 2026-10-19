// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035ACB8;
void fn_800F7E98(void);
u32 __nw__FUl(void);
void __ct__9C8014E960Fv(void);

} /* extern "C" */

extern "C" {
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(int);
}
struct C8014E960 { char pad[0xc58]; C8014E960(void); };

extern "C" u32 fn_8014EA30(void) {
    u32 iVar1;

    if (lbl_8035ACB8 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035ACB8));
    iVar1 = (u32) new C8014E960();
    fn_800F7E98();
    if (iVar1 == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    return iVar1;
}
