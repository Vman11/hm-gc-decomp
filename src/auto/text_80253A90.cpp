// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 a, b, c; } T12_80253A90;
void fn_801090D4(void *, void *, T12_80253A90, s32, void *);

void fn_80253A90(u8 *p, void *a, T12_80253A90 t, void *d) {
    fn_801090D4(p + 0x38, a, t, -1, d);
}

} /* extern "C" */
