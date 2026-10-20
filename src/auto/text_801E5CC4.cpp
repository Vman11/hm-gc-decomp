// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8017B9C8(void *, s32);
void fn_8017C324(void *, void *, void *, void *, void *);

static inline u8 *cur_801E5CC4(u8 *p) {
    return *(u8 **)(p + 32) != NULL ? *(u8 **)(p + 32) : *(u8 **)(p + 28);
}

void fn_801E5CC4(u8 *p, u8 *a, u8 *b) {
    if (a == cur_801E5CC4(p) || b == cur_801E5CC4(p)) {
        if (*(s32 *)(p + 44) == 0) {
            if (b == cur_801E5CC4(p)) {
                if (*(void **)(a + 56) != NULL) {
                    fn_8017B9C8(p + 56, 1);
                    fn_8017C324(*(void **)(p + 52), b, *(void **)(a + 56), a, p + 56);
                    if (*(void **)(p + 60) != NULL) {
                        *(s32 *)(p + 44) = 1;
                    }
                }
            } else if (*(void **)(b + 56) != NULL) {
                fn_8017B9C8(p + 56, 1);
                fn_8017C324(*(void **)(p + 52), a, *(void **)(b + 56), b, p + 56);
                if (*(void **)(p + 60) != NULL) {
                    *(s32 *)(p + 44) = 1;
                }
            }
        }
    }
}

} /* extern "C" */
