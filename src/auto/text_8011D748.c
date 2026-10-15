/* Functions from 0x8011D748 to 0x8011D79C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AB50;
void fn_8011D748(s32 arg0) {
    lbl_8035AB50 = arg0;
}

void fn_8011D750(void) {

}

void fn_8011D754(void) {

}

void fn_8011D758(u8* arg0) {
    *(s32*)(arg0 + 0xC0) = 0;
}

void fn_8011D764(void* arg0) {
    *(s32*)((u8*)arg0 + 0xC0) = 1;
}

void fn_8011D770(void *arg0, u32 arg1, f32 arg2) {
    if (arg1 < *(u32 *)((u8 *)arg0 + 0x8)) {
        (*(f32 **)((u8 *)arg0 + 0xA4))[arg1] = (*(f32 **)((u8 *)arg0 + 0xA0))[arg1];
        (*(f32 **)((u8 *)arg0 + 0xA0))[arg1] = arg2;
    }
}

