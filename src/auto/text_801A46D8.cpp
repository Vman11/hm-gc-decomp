// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    void *pad0[3];
    void (*fn0C)(void *, void *);
    void *pad10[7];
    void (*fn2C)(void *, void *, void *);
    void (*fn30)(void *, void *, void *);
} FnTbl_803286D0;
extern FnTbl_803286D0 lbl_803286D0;
extern u32 lbl_80364DD0;
void fn_80190C98(void *);

void fn_801A46D8(u8 *p)
{
    u8 *b;
    u8 *a;

    if (*(s32 *)(p + 104) != 0) {
        a = *(u8 **)(p + 36);
        b = *(u8 **)(a + 48);
        if (b != 0) {
            lbl_803286D0.fn0C(*(void **)(b + 16), p + 64);
            *(u32 *)(b + 32) |= lbl_80364DD0;
            fn_80190C98(a);
        }
    }
    if (*(s32 *)(p + 108) != 0) {
        if (*(s32 *)(p + 100) != 0) {
            a = *(u8 **)(p + 36);
            b = *(u8 **)(a + 48);
            if (b != 0) {
                lbl_803286D0.fn2C(*(void **)(b + 16), p + 76, p + 88);
                *(u32 *)(b + 32) |= lbl_80364DD0;
                fn_80190C98(a);
            }
        } else {
            a = *(u8 **)(p + 36);
            b = *(u8 **)(a + 48);
            if (b != 0) {
                lbl_803286D0.fn30(*(void **)(b + 16), p + 88, p + 76);
                *(u32 *)(b + 32) |= lbl_80364DD0;
                fn_80190C98(a);
            }
        }
    }
}

} /* extern "C" */
