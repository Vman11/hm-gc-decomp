// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80117D5C(int);
void fn_80118144(int);
void fn_8011893C(int);
void fn_801191A0(int);
void fn_8011C284(int);
void fn_8011D748(int);
void fn_8011F7C0(int);
void fn_8011FC1C(int);

void fn_801A2824(u32 param_1, u32 param_2) {
    int p;
    int q;

    p = *(int *)(param_2 + 4);
    fn_8011FC1C(p);
    fn_8011F7C0(p);
    fn_8011893C(p);
    fn_8011D748(p);
    fn_8011C284(p);
    fn_80118144(p);
    fn_80117D5C(p);
    fn_801191A0(p);
    if ((u32)(q = *(int *)(param_2 + 0x14)) != 0) {
        fn_8011893C(q);
        fn_8011D748(q);
    }
    if (*(void **)(param_2 + 0xc) != 0) {
        fn_8011FC1C((int)(*(void **)(param_2 + 0xc)));
    }
    if (*(void **)(param_2 + 0x10) != 0) {
        fn_8011F7C0((int)(*(void **)(param_2 + 0x10)));
    }
    if (*(void **)(param_2 + 0x18) != 0) {
        fn_8011893C((int)(*(void **)(param_2 + 0x18)));
    }
    if (*(void **)(param_2 + 0x1c) != 0) {
        fn_8011D748((int)(*(void **)(param_2 + 0x1c)));
    }
    if (*(void **)(param_2 + 0x24) != 0) {
        fn_8011C284((int)(*(void **)(param_2 + 0x24)));
    }
    if (*(void **)(param_2 + 0x28) != 0) {
        fn_80117D5C((int)(*(void **)(param_2 + 0x28)));
    }
    if (*(void **)(param_2 + 0x2c) != 0) {
        fn_80118144((int)(*(void **)(param_2 + 0x2c)));
    }
    if (*(void **)(param_2 + 0x20) != 0) {
        fn_801191A0((int)(*(void **)(param_2 + 0x20)));
    }
}

} /* extern "C" */
