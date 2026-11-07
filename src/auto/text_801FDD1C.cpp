// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
struct A801FDD1C { u8 p[0x9c]; A801FDD1C *next; };
struct B801FDD1C { u8 p[0x60]; B801FDD1C *next; };
struct O801FDD1C { u8 p[0x104]; A801FDD1C *a; B801FDD1C *b; };
void fn_801FA5A0(O801FDD1C *, f32);
void fn_80206164(A801FDD1C *, void *, f32);
void fn_801FED50(B801FDD1C *, f32);
/* NonMatching: regs only (2nd-loop next in r31, target r30) */
void fn_801FDD1C(O801FDD1C *o, A801FDD1C * k_in, f32 f) {
    A801FDD1C *key;
    A801FDD1C * k = k_in;
    fn_801FA5A0(o, f);
    key = k;
    if (k != 0) {
        B801FDD1C *b;
        for (k = o->a; k != 0; k = k->next) fn_80206164(k, key, f);
        b = o->b;
        for (; 0 != b;) {
            {
                A801FDD1C * pm263 = (A801FDD1C *)b->next;
                k = pm263;
            }
            fn_801FED50(b, f);
            b = (B801FDD1C *)k;
        }
    }
}
}
