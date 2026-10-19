// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035AD00;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nw__FUl(int);
void __ct__9C80152B64Fv(void);

extern "C" {
}
struct C80152B64 { char pad[0x40]; C80152B64(void); };

extern "C" u32 fn_8015DE54(void) {
    u32 iVar1;

    if (lbl_8035AD00 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AD00));
    iVar1 = (u32) new C80152B64();
    fn_800F7E98();
    if (iVar1 == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    return iVar1;
}

} /* extern "C" */
