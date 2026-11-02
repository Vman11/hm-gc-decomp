// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
s32 fn_800D366C(void *, void *);
s32 fn_8020B114(s32);
s32 fn_8020B224(void **o, void *k) {
    s32 r;
    do { r = fn_800D366C(*o, k); } while (r == -1);
    switch (r) { case -128: case -3: default: return fn_8020B114(r); case 0: return 0; }
}
