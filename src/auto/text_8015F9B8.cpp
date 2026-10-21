// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 v[3]; } T12_8015F9B8;
extern T12_8015F9B8 lbl_8029BF10;
void fn_80217820(void *);
void fn_80132B5C(void *);

void fn_8015F9B8(u8 *p) {
    fn_80217820(p + 60);
    fn_80132B5C(p);
    *(T12_8015F9B8 *)(p + 88) = lbl_8029BF10;
    *(u16 *)(p + 76) = 0;
    *(s32 *)(p + 80) = 0;
    *(s32 *)(p + 84) = 0;
}

} /* extern "C" */
