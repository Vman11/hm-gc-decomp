// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035A9F4;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
struct C8020F220 { C8020F220(); u8 *f0; u8 pad[24]; };
struct T { C8020F220 *p0; C8020F220 *p4; u32 n8; u32 n12; int f16; };
static inline void del(T *t, u32 i) { for (; i < t->n8; i++) { u8 *q = t->p0[i].f0; if (q) delete[] q; } }
static inline void del2(T *t, u32 i) { for (; i < t->n12; i++) { u8 *q = t->p4[i].f0; if (q) delete[] q; } }
void fn_8020EFE4(T *t, u32 a, u32 b) {
    if (t->f16) {
        if (t->p0) {
            del(t, 0);
            delete[] t->p0;
        }
        if (t->p4) {
            del2(t, 0);
            delete[] t->p4;
        }
        t->p0 = 0;
        t->p4 = 0;
        t->n8 = 0;
        t->n12 = 0;
        t->f16 = 0;
    }
    t->n8 = a;
    t->n12 = b;
    if (t->n8) {
        if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035A9F4);
        t->p0 = new C8020F220[t->n8];
        fn_800F7E98();
        if (t->p0 == 0) fn_800604C4(-4, 0, 0, 0);
    }
    if (t->n12) {
        if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035A9F4);
        t->p4 = new C8020F220[t->n12];
        fn_800F7E98();
        if (t->p4 == 0) fn_800604C4(-4, 0, 0, 0);
    }
    t->f16 = 1;
}

} /* extern "C" */
