/* Functions from 0x802195E0 to 0x8021962C, found by decomp-toolkit. */
#include "common.h"

void fn_802195E0(void) {

}

void fn_802195E4(void) {

}

void fn_802195E8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void fn_802195F0(void *arg0) {
    extern u8 lbl_802F0160[];
    *(void **)((char *)arg0 + 0x24) = lbl_802F0160;
    *(s32 *)((char *)arg0 + 0x0) = 0;
    *(s32 *)((char *)arg0 + 0x4) = 0;
    *(s32 *)((char *)arg0 + 0x8) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x10) = 0;
    *(s32 *)((char *)arg0 + 0x14) = 1;
    *(s32 *)((char *)arg0 + 0x18) = 1;
    *(s32 *)((char *)arg0 + 0x1C) = 0;
    *(s32 *)((char *)arg0 + 0x20) = 0;
}

