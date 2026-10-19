/* Functions from 0x80036E0C to 0x80036E44, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_80036E0C(void* arg0, void* arg1) {
    *(f32*)((u8*)arg1 + 0) = *(f32*)((u8*)arg0 + 0x700);
    *(f32*)((u8*)arg1 + 4) = *(f32*)((u8*)arg0 + 0x704);
    *(f32*)((u8*)arg1 + 8) = *(f32*)((u8*)arg0 + 0x708);
}

void fn_80036E28(void* arg0, void* arg1) {
    *(f32*)((u8*)arg0 + 0x5D0) = *(f32*)((u8*)arg1 + 0);
    *(f32*)((u8*)arg0 + 0x5D4) = *(f32*)((u8*)arg1 + 4);
    *(f32*)((u8*)arg0 + 0x5D8) = *(f32*)((u8*)arg1 + 8);
}

} /* extern "C" */
