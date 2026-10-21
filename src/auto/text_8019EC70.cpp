// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" { s32 fn_800FB33C(void *); f32 fn_800FB2E0(void *); void fn_801A17B8(void *, void *, void *, u32); }

void fn_8019EC70(u8 *p, void *q, void *s, u32 t) {
    switch (t) {
    case 83:
        *(s32 *)(p + 204) = fn_800FB33C(s);
        break;
    case 82:
        *(s32 *)(p + 228) = fn_800FB33C(s);
        break;
    case 80:
        *(s32 *)(p + 232) = fn_800FB33C(s);
        break;
    case 72:
        *(f32 *)(p + 216) = fn_800FB2E0(s);
        break;
    case 152:
        *(f32 *)(p + 220) = fn_800FB2E0(s);
        break;
    case 153:
        *(f32 *)(p + 224) = fn_800FB2E0(s);
        break;
    case 154:
        *(f32 *)(p + 236) = fn_800FB2E0(s);
        *(f32 *)(p + 240) = fn_800FB2E0(s);
        break;
    case 155:
        *(f32 *)(p + 244) = fn_800FB2E0(s);
        *(f32 *)(p + 248) = fn_800FB2E0(s);
        break;
    case 156:
        *(f32 *)(p + 252) = fn_800FB2E0(s);
        *(f32 *)(p + 256) = fn_800FB2E0(s);
        break;
    default:
        fn_801A17B8(p, q, s, t);
        break;
    }
}

} /* extern "C" */
