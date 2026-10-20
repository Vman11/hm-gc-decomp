// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __vt__9C801E6C80[];
extern f32 lbl_8036531C;
void __ct__9C801EB864Fv(void *);
void fn_801071F8(void *);

void *__ct__9C801E6C80Fv(u8 *p) {
    __ct__9C801EB864Fv(p);
    *(void * *)(p + 20) = __vt__9C801E6C80;
    fn_801071F8(p + 52);
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 48) = 0;
    *(s32 *)(p + 36) = 0;
    *(f32 *)(p + 32) = lbl_8036531C;
    *(s32 *)(p + 0) = 5;
    return p;
}
