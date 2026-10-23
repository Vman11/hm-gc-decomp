// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct OB801E456C {
    u8 pad[20];
    virtual void v0();
    virtual void v1();
};
struct O801E456C : OB801E456C {
    u8 pad2[104];
    s32 f128;
    f32 f132;
    f32 *f136;
    u32 f140;
};
struct A801E456C {
    u8 pad[16];
    f32 f16;
};
struct P801E456C {
    u32 f0;
    O801E456C *f4;
};
extern "C" {
void fn_801E456C(P801E456C *p, A801E456C *a) {
    O801E456C *o = p->f4;
    switch (o->f128) {
    case 0:
        break;
    case 1:
        if (a->f16 == o->f132) o->v1();
        break;
    case 2:
        if (a->f16 != o->f132) o->v1();
        break;
    case 3:
        if (a->f16 < o->f132) o->v1();
        break;
    case 4:
        if (a->f16 > o->f132) o->v1();
        break;
    case 5:
        if (a->f16 <= o->f132) o->v1();
        break;
    case 6:
        if (a->f16 >= o->f132) o->v1();
        break;
    case 7: {
        u32 i;
        for (i = 0; i < o->f140; i += 2) {
            if (a->f16 >= o->f136[i] && a->f16 <= o->f136[i + 1]) {
                o->v1();
                break;
            }
        }
        break;
    }
    }
}

} /* extern "C" */
