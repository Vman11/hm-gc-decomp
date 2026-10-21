// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    u8 pad[16];
    u8 *base;
    s32 stride;
} Unk80174238;
extern Unk80174238 *lbl_8035AC5C;
void fn_801737D8(void *a, u8 *b, u8 *c, u8 *d);

void fn_801743B8(void *arg0, s32 arg1, s32 arg2, u8 *arg3) {
    s32 stride;
    u8 *p;
    u8 *base;
    u8 *end;

    stride = *(s32 *)(arg3 + 12);
    base = lbl_8035AC5C->base + lbl_8035AC5C->stride * arg1;
    p = *(u8 **)(arg3 + 4) + 3;
    end = p + stride * *(u16 *)(arg3 + 2);
    while (p < end) {
        u8 *v0, *v1, *v2;
        v0 = base + lbl_8035AC5C->stride * *(u16 *)p; p += stride;
        v1 = base + lbl_8035AC5C->stride * *(u16 *)p; p += stride;
        v2 = base + lbl_8035AC5C->stride * *(u16 *)p; p += stride;
        fn_801737D8(arg0, v0, v1, v2);
    }
}

} /* extern "C" */
