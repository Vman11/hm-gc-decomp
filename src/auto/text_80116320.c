// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct { u8 p[4]; u8 m4[4]; } O;
s32 fn_80116B64(void *, s32, s32 *);
s32 fn_80116B10(void *, s32, s32 **);
s32 fn_80116320(O *o, s32 k, s32 v) {
    s32 i;
    s32 *p;
    s32 r;
    r = fn_80116B64(o->m4, k, &i);
    if (r != 0) return r;
    r = fn_80116B10(o->m4, i, &p);
    if (r != 0) return r;
    *p = v;
    return r;
}
