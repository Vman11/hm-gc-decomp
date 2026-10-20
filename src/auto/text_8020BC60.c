// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_8020C12C(void *);
s32 fn_800CDCF4(void);
s32 fn_8020B114(void);

s32 fn_8020BC60(u8 *p) {
    if (*(s32 *)(p + 12) != 0) {
        fn_8020C12C(*(void **)(p + 8));
        if (fn_800CDCF4() == 0) {
            *(s32 *)(p + 12) = 0;
        }
        return fn_8020B114();
    }
    return 0;
}
