// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { u8 pad[272]; f32 f110; f32 f114; f32 f118; f32 f11C; } P801AA7F4;
void fn_801AA7F4(P801AA7F4 *p, s32 a, s32 b) {
    p->f110 = (f32)a / p->f118;
    p->f114 = (f32)b / p->f11C;
}

} /* extern "C" */
