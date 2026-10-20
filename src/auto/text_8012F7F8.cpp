// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct E_8012F7F8 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m4(s32); virtual s32 m5(); };
struct O_8012F7F8 { u8 pad[0x4C]; virtual void p0(); virtual void m(); };
extern "C" { void fn_800FAEF8(void *); void fn_8014AC00(void *, void *); f32 fn_800FB2E0(void *); }

void fn_8012F7F8(O_8012F7F8 *o, s32 a, void *x, E_8012F7F8 *q) {
    s32 *p = (s32 *)o;
    s32 k;
    if ((u32)p[0] != 0) {
        o->m();
    }
    p[0] = a;
    fn_800FAEF8(q);
    while ((u32)(k = q->m5()) != 6) {
        switch (k) {
        case 59:
            fn_8014AC00(p + 1, q);
            break;
        case 60:
            fn_8014AC00(p + 5, q);
            break;
        case 61:
            fn_8014AC00(p + 9, q);
            break;
        case 62:
            ((f32 *)p)[15] = fn_800FB2E0(q);
            break;
        case 63:
            ((f32 *)p)[16] = fn_800FB2E0(q);
            ((f32 *)p)[17] = fn_800FB2E0(q);
            ((f32 *)p)[18] = fn_800FB2E0(q);
            break;
        case 64:
            ((f32 *)p)[13] = fn_800FB2E0(q);
            break;
        case 65:
            ((f32 *)p)[14] = fn_800FB2E0(q);
            break;
        default:
            q->m4(30);
            break;
        }
    }
}

} /* extern "C" */
