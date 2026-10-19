// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VC_8003F700 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual s32 m(void *); };
extern u8 lbl_80294ED4[];
s32 fn_8003F700(VC_8003F700 *obj) {
    return obj->m(lbl_80294ED4);
}

} /* extern "C" */
