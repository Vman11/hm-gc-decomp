// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 *lbl_8035B308;
void fn_8022B618(void *);
void fn_80059338(void *, s32, s32);
void fn_802494A4(void *, s32);
void fn_8023FE08(void *, f32);

void fn_8005924C(u8 *p, f32 f) {
    if (!(**(u32 **)(p + 420) & *(u32 *)(p + 424))) {
        fn_8022B618(*(void **)(p + 224));
        **(u32 **)(p + 420) |= *(u32 *)(p + 428);
        **(u32 **)(p + 420) |= *(u32 *)(p + 432);
        **(u32 **)(p + 420) &= ~*(u32 *)(p + 424);
    } else if (*(s32 *)(p + 412) != 0 && *(s32 *)(p + 404) != 0 && *(s32 *)(p + 408) == 0) {
        *(s32 *)(p + 228) = *(s32 *)(lbl_8035B308 + 72);
        fn_80059338(p, 0, 1);
        fn_802494A4(p, 2);
    }
    *(s32 *)(p + 408) = *(s32 *)(p + 404);
    fn_8023FE08(p, f);
}

} /* extern "C" */
