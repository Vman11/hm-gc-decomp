// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 a, b, c; } T12_80253A48;
void fn_8010904C(void *, void *, T12_80253A48, s32, void *);

void fn_80253A48(u8 *p, void *a, T12_80253A48 t, void *d) {
    fn_8010904C(p + 0x38, a, t, -1, d);
}

} /* extern "C" */
