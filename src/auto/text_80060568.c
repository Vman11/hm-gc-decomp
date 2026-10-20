// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern char lbl_80297334[];
void fn_800E91D0(const char *, ...);
void exit(s32);

void fn_80060568(void *a, void *b, void *c) {
    fn_800E91D0(lbl_80297334, a, b, c);
    exit(1);
}
