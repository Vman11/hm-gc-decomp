// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __vt__9C801EAE64[];
void __ct__9C801EB864Fv(void *);
void fn_801965E0(void *);

void *__ct__9C801EAE64Fv(u8 *p) {
    __ct__9C801EB864Fv(p);
    fn_801965E0(p + 24);
    *(void * *)(p + 20) = __vt__9C801EAE64;
    *(void * *)(p + 24) = __vt__9C801EAE64 + 44;
    *(s32 *)(p + 32) = 0;
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 48) = 0;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 56) = 0;
    *(s32 *)(p + 60) = 0;
    *(s32 *)(p + 64) = 0;
    *(s32 *)(p + 52) = 0;
    *(s32 *)(p + 0) = 12;
    return p;
}
