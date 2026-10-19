// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800C3AEC(int, int);
void fn_800FB700(int, int, int);
s32 fn_8011F36C(int);
extern void *memset(void *, int, unsigned long);

u32 fn_8014DE10(s32 *param_1) {
    u32 uVar1;

    if (*(s32 *)(*param_1 + 0xbc) == 0) {
        uVar1 = 0;
    }
    else {
        fn_800C3AEC((int)(param_1[5]), (int)(2));
        param_1[4] = 0;
        param_1[5] = 0;
        memset(param_1 + 6,0,4);
        memset(param_1 + 7,0,4);
        param_1[8] = 0;
        memset(param_1 + 0x69,0,0x80);
        fn_800FB700((int)(*param_1 + 0x24), (int)(param_1 + 0x69), (int)(0x3f));
        uVar1 = fn_8011F36C((int)(*param_1));
    }
    return uVar1;
}

} /* extern "C" */
