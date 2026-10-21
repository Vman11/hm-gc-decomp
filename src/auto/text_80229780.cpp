// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80365CE4[0x8];
void fn_800F6E88(void *, void *);
s32 fn_800F6F00(void *, void *);

u32 fn_80229780(u32 param_1, u32 *param_2) {
    s32 iVar1;
    s32 *piVar2;
    u8 auStack_8 [8];

    piVar2 = (s32 *)*param_2;
    if ((piVar2 != (s32 *)0x0) && (*(s32 *)(*piVar2 + 8) == 4)) {
        fn_800F6E88(auStack_8, piVar2 + 3);
        iVar1 = fn_800F6F00(auStack_8, lbl_80365CE4); /* "GmActor" */
        if (iVar1 == 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
