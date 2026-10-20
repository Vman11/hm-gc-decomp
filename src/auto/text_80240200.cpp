// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80107F3C(void *, f32 *);

void fn_80240200(u8 *p, f32 f) {
    f32 v[3];
    p = *(u8 **)(*(u8 **)(p + 0xE0) + 0x9C);
    v[0] = f;
    v[1] = f;
    v[2] = f;
    p = *(u8 **)(p + 0x78);
    if (p != NULL) {
        fn_80107F3C(p, v);
    }
}

} /* extern "C" */
