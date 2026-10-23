// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { f32 x, y, z; } Vec;
typedef struct { u32 a, b, c; } E12;

extern f32 lbl_8036613C;
extern f32 lbl_80366198;
int rand(void);
void fn_80107244(void *, Vec *);
void fn_802482F8(void *, s32, s32);
void fn_802488C4(void *, u32, s32, Vec *, u32, f32);

void fn_80240F24(u8 *p, s32 lo, s32 hi) {
    s32 idx;
    u32 s;
    u32 c;
    Vec v;
    {
        u32 range = hi - lo + 1;
        u32 r = 0;
        if (range != 0) r = (u32)rand() % range;
        idx = lo + r;
    }
    c = (*(E12 **)(p + 204))[idx].c;
    s = (*(u32 **)(p + 212))[idx];
    if (*(void **)(p + 264) == 0) return;
    {
        void *o = *(void **)(*(u8 **)(*(u8 **)(p + 224) + 156) + 48);
        if (o != 0) {
            fn_80107244(o, &v);
        } else {
            v.x = lbl_8036613C;
            v.y = lbl_8036613C;
            v.z = lbl_8036613C;
        }
    }
    if (*(s32 **)(p + 164) != 0) {
        fn_802482F8(*(void **)(p + 264), 0, **(s32 **)(p + 164));
    } else {
        fn_802482F8(*(void **)(p + 264), 0, 2);
    }
    fn_802488C4(*(void **)(p + 264), s, 0, &v, c, lbl_80366198);
}

} /* extern "C" */
