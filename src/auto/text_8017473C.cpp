// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { f32 x, y, z; } Vec;
typedef struct {
    u8 pad[144];
    Vec vecs[32];
    Vec *ptrs[32];
} S8032F028;
extern S8032F028 lbl_8032F028;
extern S8032F028 *lbl_8035AC5C;
void fn_80138F40(void *p, void *b, u32 c, u32 d, s32 e);

void fn_8017473C(void *p, void *b, u32 c, u32 d, s32 e) {
    int i;
    S8032F028 *s = &lbl_8032F028;
    for (i = 0; i < 32; i++) {
        s->ptrs[i] = &s->vecs[i];
    }
    lbl_8035AC5C = &lbl_8032F028;
    fn_80138F40(p, b, c, d, e);
}

} /* extern "C" */
