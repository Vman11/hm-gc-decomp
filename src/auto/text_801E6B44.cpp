// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
void fn_801089F0(int, void *);
}
struct C800322B0 { u32 a; s32 b; u32 c; C800322B0() { a = 0; c = 0; b = 0; } ~C800322B0() {} };

extern "C" void fn_801E6B44(int param_1) {
    C800322B0 h;
    if (*(u32 *)(param_1 + 4) & 1) {
        h.b = -1;
        h.a = *(u32 *)(*(u32 *)(param_1 + 8) + *(u32 *)(param_1 + 0x24) * 4);
        fn_801089F0((int)h.a, &h);
    }
}
