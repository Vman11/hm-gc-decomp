// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_800711D0 { u8 pad[0x1C]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void m(s32); };
extern f32 lbl_8035F33C;
extern void *lbl_8035B7BC;
void fn_80107244(void *, f32 *);
void fn_8026A820(void *, void *, void *, f32 *);
void fn_8026AE28(void *, void *, void *, s32, f32);
void fn_8026A5C8(void *, void *, void *, void *);

void fn_800711D0(u8 *p, s32 i, f32 f) {
    V_800711D0 *q = (*(V_800711D0 ***)(p + 0xD4))[i];
    if (q != NULL) {
        f32 v[3];
        void *r;
        q->m(-1);
        r = *(void **)(*(u8 **)(*(u8 **)(p + 0xE0) + 0x9C) + 0x30);
        if (r != NULL) {
            fn_80107244(r, v);
        } else {
            v[0] = lbl_8035F33C;
            v[1] = lbl_8035F33C;
            v[2] = lbl_8035F33C;
        }
        fn_8026A820(lbl_8035B7BC, p, p + 0x13C, v);
        fn_8026AE28(lbl_8035B7BC, p, p + 0x13C, 0, f);
        fn_8026A5C8(lbl_8035B7BC, p, p + 0x13C, q);
    }
}

} /* extern "C" */
