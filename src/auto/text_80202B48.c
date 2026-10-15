/* Functions from 0x80202B48 to 0x80203040, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_80365730;
extern f32 lbl_80365734;
void fn_80202B58(u8* arg0) {
    arg0[0x1C] |= 1;
}

s32 fn_80202B68(u8* arg0) {
    u8 flags = arg0[0x1C];
    if ((flags & 2) || flags != 0) {
        return 1;
    }
    return 0;
}

s32 fn_80202B8C(u8* arg0) {
    u8* p = *(u8**)(arg0 + 0x10);
    u32 flags;
    u8* q;

    if (p != NULL) {
        flags = *(u32*)(p + 0x8);
        if (flags & 0x400) {
            if (flags & 0x80) {
                q = *(u8**)(arg0 + 0xAC);
                if (q != NULL && *(u16*)(q + 0x146) != 0) {
                    return 1;
                }
            } else {
                q = *(u8**)(arg0 + 0xA0);
                if (q != NULL && *(u16*)(q + 0x146) != 0) {
                    return 1;
                }
            }
        } else if (flags & 0x800) {
            return arg0[0x1C] & 1;
        }
    }
    return 0;
}

void fn_80202C08(u8* arg0) {
    *(s32*)(arg0 + 0x10) = 0;
    *(s32*)(arg0 + 0x18) = 0;
    *(s32*)(arg0 + 0x14) = 0;
    *(s32*)(arg0 + 0x30) = 0;
    arg0[0x1C] = 0;
    *(s32*)(arg0 + 0x20) = 0;
    *(s32*)(arg0 + 0x24) = 0;
    *(f32*)(arg0 + 0x4) = lbl_80365730;
    *(f32*)(arg0 + 0x8) = lbl_80365730;
    *(f32*)(arg0 + 0xC) = lbl_80365730;
    *(s32*)(arg0 + 0x28) = 0;
    *(f32*)(arg0 + 0x2C) = lbl_80365734;
}

void fn_80202C50(u8* arg0) {
    *(s32*)(arg0 + 0x10) = 0;
    *(s32*)(arg0 + 0x18) = 0;
    *(s32*)(arg0 + 0x14) = 0;
    *(s32*)(arg0 + 0x30) = 0;
    arg0[0x1C] = 0;
    *(s32*)(arg0 + 0x20) = 0;
    *(s32*)(arg0 + 0x24) = 0;
    *(f32*)(arg0 + 0x4) = lbl_80365730;
    *(f32*)(arg0 + 0x8) = lbl_80365730;
    *(f32*)(arg0 + 0xC) = lbl_80365730;
    *(s32*)(arg0 + 0x28) = 0;
    *(f32*)(arg0 + 0x2C) = lbl_80365734;
}

