// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8025370C { u8 pad[0x10]; virtual void m(s32); };
struct C80252A80 { C80252A80(); u8 pad[32]; };
extern "C" { extern void *lbl_8035B638; void fn_80118FC4(void *, void *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void fn_80252558(void *, void *, void *, void *, s32); }

void fn_8025370C(u8 *p, void *a, void *b, void *c, void *d) {
    if (*(s32 *)(p + 4) != 0) {
        u8 *o = *(u8 **)(p + 12);
        if (o != NULL) {
            if (o != NULL) {
                ((V_8025370C *)o)->m(1);
            }
        }
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 20) = 1;
    }
    *(s32 *)(p + 4) = 1;
    *(void **)(p + 8) = a;
    fn_80118FC4(*(u8 **)(p + 8) + 56, p);
    if (lbl_8035B638 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B638);
    *(C80252A80 **)(p + 12) = new C80252A80;
    fn_800F7E98();
    if (*(void **)(p + 12) == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    fn_80252558(*(void **)(p + 12), c, b, d, 0);
}

} /* extern "C" */
