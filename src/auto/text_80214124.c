// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u8 pad[20]; void *f; u8 pad2[8]; } T32_80214124;
void fn_802139BC(void *, void *);

T32_80214124 *fn_80214124(u8 *p) {
    u32 i;
    for (i = 0; i < *(u32 *)(*(u8 **)(p + 28) + 1704); i++) {
        if ((*(T32_80214124 **)(p + 32))[i].f == NULL) {
            fn_802139BC(&(*(T32_80214124 **)(p + 32))[i], p);
            return &(*(T32_80214124 **)(p + 32))[i];
        }
    }
    return NULL;
}
