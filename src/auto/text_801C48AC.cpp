// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80364FE8;
void fn_801B3110(void *);
void __dla__FPv(void *);
void fn_801DD938(void *);

void fn_801C48AC(u8 *p) {
    fn_801B3110(p);
    if (*(void **)(p + 356) != NULL) {
        __dla__FPv(*(void **)(p + 356));
    }
    *(s32 *)(p + 356) = 0;
    *(f32 *)(p + 360) = lbl_80364FE8;
    *(s32 *)(p + 364) = 0;
    *(s32 *)(p + 368) = 0;
    *(s32 *)(p + 372) = 0;
    *(s32 *)(p + 376) = 0;
    *(s32 *)(p + 380) = 0;
    *(s32 *)(p + 384) = 0;
    *(s32 *)(p + 388) = 0;
    *(s32 *)(p + 392) = 0;
    *(s32 *)(p + 396) = 0;
    *(s32 *)(p + 400) = 0;
    *(u8 *)(p + 404) = 0;
    *(u8 *)(p + 412) = 0;
    *(u8 *)(p + 420) = 0;
    *(f32 *)(p + 428) = lbl_80364FE8;
    fn_801DD938(p);
}

} /* extern "C" */
