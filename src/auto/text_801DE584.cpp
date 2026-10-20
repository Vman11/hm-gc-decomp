// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u8 *fn_8019565C(void *);

void fn_801DE584(u8 *p) {
    if (*(u32 *)(p + 36) & 2) {
        void *v = *(void **)(p + 48);
        *(void **)(fn_8019565C(*(void **)(p + 44) ? *(void **)(p + 44) : *(void **)(p + 40)) + 124) = v;
    }
}

} /* extern "C" */
