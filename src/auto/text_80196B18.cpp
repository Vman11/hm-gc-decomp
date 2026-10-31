// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 pad[12]; u32 fl; } D;
typedef struct { u32 f0; u8 pad[144 - 4]; D *d; u32 pad148; u32 f152; u32 pad156; u32 pad160[3]; f32 f172; } T;
void fn_801A0A1C(void);
void fn_8019688C(T *t, f32 dt);
void fn_80196B18(T *t, f32 dt) {
    if (!(t->f0 & 1) || !(t->f152 & 1)) return;
    fn_801A0A1C();
    if (t->f0 & 0x10000) t->f172 += dt;
    else fn_8019688C(t, dt);
}

} /* extern "C" */
