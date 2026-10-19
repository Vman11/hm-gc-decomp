// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C80179FE4Fv[];
extern u8 __dt__9C8017B8ECFv[];
extern u8 __dt__9C801805A0Fv[];
extern u8 __dt__9C80185E60Fv[];
extern u8 __dt__9C8018B484Fv[];
extern u8 __dt__9C80197BECFv[];
void fn_800E1E88(int, int);
void fn_800F8DD0(int);

void fn_8018E2D0(s32 param_1) {
    if (*(u32 *)(param_1 + 0x2c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x2c)), (int)(__dt__9C8018B484Fv));
    }
    if (*(u32 *)(param_1 + 0x38) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x38)), (int)(__dt__9C801805A0Fv));
    }
    if (*(u32 *)(param_1 + 0x34) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x34)), (int)(__dt__9C80197BECFv));
    }
    if (*(u32 *)(param_1 + 0x30) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x30)), (int)(__dt__9C80179FE4Fv));
    }
    if (*(u32 *)(param_1 + 0x3c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x3c)), (int)(__dt__9C80185E60Fv));
    }
    if (*(u32 *)(param_1 + 0x40) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x40)), (int)(__dt__9C8017B8ECFv));
    }
    fn_800F8DD0((int)(param_1));
    *(u32 *)(param_1 + 0x14) = 0;
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0x20) = 0;
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x24) = 0;
    *(u32 *)(param_1 + 0x28) = 0;
    *(u32 *)(param_1 + 0x2c) = 0;
    *(u32 *)(param_1 + 0x30) = 0;
    *(u32 *)(param_1 + 0x38) = 0;
    *(u32 *)(param_1 + 0x34) = 0;
    *(u32 *)(param_1 + 0x3c) = 0;
    *(u32 *)(param_1 + 0x40) = 0;
}

} /* extern "C" */
