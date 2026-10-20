// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_8012962C(void *, f32, f32, f32, f32);

void fn_801E161C(u8 *p) {
    u8 *q = *(u8 **)(p + 0x28);
    f32 y = *(f32 *)(q + 0x38);
    if (*(u32 *)(p + 0x24) & 2) {
        fn_8012962C(q, *(f32 *)(p + 0x34), y, *(f32 *)(p + 0x2C), *(f32 *)(p + 0x30));
    }
}
