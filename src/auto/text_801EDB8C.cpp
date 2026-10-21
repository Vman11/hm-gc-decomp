// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB064(void *, void *);
s32 fn_80115568(void *, void *);
void fn_801EB474(void *);

void fn_801EDB8C(void *p, void *msg, s32 id) {
    u8 buf[16];
    switch (id) {
    case 107:
        fn_800FB064(msg, buf);
        M2C_FIELD(p, s32 *, 24) = fn_80115568(*(u8 **)(*(u8 **)((u8 *)p + 16) + 224) + 8, buf);
        break;
    case 109:
        M2C_FIELD(p, u32 *, 28) |= 2;
        break;
    case 110:
        M2C_FIELD(p, u32 *, 28) |= 16;
        break;
    case 108:
        M2C_FIELD(p, u32 *, 28) |= 1;
        break;
    case 126:
        M2C_FIELD(p, u32 *, 28) |= 8;
        break;
    default:
        fn_801EB474(p);
        break;
    }
}

} /* extern "C" */
