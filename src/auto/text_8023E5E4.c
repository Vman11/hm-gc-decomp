// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern char lbl_80366100[0x3];
extern char lbl_80366104[0x3];
extern char lbl_80366108[0x3];
extern char lbl_8036610C[0x3];
u32 fn_800EB324();
u32 fn_800EB4C8();
void fn_800EB764();
void fn_800F6FBC();
void fn_800F87F0();

void fn_8023E5E4(u32 param_1, u32 param_2) {
    u8 *puVar1;
    u32 iVar2;
    u8 auStack_118 [8];
    u8 auStack_110 [264];

    fn_800EB764(auStack_110,*(u32 *)(param_2 + 0x1e4));
    puVar1 = (u8 *)fn_800EB324(auStack_110,(void *)lbl_80366100);
    if ((((puVar1 != (u8 *)0x0) ||
              (puVar1 = (u8 *)fn_800EB324(auStack_110,(void *)lbl_80366104), puVar1 != (u8 *)0x0))
            || (puVar1 = (u8 *)fn_800EB324(auStack_110,(void *)lbl_80366108), puVar1 != (u8 *)0x0
                  )) || (puVar1 = (u8 *)fn_800EB324(auStack_110,(void *)lbl_8036610C),
                              puVar1 != (u8 *)0x0)) {
        *puVar1 = 0;
    }
    iVar2 = fn_800EB4C8(auStack_110,0x5c);
    if (iVar2 != 0) {
        fn_800F6FBC(iVar2 + 1,auStack_118);
    }
    else {
        fn_800F6FBC(auStack_110,auStack_118);
    }
    fn_800F87F0(param_1,auStack_118,param_2);
}
