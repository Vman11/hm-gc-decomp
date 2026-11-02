// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct { u8 p[4]; void *f4; u8 q[0x90 - 8]; s32 f90; u8 r[0x9c - 0x94]; s32 f9c; } O;
extern char lbl_802A000C[];
void fn_80060568(char *, s32, s32, s32);
s32 fn_801F6590(void *);
void fn_80149168(O *);
void fn_801499CC(O *o) {
    while (fn_801F6590(o->f4) != 0 && o->f9c == 0) {
        fn_80149168(o);
    }
    if (o->f90 == 0) {
        fn_80060568(lbl_802A000C, 0, 0, 0);
    }
}
