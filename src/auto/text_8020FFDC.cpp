// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 pad[20]; void *f; u8 pad2[8]; } T32_8020FFDC;
void fn_8020F948(void *, void *);

T32_8020FFDC *fn_8020FFDC(u8 *p) {
    u32 i;
    for (i = 0; i < *(u32 *)(*(u8 **)(p + 28) + 1704); i++) {
        if ((*(T32_8020FFDC **)(p + 32))[i].f == 0) {
            fn_8020F948(&(*(T32_8020FFDC **)(p + 32))[i], p);
            return &(*(T32_8020FFDC **)(p + 32))[i];
        }
    }
    return 0;
}

} /* extern "C" */
