// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern f32 lbl_8035F3EC;
typedef struct { u8 pad[48]; void *f30; } P80076A50;
void fn_80107244(void *p, f32 *out);
void fn_80076A50(const P80076A50 *p, f32 *out) {
    if (p->f30) {
        fn_80107244(p->f30, out);
    } else {
        out[0] = lbl_8035F3EC;
        out[1] = lbl_8035F3EC;
        out[2] = lbl_8035F3EC;
    }
}

} /* extern "C" */
