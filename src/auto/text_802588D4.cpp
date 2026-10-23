// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct {
    void *vt;
    u8 pad[260];
    s32 f108;
    u8 pad2[4];
    f32 f110;
    f32 f114;
    f32 f118;
    f32 f11C;
    s32 f120;
    s32 f124;
    s32 f128;
    s32 f12C;
} T802588D4;
extern u8 lbl_802F2600[];
extern f32 lbl_80366710;
extern f32 lbl_80366714;
extern f32 lbl_80366718;
extern f32 lbl_8036671C;
void *fn_80267F2C(void *p);
int rand(void);
inline f32 rnd_802588D4() { s32 r = rand() % 20000u; return lbl_80366714 * (f32)r; }
T802588D4 *fn_802588D4(T802588D4 *p) {
    fn_80267F2C(p);
    p->vt = lbl_802F2600;
    p->f120 = 0;
    p->f124 = 0;
    p->f128 = 0;
    p->f12C = 0;
    p->f108 = 0;
    p->f110 = lbl_80366710;
    p->f11C = rnd_802588D4() - lbl_80366718;
    p->f118 = rnd_802588D4() - lbl_80366718;
    if (p->f11C > lbl_80366710) {
        p->f114 = lbl_80366718;
    } else {
        p->f114 = lbl_8036671C;
    }
    return p;
}

} /* extern "C" */
