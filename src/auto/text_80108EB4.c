// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct { f32 x, y, z; } V3;
typedef struct { V3 *arr; } O;
void fn_80108A94(V3 *e, s32 a, V3 v, s32 b);
void fn_80108EB4(O *o, s32 a, V3 v, s32 b, s32 i) {
    V3 *e = &o->arr[i];
    fn_80108A94(e, a, v, b);
}
