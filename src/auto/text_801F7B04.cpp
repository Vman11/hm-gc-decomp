// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dt__9C801E1138Fv(void);
void __dt__9C801E156CFv(void);
void __dt__9C801E1890Fv(void);
void __dt__9C801E3C20Fv(void);
void __dt__9C801E7490Fv(void);
void __dt__9C801E9608Fv(void);
void __dt__9C801E99C8Fv(void);
void __dt__9C801EA320Fv(void);
void __dt__9C801ED250Fv(void);
void __dt__9C801EE640Fv(void);
void __dt__9C801EFF94Fv(void);
void __dt__9C801F1028Fv(void);
void fn_801DE8CC(void);
void fn_801DEE7C(void);
void fn_801DF494(void);
void fn_801E0418(void);
void fn_801E0A74(void);
void fn_801E4018(void);
void fn_801E70BC(void);
void fn_801E7D90(void);
void fn_801E8198(void);
void fn_801E8754(void);
void fn_801E8BE4(void);
void fn_801E9138(void);
void fn_801EB3AC(void);
void fn_801EE008(void);
void fn_801EEA74(void);
void fn_801F04EC(void);
void fn_801F6B40(void);
void fn_801F7378(void);
void fn_800E1E88(int, int);
void fn_800F8DD0(int);
void fn_801F9F5C(int);

void fn_801F7B04(s32 param_1) {
    if (*(u32 *)(param_1 + 0x18) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x18)), (int)(fn_801DEE7C));
    }
    if (*(u32 *)(param_1 + 0x1c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x1c)), (int)(fn_801E4018));
    }
    if (*(u32 *)(param_1 + 0x20) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x20)), (int)(fn_801E70BC));
    }
    if (*(u32 *)(param_1 + 0x24) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x24)), (int)(fn_801E8BE4));
    }
    if (*(u32 *)(param_1 + 0x28) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x28)), (int)(fn_801DE8CC));
    }
    if (*(u32 *)(param_1 + 0x2c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x2c)), (int)(fn_801EEA74));
    }
    if (*(u32 *)(param_1 + 0x30) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x30)), (int)(fn_801E0418));
    }
    if (*(u32 *)(param_1 + 0x34) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x34)), (int)(fn_801DF494));
    }
    if (*(u32 *)(param_1 + 0x38) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x38)), (int)(fn_801E0A74));
    }
    if (*(u32 *)(param_1 + 0x3c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x3c)), (int)(__dt__9C801E1138Fv));
    }
    if (*(u32 *)(param_1 + 0x40) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x40)), (int)(__dt__9C801E156CFv));
    }
    if (*(u32 *)(param_1 + 0x44) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x44)), (int)(__dt__9C801E1890Fv));
    }
    if (*(u32 *)(param_1 + 0x48) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x48)), (int)(fn_801E7D90));
    }
    if (*(u32 *)(param_1 + 0x4c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x4c)), (int)(fn_801E8198));
    }
    if (*(u32 *)(param_1 + 0x50) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x50)), (int)(fn_801E8754));
    }
    if (*(u32 *)(param_1 + 0x54) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x54)), (int)(fn_801E9138));
    }
    if (*(u32 *)(param_1 + 0x58) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x58)), (int)(fn_801EB3AC));
    }
    if (*(u32 *)(param_1 + 0x5c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x5c)), (int)(fn_801EE008));
    }
    if (*(u32 *)(param_1 + 100) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 100)), (int)(fn_801F7378));
    }
    if (*(u32 *)(param_1 + 0x68) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x68)), (int)(fn_801F6B40));
    }
    if (*(u32 *)(param_1 + 0x6c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x6c)), (int)(fn_801F04EC));
    }
    if (*(u32 *)(param_1 + 0x60) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x60)), (int)(__dt__9C801EE640Fv));
    }
    if (*(u32 *)(param_1 + 0x70) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x70)), (int)(__dt__9C801E9608Fv));
    }
    if (*(u32 *)(param_1 + 0x74) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x74)), (int)(__dt__9C801E99C8Fv));
    }
    if (*(u32 *)(param_1 + 0x78) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x78)), (int)(__dt__9C801E7490Fv));
    }
    if (*(u32 *)(param_1 + 0x7c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x7c)), (int)(__dt__9C801EA320Fv));
    }
    if (*(u32 *)(param_1 + 0x80) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x80)), (int)(__dt__9C801EFF94Fv));
    }
    if (*(u32 *)(param_1 + 0x84) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x84)), (int)(__dt__9C801ED250Fv));
    }
    if (*(u32 *)(param_1 + 0x88) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x88)), (int)(__dt__9C801F1028Fv));
    }
    if (*(u32 *)(param_1 + 0x8c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x8c)), (int)(__dt__9C801E3C20Fv));
    }
    fn_800F8DD0((int)(param_1));
    fn_801F9F5C((int)(param_1));
}

} /* extern "C" */
