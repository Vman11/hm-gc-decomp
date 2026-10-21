// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A04E8[];
void fn_8016B254(void *, u32, u32, void *);
void fn_8016708C(void *, void *, u32, void *, char *, void *, void *);
void fn_801699D8(void *, void *, u32, void *, char *, void *, void *);

void fn_80158AB4(u8 *p, void *q, u32 n, void *x) {
    u8 *e = *(u8 **)(p + 24) + *(u32 *)(*(u8 **)(p + 24) + 208) * 104;
    if (n > 1) {
        fn_8016B254(q, (*(u32 *)(e + 16) >> 10) & 1, n, x);
        fn_8016708C(q, e, n, x, lbl_802A04E8, *(void **)(p + 12), *(void **)(p + 20));
    } else {
        if (x == 0) {
            fn_8016B254(q, 0, -1, 0);
        } else {
            fn_8016B254(q, (*(u32 *)(e + 16) >> 10) & 1, n, x);
        }
        fn_801699D8(q, e, n, x, lbl_802A04E8, *(void **)(p + 12), *(void **)(p + 20));
    }
}

} /* extern "C" */
