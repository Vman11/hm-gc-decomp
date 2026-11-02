// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad[8]; s32 f8; };
struct O {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void f18(A *);
    u8 pad[0x24]; s32 f28; s32 f2c;
};
extern "C" {
void fn_801EF9A0(O *, A *);
void fn_801DEE18(O *__restrict o, A *__restrict a) {
    o->f18(a);
    fn_801EF9A0(o, a);
    o->f2c = 0;
    s32 v = a->f8;
    o->f28 = 0;
    o->f28 = v;
}
}

} /* extern "C" */
