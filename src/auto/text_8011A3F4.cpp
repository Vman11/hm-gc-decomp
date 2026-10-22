// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { u32 f0; s32 f4; s32 f8; s32 fC; s32 f10; } S8011A3F4;
void fn_80216294(u8 *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void fn_8011A3F4(u8 *a, s32 b, const S8011A3F4 *c) { fn_80216294(a + 8, b, c->f4, c->fC, c->f8, c->f10); }

} /* extern "C" */
