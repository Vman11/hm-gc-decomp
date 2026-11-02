// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_801D95E8(void *p);
s32 fn_801B12FC(void *p) {
    fn_801D95E8(p);
    switch (*(s32 *)((u8 *)p + 0x144)) {
    default: return -6;
    case 16: return 1;
    }
}
