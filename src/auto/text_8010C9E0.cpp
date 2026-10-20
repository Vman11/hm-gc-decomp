// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E28C8[];
extern u8 lbl_802E28D8[];
void __dla__FPv(void *);
void __dl__FPv(void *);

void *__dt__9C8010CE30Fv(u8 *p, s16 f) {
    if (p != NULL) {
        *(void **)(p + 24) = lbl_802E28C8;
        if (p != NULL) {
            *(void **)(p + 24) = lbl_802E28D8;
            if (*(void **)(p + 4) != NULL) {
                __dla__FPv(*(void **)(p + 4));
            }
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 20) = 0;
        }
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
