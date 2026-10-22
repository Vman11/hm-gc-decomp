// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { u8 pad[8]; f32 v[4]; } S80190480;
void fn_80190C98(S80190480 *p);
void fn_80190480(S80190480 *p, const f32 *v) {
    p->v[0] = v[0];
    p->v[1] = v[1];
    p->v[2] = v[2];
    p->v[3] = v[3];
    fn_80190C98(p);
}

} /* extern "C" */
