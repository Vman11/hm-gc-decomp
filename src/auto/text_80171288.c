// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E5568[];
extern u8 lbl_802E82C0[];
void fn_80148310(void);
void __construct_array(void *, void *, void *, u32, u32);

void *__ct__9C80171288Fv(u8 *p) {
    *(void * *)(p + 0) = lbl_802E5568;
    *(void * *)(p + 0) = lbl_802E82C0;
    __construct_array(p + 8, (void *)fn_80148310, 0, 20, 3);
    __construct_array(p + 72, (void *)fn_80148310, 0, 20, 8);
    __construct_array(p + 236, (void *)fn_80148310, 0, 20, 12);
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 68) = 0;
    *(s32 *)(p + 232) = 0;
    *(s32 *)(p + 476) = 0;
    return p;
}
