/* Functions from 0x802523B8 to 0x8025240C, found by decomp-toolkit. */
#include "common.h"

void fn_802523B8(void) {

}

void fn_802523BC(void) {

}

void fn_802523D4(void) {

}

void fn_802523D8(void) {

}

void fn_802523DC(void) {

}

void fn_802523E0(void* arg0) { ((s32*)arg0)[1] = 0; }

void fn_802523EC(void* arg0) {
    if (*(volatile s32*)((u8*)arg0 + 0x4) != 0) {
        *(volatile s32*)((u8*)arg0 + 0x4) = 0;
    }
    *(volatile s32*)((u8*)arg0 + 0x4) = 1;
}

