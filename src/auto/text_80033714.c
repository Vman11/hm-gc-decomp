// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_8019AE40(void *);

void fn_80033714(u8 *p, u8 *q) {
    if (*(u16 *)(q + 4) == 15 && (*(u32 *)q & 0x800)) {
        fn_8019AE40(*(void **)(*(u8 **)(p + 0x74) + 0x1E4));
    }
}
