// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80246A30(void *, s32);

void fn_802635C0(u8 *p, u8 *a) {
    u8 *t;
    *(u8 **)(p + 244) = a;
    t = *(u8 **)(p + 244);
    if (*(u32 *)(t + 72) & 1) {
        *(u32 *)(p + 176) = t[76];
    }
    if (*(u32 *)(t + 72) & 2) {
        *(u32 *)(p + 180) = t[77];
    }
    if (*(u32 *)(t + 72) & 4) {
        *(u32 *)(p + 184) = t[78];
    }
    if (*(u32 *)(t + 72) & 8) {
        *(u32 *)(p + 188) = *(u32 *)(t + 80);
    }
    if (*(u32 *)(t + 72) & 16) {
        *(u32 *)(p + 196) = *(u32 *)(t + 84);
    }
    if (*(u32 *)(t + 72) & 32) {
        *(f32 *)(p + 204) = *(f32 *)(t + 88);
    }
    if (*(u32 *)(t + 72) & 64) {
        *(f32 *)(p + 212) = *(f32 *)(t + 92);
    }
    if (*(u32 *)(t + 72) & 128) {
        *(f32 *)(p + 216) = *(f32 *)(t + 96);
    }
    if (*(u32 *)(t + 72) & 256) {
        *(f32 *)(p + 208) = *(f32 *)(t + 100);
    }
    t = *(u8 **)(p + 244);
    if (t != NULL) {
        if (*(s32 *)(p + 176) == 2) {
            *(s32 *)(t + 16) = 1;
            fn_80246A30(t, 0);
        } else {
            *(s32 *)(t + 16) = 0;
            fn_80246A30(t, 0);
        }
    }
}

} /* extern "C" */
