// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct { u8 p[4]; u16 f4; } O;
extern char lbl_802A231C[];
extern char lbl_802A22E0[];
void fn_80060568(char *, s32, s32, s32);
static inline u8 isType(O *o) { u8 r = 0; if (o->f4 >= 17 && o->f4 <= 17) r = 1; return r; }
O *fn_801952A0(O *o) {
    if (o == 0) fn_80060568(lbl_802A231C, 0, 0, 0);
    if (!isType(o)) fn_80060568(lbl_802A22E0, 0, 0, 0);
    return o;
}
