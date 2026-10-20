// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 a, b, c, d, e; } T20_8023F9C8;
void fn_8023FA2C(void *, u32 *, T20_8023F9C8);

void fn_8023F9C8(u8 *p, s32 i) {
    fn_8023FA2C(p, *(u32 **)(p + 272) + i, (*(T20_8023F9C8 **)(p + 268))[i]);
}

} /* extern "C" */
