// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct S80221538 { u8 pad[24]; u32 f24; u32 f28; } S80221538;
extern S80221538 *lbl_8035B210;
extern S80221538 *lbl_8035A9F4;
void *fn_800F72D0(S80221538 *s, u32 size);

static inline void *Try80221538(S80221538 *s, u32 size) {
    void *r;
    if (s->f24 >= 5) {
        s->f28 = s->f24;
    } else {
        s->f28 = 5;
    }
    r = fn_800F72D0(s, size);
    s->f28 = s->f24;
    return r;
}
void *fn_80221538(s32 size) {
    S80221538 *s;
    void *r = Try80221538(lbl_8035B210, size);
    if (r == 0) {
        s = lbl_8035A9F4;
        if (s->f24 >= 5) {
            s->f28 = s->f24;
        } else {
            s->f28 = 5;
        }
        r = fn_800F72D0(s, size);
        s->f28 = s->f24;
    }
    return r;
}

} /* extern "C" */
