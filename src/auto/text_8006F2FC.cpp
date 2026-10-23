// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8035F0C0;
extern f32 lbl_8035F2CC;
extern const char lbl_8035EF50[8];
extern const char lbl_8035ED9C[8];
extern u8 *lbl_80359F2C;
void fn_8007225C(void *obj, f32 v);
void fn_80241DD0(void *obj, const char *name, void *a, s32 b, s32 c, s32 d);
void fn_80072D94(void *obj, s32 n, f32 v);
void fn_800F6E88(u8 *dst, u8 *src);
s32 fn_800F6CD0(const char *a, u8 *b);

void fn_8006F2FC(u8 *self) {
    u8 buf[16];
    u8 *g;
    if (!(*(f32 *)(*(u8 **)(self + 280) + 1648) > lbl_8035F0C0)) {
        fn_8007225C(*(void **)(self + 280), **(f32 **)(self + 236));
        fn_80241DD0(self, lbl_8035EF50, *(void **)(self + 228), 0, 0, 0);
        g = lbl_80359F2C;
        *(s32 *)(g + 364) = 4;
        *(f32 *)(g + 360) = lbl_8035F2CC;
        if (*(u8 **)(self + 228) == 0) {
            fn_80072D94(*(void **)(self + 280), 1, **(f32 **)(self + 344));
        } else {
            fn_800F6E88(buf, *(u8 **)(self + 228) + 140);
            if (fn_800F6CD0(lbl_8035ED9C, buf) == 0) {
                fn_80072D94(*(void **)(self + 280), 1, **(f32 **)(self + 344));
            }
        }
    }
}

} /* extern "C" */
