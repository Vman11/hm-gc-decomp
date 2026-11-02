// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
extern char lbl_802A102C[];
void fn_80060568(char *, s32, s32, s32);
typedef struct { u8 p[4]; u32 f4; } O;
void fn_801757B8(O *o) {
    u32 f = o->f4;
    if (!(f & 0x20) || (f & 0x10)) return;
    fn_80060568(lbl_802A102C, 0, 0, 0);
}
