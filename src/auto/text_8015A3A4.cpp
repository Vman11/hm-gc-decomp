// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035ACD8;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nw__FUl(int);
void __ct__9C8015C918Fv(void);

extern "C" {
}
struct C8015C918 { char pad[0x1c]; C8015C918(void); };

extern "C" u32 fn_8015A3A4(void) {
    u32 iVar1;

    if (lbl_8035ACD8 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035ACD8));
    iVar1 = (u32) new C8015C918();
    fn_800F7E98();
    if (iVar1 == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    return iVar1;
}

} /* extern "C" */
