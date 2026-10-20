// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E4530[];
void fn_8014CB5C(void *);
void fn_8014CA5C(void *);

void *__ct__9C8012C5A0Fv(u8 *p) {
    *(void * *)(p + 48) = lbl_802E4530;
    fn_8014CB5C(p + 4);
    *(s32 *)(p + 0) = 0;
    fn_8014CA5C(p + 4);
    *(s32 *)(p + 44) = 0;
    *(u8 *)(p + 40) = 128;
    *(u8 *)(p + 41) = 128;
    *(u8 *)(p + 42) = 128;
    *(u8 *)(p + 43) = 128;
    return p;
}

} /* extern "C" */
