// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80364EF8;
void fn_801DDB90(void *);
void __dl__FPv(void *);

void fn_801B2924(u8 *p) {
    fn_801DDB90(p);
    if (*(s32 *)(p + 408) == 2 || *(s32 *)(p + 408) == 3) {
        if (*(void **)(p + 396) != NULL) {
            __dl__FPv(*(void **)(p + 396));
        }
    }
    *(s32 *)(p + 364) = 0;
    *(s32 *)(p + 392) = 0;
    *(s32 *)(p + 396) = 0;
    *(s32 *)(p + 404) = 0;
    *(s32 *)(p + 368) = 0;
    *(s32 *)(p + 372) = 0;
    *(s32 *)(p + 376) = 0;
    *(s32 *)(p + 380) = 0;
    *(s32 *)(p + 412) = 0;
    *(s32 *)(p + 360) = 0;
    *(s32 *)(p + 408) = 13;
    *(s32 *)(p + 384) = 0;
    *(s32 *)(p + 388) = 0;
    *(f32 *)(p + 416) = lbl_80364EF8;
}

} /* extern "C" */
