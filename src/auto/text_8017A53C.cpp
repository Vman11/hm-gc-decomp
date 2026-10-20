// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80103A84(void *, f32);
void fn_8017A028(void *);

static inline void upd_8017A53C(u8 *e, f32 f) {
    if (*(u32 *)(e + 48) & 1) {
        fn_80103A84(e, f);
    }
}

void fn_8017A53C(u8 *p, f32 f) {
    u8 *e = *(u8 **)(p + 8);
    u8 *end = e + *(u32 *)(p + 4) * 60;
    for (; e < end; e += 60) {
        if (*(u32 *)(e + 48) & 1) {
            upd_8017A53C(e, f);
        }
    }
    fn_8017A028(p);
}

} /* extern "C" */
