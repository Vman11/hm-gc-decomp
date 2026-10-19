// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C801E6678Fv[];
extern u8 __dt__9C801DFDC8Fv[];
extern u8 __dt__9C801E4C2CFv[];
extern u8 __dt__9C801E5BA4Fv[];
extern u8 __dt__9C801E5F8CFv[];
extern u8 __dt__9C801E62E8Fv[];
extern u8 fn_801E6C0C[];
extern u8 __dt__9C801EA59CFv[];
extern u8 __dt__9C801EAE64Fv[];
extern u8 __dt__9C801EDA6CFv[];
extern u8 __dt__9C801EDD20Fv[];
extern u8 __dt__9C801EEE6CFv[];
extern u8 __dt__9C801EF158Fv[];
extern u8 __dt__9C801EF5D0Fv[];
extern u8 fn_801F0858[];
void fn_800E1E88(int, int);
void fn_800F8DD0(int);
void fn_801ECAC0(int);

void fn_801ECB44(s32 param_1) {
    if (*(u32 *)(param_1 + 0x14) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x14)), (int)(__dt__9C801DFDC8Fv));
    }
    if (*(u32 *)(param_1 + 0x18) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x18)), (int)(__dt__9C801EA59CFv));
    }
    if (*(u32 *)(param_1 + 0x1c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x1c)), (int)(__dt__9C801E4C2CFv));
    }
    if (*(u32 *)(param_1 + 0x20) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x20)), (int)(__dt__9C801E5BA4Fv));
    }
    if (*(u32 *)(param_1 + 0x24) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x24)), (int)(fn_801E6C0C));
    }
    if (*(u32 *)(param_1 + 0x38) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x38)), (int)(__dt__9C801E6678Fv));
    }
    if (*(u32 *)(param_1 + 0x3c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x3c)), (int)(__dt__9C801EF5D0Fv));
    }
    if (*(u32 *)(param_1 + 0x30) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x30)), (int)(__dt__9C801E62E8Fv));
    }
    if (*(u32 *)(param_1 + 0x34) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x34)), (int)(__dt__9C801EF158Fv));
    }
    if (*(u32 *)(param_1 + 0x28) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x28)), (int)(__dt__9C801E5F8CFv));
    }
    if (*(u32 *)(param_1 + 0x2c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x2c)), (int)(__dt__9C801EEE6CFv));
    }
    if (*(u32 *)(param_1 + 0x40) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x40)), (int)(__dt__9C801EAE64Fv));
    }
    if (*(u32 *)(param_1 + 0x44) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x44)), (int)(__dt__9C801EDA6CFv));
    }
    if (*(u32 *)(param_1 + 0x48) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x48)), (int)(__dt__9C801EDD20Fv));
    }
    if (*(u32 *)(param_1 + 0x4c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x4c)), (int)(fn_801F0858));
    }
    fn_800F8DD0((int)(param_1));
    fn_801ECAC0((int)(param_1));
}

} /* extern "C" */
