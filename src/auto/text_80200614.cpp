// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035B168;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
void fn_801FE508(int, int);
struct C801FE768 { char pad[0x20]; C801FE768(void); };

u32 fn_80200614(u32 param_1) {
    u32 iVar1;

    if (*(u32 *)(param_1 + 200) == 0) {
        if (lbl_8035B168 == 0) {
            fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
        }
        fn_800F7EC0((int)(lbl_8035B168));
        iVar1 = (u32) new C801FE768();
        *(u32 *)(param_1 + 200) = iVar1;
        fn_800F7E98();
        if (*(u32 *)(param_1 + 200) == 0) {
            fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
        }
        fn_801FE508((int)(*(u32 *)(param_1 + 200)), (int)(param_1));
    }
    return *(u32 *)(param_1 + 200);
}
}
