// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { char s[8]; } N8_8021CC4C;
typedef struct { u8 pad[56]; N8_8021CC4C *f38; } S8021CC4C;
void fn_800F6E88(u8 *dst, char *name);
void fn_8021CC4C(const S8021CC4C *p, s32 i, u8 *dst) { fn_800F6E88(dst, p->f38[i].s); }

} /* extern "C" */
