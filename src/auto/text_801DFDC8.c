// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __vt__9C801DFDC8[];
void __ct__9C801EB864Fv(void *);
void fn_8010344C(void *);
void fn_8017ADD0(void *);

void *__ct__9C801DFDC8Fv(u8 *p) {
    __ct__9C801EB864Fv(p);
    fn_8010344C(p + 24);
    *(void * *)(p + 20) = __vt__9C801DFDC8;
    *(void * *)(p + 28) = __vt__9C801DFDC8 + 44;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 32) = 0;
    fn_8017ADD0(p + 52);
    *(s32 *)(p + 80) = 0;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 40) = -1;
    *(s32 *)(p + 48) = 32;
    *(s32 *)(p + 0) = 1;
    return p;
}
