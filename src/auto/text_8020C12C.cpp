// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct O8020C12C {
    u8 pad[1720];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual s32 *m();
};
struct P8020C12C { u8 pad[20]; O8020C12C *f14; };
extern "C" {
s32 fn_8020C12C(const P8020C12C *p) { return *p->f14->m(); }

} /* extern "C" */
