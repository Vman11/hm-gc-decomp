// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct E_80104D8C { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m4(s32); };
struct O_80104D8C { u8 pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(void *); };
extern "C" { extern u8 lbl_803286D0[]; void fn_800FB064(void *, void *); O_80104D8C *fn_800F8274(void *, void *); void *fn_801050B0(void *); }

void fn_80104D8C(u8 *p, E_80104D8C *q, void *r, s32 k) {
    u8 buf[8];
    switch (k) {
    case 64: {
        O_80104D8C *o;
        fn_800FB064(q, buf);
        o = fn_800F8274(r, buf);
        if (o == 0) {
            q->m4(37);
        }
        o->m(p);
        break;
    }
    case 65:
        *(void **)(p + 12) = fn_801050B0(r);
        if (*(void **)(p + 12) == 0) {
            q->m4(39);
        }
        (*(void (**)(void *, void *))(lbl_803286D0 + 412))(*(void **)(p + 12), q);
        *(void **)(p + 24) = fn_801050B0(r);
        if (*(void **)(p + 24) == 0) {
            q->m4(39);
        }
        break;
    default:
        q->m4(30);
        break;
    }
}

} /* extern "C" */
