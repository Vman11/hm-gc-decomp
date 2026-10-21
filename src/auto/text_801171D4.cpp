// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

class C80118D20 { public: u8 d[64]; C80118D20(); ~C80118D20(); };
struct Id { u32 id; u32 x; };
struct P { u32 n0; u32 n1; u32 n2; u8 padC[0x40]; Id *a0; Id *a1; Id *a2; u8 pad58[0x7C]; C80118D20 *arr; };
extern "C" { s32 fn_8011EDA8(P *); void fn_8011D79C(f32, P *, u32); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035AB58; extern f32 lbl_80363A6C; }

extern "C" s32 fn_801171D4(P *p) {
    Id *e;
    u32 i;
    s32 r = fn_8011EDA8(p);
    if (r != 0) {
        return r;
    }
    if (p->n1 != 0) {
        if (!lbl_8035AB58) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AB58);
        p->arr = new C80118D20[p->n1];
        fn_800F7E98();
        if (!p->arr) fn_800604C4(-4, 0, 0, 0);
    }
    for (e = p->a0, i = 0; i < p->n0; i++, e++) {
        e->id = i + 0x30000000;
    }
    for (e = p->a1, i = 0; i < p->n1; i++, e++) {
        e->id = i + 0x40000000;
    }
    for (e = p->a2, i = 0; i < p->n2; i++, e++) {
        e->id = i + 0x50000000;
        fn_8011D79C(lbl_80363A6C, p, i + p->n1);
    }
    return 0;
}

} /* extern "C" */
