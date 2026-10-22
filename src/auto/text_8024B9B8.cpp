// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct I8024B9B8 {
    u8 pad0[28];
    u32 f1C;
    u8 pad20[4];
    s32 f24;
    u8 pad28[244];
    u8 f11C;
};
struct S8024B9B8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void f11(s32);
    u8 pad4[24];
    u32 f1C;
    u8 pad20[8];
    s32 f28;
    s32 f2C;
    u8 pad30[48];
    s32 *f60;
    u8 pad64[8];
    I8024B9B8 **f6C;
};
extern "C" {

void fn_8024B9B8(S8024B9B8 *p) {
    s32 v = 0;
    if (p->f1C == 2 && p->f28 != 0) {
        switch (p->f60[p->f2C]) {
        case 1:
            v = p->f6C[p->f2C]->f24;
            break;
        case 2:
            v = (p->f6C[p->f2C]->f11C & 4) != 0;
            break;
        case 3:
            v = p->f6C[p->f2C]->f1C != 0;
            break;
        }
        if (v == 0) {
            p->f11(0);
        }
    }
}

} /* extern "C" */
