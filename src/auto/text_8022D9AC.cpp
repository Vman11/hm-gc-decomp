// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80365D28;
void fn_80222720(void *);
void fn_80222740(void *, s32);
void fn_8022D830(void *);
void fn_8023D1A0(void *);
void __dl__FPv(void *);

void fn_8022D9AC(u8 *p) {
    u8 *n;
    if (*(void **)(p + 184) != NULL) {
        fn_80222720(*(void **)(p + 184));
        fn_80222740(*(void **)(p + 184), 1);
    }
    fn_8022D830(p);
    *(f32 *)(p + 196) = lbl_80365D28;
    *(s32 *)(p + 200) = 0;
    *(s32 *)(p + 204) = 0;
    while ((n = *(u8 **)(p + 188)) != NULL) {
        if (n != NULL) {
            if ((*(u8 **)(p + 188) = *(u8 **)n) != NULL) {
                *(s32 *)(*(u8 **)(p + 188) + 4) = 0;
            } else {
                *(s32 *)(p + 192) = 0;
            }
        }
        __dl__FPv(n);
    }
    fn_8023D1A0(p);
}

} /* extern "C" */
