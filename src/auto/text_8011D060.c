// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_8011DE7C(void *, void *);
void fn_8011DD10(void *, void *);
void fn_80118F3C(void *, void *);
void fn_80118FF8(void *);
void __dla__FPv(void *);
typedef struct { u32 a, b, c; } T12;
extern T12 lbl_8029BF10;

void fn_8011D060(u8 *p) {
    u8 *n;
    u8 *h;
    while (*(void **)(p + 48) != NULL) {
        n = **(u8 ***)(p + 40);
        fn_8011DE7C(*(void **)(n + 20), n);
        fn_80118F3C(p + 40, n);
        h = *(u8 **)(p + 32);
        *(u8 **)n = h;
        if (h != NULL) {
            *(u8 **)(*(u8 **)(p + 32) + 4) = n;
        } else {
            *(u8 **)(p + 36) = n;
        }
        *(u8 **)(p + 32) = n;
        *(u8 **)(n + 4) = NULL;
    }
    while (*(void **)(p + 64) != NULL) {
        n = **(u8 ***)(p + 56);
        fn_8011DD10(*(void **)(n + 20), n);
        fn_80118F3C(p + 56, n);
        h = *(u8 **)(p + 32);
        *(u8 **)n = h;
        if (h != NULL) {
            *(u8 **)(*(u8 **)(p + 32) + 4) = n;
        } else {
            *(u8 **)(p + 36) = n;
        }
        *(u8 **)(p + 32) = n;
        *(u8 **)(n + 4) = NULL;
    }
    fn_80118FF8(p + 40);
    fn_80118FF8(p + 56);
    if (*(u8 **)(p + 24) != NULL) {
        if (*(u8 **)(p + 24) != NULL) {
            __dla__FPv(*(u8 **)(p + 24) - 16);
        }
    }
    if (*(u8 **)(p + 28) != NULL) {
        if (*(u8 **)(p + 28) != NULL) {
            __dla__FPv(*(u8 **)(p + 28) - 16);
        }
    }
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 28) = 0;
    *(T12 *)(p + 4) = lbl_8029BF10;
    *(s32 *)(p + 20) = 0;
}
