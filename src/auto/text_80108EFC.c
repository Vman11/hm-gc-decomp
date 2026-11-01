// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { s32 v[3]; } V80108EFC;
void fn_80108B94(V80108EFC *e, s32 a, V80108EFC v, s32 b);
void fn_80108EFC(V80108EFC **o, s32 a, V80108EFC v, s32 b, s32 j) {
    V80108EFC *e = *o + j;
    fn_80108B94(e, a, v, b);
}
