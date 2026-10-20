// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 a, b, c, d, e, f, g; } T28_8020EBB0;
extern char lbl_802A6D00[];
void fn_80060568(const char *, s32, s32, s32);

void fn_8020EBB0(u8 *p, u32 i, u32 v) {
    if (i >= *(u32 *)(p + 12)) {
        fn_80060568(lbl_802A6D00, 0, 0, 0);
    }
    (*(T28_8020EBB0 **)(p + 4))[i].b = v;
}

} /* extern "C" */
