// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct R80128F98 {
    s32 x0;
    s32 y0;
    s32 x1;
    s32 y1;
} R80128F98;
extern u32 lbl_8035AC30;
extern u32 lbl_8035AC34;
extern u32 lbl_8032C2D0[0x21D8 / 4];
void fn_801456A8(u32 *ctx, u32 a, u32 b, s32 c, s32 d, s32 e, s32 f, const R80128F98 *g);
void fn_80144CEC(u32 *ctx, u32 a, u32 b, const R80128F98 *c, s32 d, s32 e, const R80128F98 *f);

void fn_80128F98(void *p, const R80128F98 *src, s32 x, s32 y, const R80128F98 *dst) {
    if (dst->x1 - dst->x0 == src->x1 - src->x0 && dst->y1 - dst->y0 == src->y1 - src->y0) {
        fn_801456A8(lbl_8032C2D0, lbl_8035AC30, lbl_8035AC34, src->x0, src->y0, x, y, dst);
    } else {
        fn_80144CEC(lbl_8032C2D0, lbl_8035AC30, lbl_8035AC34, src, x, y, dst);
    }
}

} /* extern "C" */
