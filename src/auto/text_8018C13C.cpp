// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035AA28;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
void fn_8018B674(u32, u32, u32, u32, u32);
struct C8018B724 { u8 pad[0x98]; C8018B724(); ~C8018B724(); };

void fn_8018C13C(u32 *param_1) {
    u32 i;
    u32 cur;
    u32 end;

    if (lbl_8035AA28 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AA28);
    param_1[0xd] = (u32)new C8018B724[*param_1];
    fn_800F7E98();
    if (param_1[0xd] == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    if (lbl_8035AA28 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AA28);
    param_1[0xe] = (u32)new u8[*param_1 * param_1[2] * 0x10];
    fn_800F7E98();
    if (param_1[0xe] == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    i = 0;
    cur = param_1[0xd];
    end = cur + *param_1 * 0x98;
    for (; cur < end; cur += 0x98) {
        fn_8018B674(cur, param_1[2], param_1[3] + i * 8, param_1[4] + i * 0x2c, param_1[0xe] + i * 0x10);
        i += param_1[2];
    }
}

} /* extern "C" */
