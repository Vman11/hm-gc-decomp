/* Functions from 0x8018B2A0 to 0x8018B2FC, found by decomp-toolkit. */
#include "common.h"

void fn_8018B2A0(u8 *arg0, u8 *arg1, u8 *arg2) {
    *(u32 *)(arg0 + 0x4) = 0;
    *(u32 *)(arg0 + 0x10) = *(u32 *)(arg2 + 0x10);
    *(u32 *)(arg0 + 0x14) = *(u32 *)(arg2 + 0x14);
    *(f32 *)(arg0 + 0x18) = *(f32 *)(arg2 + 0x18);
    *(f32 *)(arg0 + 0x1C) = *(f32 *)(arg2 + 0x1C);
    *(f32 *)(arg0 + 0x20) = *(f32 *)(arg2 + 0x20);
    *(f32 *)(arg0 + 0x24) = *(f32 *)(arg2 + 0x24);
    *(f32 *)(arg0 + 0x28) = *(f32 *)(arg2 + 0x28);
    *(f32 *)(arg0 + 0x2C) = *(f32 *)(arg2 + 0x2C);
    *(u32 *)(arg0 + 0x0) = *(u32 *)(arg2 + 0x0);
    *(u32 *)(arg0 + 0x8) = *(u32 *)(arg2 + 0x8);
}
