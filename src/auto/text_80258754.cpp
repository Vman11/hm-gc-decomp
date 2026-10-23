// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct S80258754 {
    u8 pad[264];
    s32 f264;
    u32 f268;
    f32 f272;
    f32 f276;
    f32 f280;
    f32 f284;
    s32 f288;
    s32 f292;
    s32 f296;
    s32 f300;
} S80258754;
u32 rand(void);
void fn_80267E34(S80258754 *p);
extern f32 lbl_80366710;
extern f32 lbl_80366714;
extern f32 lbl_80366718;
extern f32 lbl_8036671C;

void fn_80258754(S80258754 *p) {
    f32 t;
    s32 r;
    p->f288 = 0;
    p->f292 = 0;
    p->f296 = 0;
    p->f300 = 0;
    p->f264 = 0;
    p->f272 = lbl_80366710;
    r = rand() % 20000;
    t = lbl_80366714 * r;
    p->f284 = t - lbl_80366718;
    r = rand() % 20000;
    t = lbl_80366714 * r;
    p->f280 = t - lbl_80366718;
    if (p->f284 > lbl_80366710) {
        p->f276 = lbl_80366718;
    } else {
        p->f276 = lbl_8036671C;
    }
    fn_80267E34(p);
}

} /* extern "C" */
