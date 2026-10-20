// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B7BC;
extern f32 lbl_8036613C;
extern f32 lbl_80366198;
void *fn_8026D254(void *, void *);
void fn_80107244(void *, void *);
void fn_802482F8(void *, s32, s32);
void fn_80248668(void *, void *, s32, void *, void *, f32);

void fn_80240B50(u8 *p, void *a, void *b) {
    void *r = fn_8026D254(lbl_8035B7BC, a);
    if (r != NULL && *(void **)(p + 264) != NULL) {
        f32 v[3];
        u8 *t = *(u8 **)(*(u8 **)(p + 224) + 156);
        if (t != NULL) {
            void *x = *(void **)(t + 48);
            if (x != NULL) {
                fn_80107244(x, v);
            } else {
                v[0] = lbl_8036613C;
                v[1] = lbl_8036613C;
                v[2] = lbl_8036613C;
            }
        }
        if (*(s32 **)(p + 164) != NULL) {
            fn_802482F8(*(void **)(p + 264), 0, **(s32 **)(p + 164));
        } else {
            fn_802482F8(*(void **)(p + 264), 0, 2);
        }
        fn_80248668(*(void **)(p + 264), r, 0, v, b, lbl_80366198);
    }
}

} /* extern "C" */
