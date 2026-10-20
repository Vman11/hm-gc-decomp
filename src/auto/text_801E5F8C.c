// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __vt__9C801E5F8C[];
void __ct__9C801E6678Fv(void *);
void fn_8017BB64(void *);

void *__ct__9C801E5F8CFv(u8 *p) {
    __ct__9C801E6678Fv(p);
    *(void **)(p + 20) = __vt__9C801E5F8C;
    *(void **)(p + 24) = __vt__9C801E5F8C + 44;
    fn_8017BB64(p + 56);
    *(s32 *)(p + 52) = 0;
    *(s32 *)p = 6;
    return p;
}
