// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern u32 lbl_80364160;
typedef struct { u8 pad[4]; u32 f4; u8 pad2[36]; f32 v[3]; } P80137288;
void fn_80101820(f32 *v);
void fn_80137288(P80137288 *p, const f32 *v) {
    p->v[0] = v[0];
    p->v[1] = v[1];
    p->v[2] = v[2];
    fn_80101820(p->v);
    p->f4 |= lbl_80364160;
}

} /* extern "C" */
