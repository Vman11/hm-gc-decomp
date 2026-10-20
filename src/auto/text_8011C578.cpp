// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(void *, s32); };
extern "C" { void fn_8011DE7C(void *, void *); void fn_8011DD10(void *, void *); void fn_80118F3C(void *, void *); }

void fn_8011C578(u8 *p, void *a, s32 k) {
    BOOL again;
    again = TRUE;
    while (again) {
        u32 i;
        again = FALSE;
        for (i = 0; i < *(u32 *)(p + 48); i++) {
            s32 *e = (*(s32 ***)(p + 40))[i];
            if (e[2] == k && ((void **)e)[5] == a) {
                u8 *h;
                fn_8011DE7C(a, e);
                h = *(u8 **)(p + 32);
                *(u8 **)e = h;
                if (h != 0) {
                    *(s32 **)(*(u8 **)(p + 32) + 4) = e;
                } else {
                    *(s32 **)(p + 36) = e;
                }
                *(s32 **)(p + 32) = e;
                e[1] = 0;
                fn_80118F3C(p + 40, e);
                again = TRUE;
                break;
            }
        }
    }
    if (k & 0x40000000) {
        again = TRUE;
        while (again) {
            u32 i;
            again = FALSE;
            for (i = 0; i < *(u32 *)(p + 64); i++) {
                s32 *e = (*(s32 ***)(p + 56))[i];
                if (e[2] == k && ((void **)e)[5] == a) {
                    u8 *h;
                    fn_8011DD10(a, e);
                    h = *(u8 **)(p + 32);
                    *(u8 **)e = h;
                    if (h != 0) {
                        *(s32 **)(*(u8 **)(p + 32) + 4) = e;
                    } else {
                        *(s32 **)(p + 36) = e;
                    }
                    *(s32 **)(p + 32) = e;
                    e[1] = 0;
                    fn_80118F3C(p + 56, e);
                    again = TRUE;
                    break;
                }
            }
        }
    }
    if (*(V **)(p + 20) != 0) {
        (*(V **)(p + 20))->m(a, k);
    }
}

} /* extern "C" */
