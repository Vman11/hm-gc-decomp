// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802EFC18[];
extern u8 lbl_802EFBF0[];
void __ct__9C8020BC10Fv(void);
void fn_8020BB90(void);
void __construct_array(void *, void *, void *, u32, u32);

void *__ct__9C8020E9BCFv(u8 *p) {
    *(void * *)(p + 0) = lbl_802EFC18;
    *(void * *)(p + 0) = lbl_802EFBF0;
    __construct_array(p + 4, (void *)__ct__9C8020BC10Fv, (void *)fn_8020BB90, 43332, 2);
    *(s32 *)(p + 86668) = 0;
    return p;
}
