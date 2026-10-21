// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80107244(void *, f32 *);
void fn_802482F8(void *, s32, s32);
void fn_802488C4(void *, u32, s32, f32 *, u32, f32);
extern f32 lbl_8036613C;
extern f32 lbl_80366198;
typedef struct { u32 f0, f4, f8; } E12;

void fn_8024125C(u8 *p, s32 i) {
    u32 y, x;
    f32 v[3];
    u8 *q;
    x = (*(E12 **)(p + 204))[i].f8;
    y = (*(u32 **)(p + 212))[i];
    if (*(u8 **)(p + 264) != NULL) {
        q = *(u8 **)(*(u8 **)(*(u8 **)(p + 224) + 156) + 48);
        if (q != NULL) {
            fn_80107244(q, v);
        } else {
            v[0] = lbl_8036613C;
            v[1] = lbl_8036613C;
            v[2] = lbl_8036613C;
        }
        if (*(u32 **)(p + 164) != NULL) {
            fn_802482F8(*(u8 **)(p + 264), 0, **(u32 **)(p + 164));
        } else {
            fn_802482F8(*(u8 **)(p + 264), 0, 2);
        }
        fn_802488C4(*(u8 **)(p + 264), y, 0, v, x, lbl_80366198);
    }
}

} /* extern "C" */
